#!/usr/bin/env python3
"""
关键帧插值器 - 将多个姿态关键帧转换为可播放的动作序列

使用方法:
    python keyframe_interpolator.py --keyframes pose1.json pose2.json pose3.json \
                                     --durations 2.0 3.0 \
                                     --fps 100 \
                                     --output action.json \
                                     --method linear

参数说明:
    --keyframes: 关键帧JSON文件列表（按顺序）
    --durations: 每两个关键帧之间的过渡时间（秒），长度 = 关键帧数 - 1
    --fps: 输出动作的帧率（Hz）
    --output: 输出文件名
    --method: 插值方法 (linear, cubic, quintic)
"""

import json
import argparse
import numpy as np
from pathlib import Path
from typing import List, Dict, Tuple


# 与 interactive_gui.py 中定义的保持一致
SAVE_JOINTS = [
    # 头部 (3个)
    'head_roll_joint', 'head_pitch_joint', 'head_yaw_joint',
    # 左臂 (7个)
    'shoulder_pitch_l_joint', 'shoulder_roll_l_joint', 'shoulder_yaw_l_joint',
    'elbow_pitch_l_joint', 'elbow_yaw_l_joint', 'wrist_pitch_l_joint', 'wrist_roll_l_joint',
    # 右臂 (7个)
    'shoulder_pitch_r_joint', 'shoulder_roll_r_joint', 'shoulder_yaw_r_joint',
    'elbow_pitch_r_joint', 'elbow_yaw_r_joint', 'wrist_pitch_r_joint', 'wrist_roll_r_joint',
    # 左手 (6个)
    'left_little_1_joint', 'left_ring_1_joint', 'left_middle_1_joint',
    'left_index_1_joint', 'left_thumb_1_joint', 'left_thumb_2_joint',
    # 右手 (6个)
    'right_little_1_joint', 'right_ring_1_joint', 'right_middle_1_joint',
    'right_index_1_joint', 'right_thumb_1_joint', 'right_thumb_2_joint',
]

# 关节分组（用于robot_action格式输出）
JOINT_GROUPS = {
    'head': ['head_roll_joint', 'head_pitch_joint', 'head_yaw_joint'],
    'left_arm': [
        'shoulder_pitch_l_joint', 'shoulder_roll_l_joint', 'shoulder_yaw_l_joint',
        'elbow_pitch_l_joint', 'elbow_yaw_l_joint', 'wrist_pitch_l_joint', 'wrist_roll_l_joint'
    ],
    'right_arm': [
        'shoulder_pitch_r_joint', 'shoulder_roll_r_joint', 'shoulder_yaw_r_joint',
        'elbow_pitch_r_joint', 'elbow_yaw_r_joint', 'wrist_pitch_r_joint', 'wrist_roll_r_joint'
    ],
    'left_hand': [
        'left_little_1_joint', 'left_ring_1_joint', 'left_middle_1_joint',
        'left_index_1_joint', 'left_thumb_1_joint', 'left_thumb_2_joint'
    ],
    'right_hand': [
        'right_little_1_joint', 'right_ring_1_joint', 'right_middle_1_joint',
        'right_index_1_joint', 'right_thumb_1_joint', 'right_thumb_2_joint'
    ],
}


def load_keyframe(filepath: str) -> Dict[str, float]:
    """加载关键帧JSON文件"""
    with open(filepath, 'r', encoding='utf-8') as f:
        data = json.load(f)
    
    # 获取关节位置
    positions = data.get('joint_positions', {})
    
    # 确保所有SAVE_JOINTS中的关节都存在
    result = {}
    for joint in SAVE_JOINTS:
        result[joint] = positions.get(joint, 0.0)
    
    return result


def linear_interpolate(start: float, end: float, t: float) -> float:
    """线性插值"""
    return start + (end - start) * t


def cubic_interpolate(p0: float, p1: float, p2: float, p3: float, t: float) -> float:
    """
    三次样条插值（Catmull-Rom样条）
    p0, p1, p2, p3: 四个连续关键帧的值（p1到p2之间插值）
    t: 0到1之间的插值因子
    """
    # Catmull-Rom 样条系数
    t2 = t * t
    t3 = t2 * t
    
    return 0.5 * (
        (2 * p1) +
        (-p0 + p2) * t +
        (2*p0 - 5*p1 + 4*p2 - p3) * t2 +
        (-p0 + 3*p1 - 3*p2 + p3) * t3
    )


def quintic_interpolate(start: float, end: float, t: float) -> float:
    """
    五次多项式插值（S型曲线，速度起始和结束为0）
    适用于平滑的机器人运动
    """
    # 五次多项式: t^3 * (6t^2 - 15t + 10)
    t3 = t * t * t
    t4 = t3 * t
    t5 = t4 * t
    
    # 归一化插值因子: 6t^5 - 15t^4 + 10t^3
    s = 6*t5 - 15*t4 + 10*t3
    
    return start + (end - start) * s


def interpolate_keyframes(
    keyframes: List[Dict[str, float]], 
    durations: List[float], 
    fps: int,
    method: str = 'linear'
) -> List[Dict[str, float]]:
    """
    在关键帧之间插值生成完整动作序列
    
    Args:
        keyframes: 关键帧列表，每个是关节位置字典
        durations: 每段持续时间（秒）
        fps: 帧率
        method: 插值方法 ('linear', 'cubic', 'quintic')
    
    Returns:
        插值后的帧列表
    """
    frames = []
    dt = 1.0 / fps  # 每帧时间间隔
    
    for i in range(len(keyframes) - 1):
        start_pose = keyframes[i]
        end_pose = keyframes[i + 1]
        duration = durations[i] if i < len(durations) else durations[-1]
        
        # 这段过渡需要的帧数（至少2帧保证起点终点）
        n_frames = max(2, round(duration * fps))
        
        for j in range(n_frames):
            t = j / n_frames  # 插值因子 0-1
            
            frame = {}
            for joint in SAVE_JOINTS:
                start_val = start_pose[joint]
                end_val = end_pose[joint]
                
                if method == 'linear':
                    frame[joint] = linear_interpolate(start_val, end_val, t)
                elif method == 'quintic':
                    frame[joint] = quintic_interpolate(start_val, end_val, t)
                elif method == 'cubic':
                    # 对于三次插值，需要前后各一个关键帧
                    if i == 0:
                        # 第一段使用线性插值（因为没有p0）
                        frame[joint] = linear_interpolate(start_val, end_val, t)
                    elif i >= len(keyframes) - 2:
                        # 最后一段使用线性插值（因为没有p3）
                        frame[joint] = linear_interpolate(start_val, end_val, t)
                    else:
                        p0 = keyframes[i-1][joint]
                        p1 = start_val
                        p2 = end_val
                        p3 = keyframes[i+2][joint]
                        frame[joint] = cubic_interpolate(p0, p1, p2, p3, t)
                else:
                    frame[joint] = linear_interpolate(start_val, end_val, t)
            
            frames.append(frame)
    
    # 添加最后一个关键帧
    frames.append(keyframes[-1])
    
    return frames


def convert_to_robot_action_format(
    frames: List[Dict[str, float]], 
    fps: int
) -> Dict:
    """
    将插值后的帧转换为 robot_action 可播放的格式
    
    robot_action格式:
    {
        "frequency": 100,
        "count": 500,
        "frames": [
            {
                "left_arm": [...],
                "right_arm": [...],
                "left_spd": [...],
                "right_spd": [...],
                "scale": 1.0
            }
        ]
    }
    """
    action_frames = []
    
    for frame in frames:
        action_frame = {
            "left_arm": [frame[j] for j in JOINT_GROUPS['left_arm']],
            "right_arm": [frame[j] for j in JOINT_GROUPS['right_arm']],
            "left_spd": [0.0] * 7,  # 速度设为0
            "right_spd": [0.0] * 7,
            "scale": 1.0
        }
        action_frames.append(action_frame)
    
    return {
        "frequency": fps,
        "count": len(action_frames),
        "frames": action_frames
    }


def convert_to_full_joint_format(
    frames: List[Dict[str, float]],
    fps: int
) -> Dict:
    """
    转换为包含所有29个关节的格式（便于后续编辑和查看）
    """
    return {
        "frequency": fps,
        "count": len(frames),
        "frames": frames
    }


def convert_to_run_editer_format(
    frames: List[Dict[str, float]]
) -> Dict:
    """
    转换为 run_editer 兼容的格式

    run_editer格式:
    {
        "actions": [
            {
                "topic": "/arm/cmd_pos",
                "message_type": "bodyctrl_msgs/msg/CmdSetMotorPosition",
                "opts": {"spd": 3.0, "cur": 8.0},
                "data": {
                    "join_id": [11, 12, 13, 14, 15, 16, 17, 21, 22, 23, 24, 25, 26, 27],
                    "keys": [[...], [...], ...]  # 每个关键帧的关节位置
                }
            }
        ]
    }
    """
    # Motor ID mapping for arm joints
    motor_ids = [11, 12, 13, 14, 15, 16, 17, 21, 22, 23, 24, 25, 26, 27]

    # Joint names corresponding to motor IDs
    joint_names = [
        'shoulder_pitch_l_joint', 'shoulder_roll_l_joint', 'shoulder_yaw_l_joint',
        'elbow_pitch_l_joint', 'elbow_yaw_l_joint', 'wrist_pitch_l_joint', 'wrist_roll_l_joint',
        'shoulder_pitch_r_joint', 'shoulder_roll_r_joint', 'shoulder_yaw_r_joint',
        'elbow_pitch_r_joint', 'elbow_yaw_r_joint', 'wrist_pitch_r_joint', 'wrist_roll_r_joint'
    ]

    # Extract joint positions for each frame
    keys = []
    for frame in frames:
        frame_positions = []
        for jname in joint_names:
            frame_positions.append(frame.get(jname, 0.0))
        keys.append(frame_positions)

    return {
        "actions": [
            {
                "topic": "/arm/cmd_pos",
                "message_type": "bodyctrl_msgs/msg/CmdSetMotorPosition",
                "opts": {"spd": 3.0, "cur": 8.0},
                "data": {
                    "join_id": motor_ids,
                    "keys": keys
                }
            }
        ]
    }


def main():
    parser = argparse.ArgumentParser(description='关键帧插值生成动作序列')
    parser.add_argument('--keyframes', nargs='+', required=True, 
                        help='关键帧JSON文件列表（按顺序）')
    parser.add_argument('--durations', nargs='+', type=float, required=True,
                        help='每两个关键帧之间的过渡时间（秒），长度 = 关键帧数 - 1')
    parser.add_argument('--fps', type=int, default=100,
                        help='输出动作的帧率（Hz），默认100')
    parser.add_argument('--output', type=str, default='action.json',
                        help='输出文件名，默认action.json')
    parser.add_argument('--method', type=str, default='linear',
                        choices=['linear', 'cubic', 'quintic'],
                        help='插值方法：linear(线性), cubic(三次样条), quintic(五次多项式S型)，默认linear')
    parser.add_argument('--format', type=str, default='robot_action',
                        choices=['robot_action', 'full'],
                        help='输出格式：robot_action(兼容播放系统), full(完整关节信息)，默认robot_action')
    
    args = parser.parse_args()
    
    # 验证输入
    if len(args.keyframes) < 2:
        print("错误：至少需要2个关键帧")
        return
    
    if len(args.durations) != len(args.keyframes) - 1:
        print(f"错误：durations数量({len(args.durations)})应等于关键帧数-1({len(args.keyframes)-1})")
        return
    
    # 加载关键帧
    print(f"加载 {len(args.keyframes)} 个关键帧...")
    keyframes = []
    for i, filepath in enumerate(args.keyframes):
        if not Path(filepath).exists():
            print(f"错误：文件不存在: {filepath}")
            return
        pose = load_keyframe(filepath)
        keyframes.append(pose)
        print(f"  [{i+1}] {filepath}: {len(pose)} 个关节")
    
    print(f"\n插值参数:")
    print(f"  帧率: {args.fps} Hz")
    print(f"  方法: {args.method}")
    print(f"  过渡时间: {args.durations} 秒")
    total_time = sum(args.durations)
    print(f"  总时长: {total_time:.2f} 秒")
    
    # 执行插值
    print(f"\n正在插值...")
    frames = interpolate_keyframes(keyframes, args.durations, args.fps, args.method)
    print(f"  生成 {len(frames)} 帧")
    
    # 转换为输出格式
    if args.format == 'robot_action':
        output_data = convert_to_robot_action_format(frames, args.fps)
        print(f"\n输出格式: robot_action (仅双臂14个关节)")
    else:
        output_data = convert_to_full_joint_format(frames, args.fps)
        print(f"\n输出格式: full (全部29个关节)")
    
    # 保存文件
    with open(args.output, 'w', encoding='utf-8') as f:
        json.dump(output_data, f, ensure_ascii=False, indent=2)
    
    print(f"\n✓ 动作文件已保存: {args.output}")
    print(f"  总帧数: {output_data['count']}")
    print(f"  帧率: {output_data['frequency']} Hz")
    print(f"  预计播放时间: {output_data['count'] / output_data['frequency']:.2f} 秒")


if __name__ == '__main__':
    main()
