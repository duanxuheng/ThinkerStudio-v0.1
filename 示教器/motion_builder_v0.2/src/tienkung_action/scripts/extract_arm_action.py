#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
import pickle
from pathlib import Path
from typing import Iterable

import numpy as np


ARM_JOINT_IDS = [11, 12, 13, 14, 15, 16, 17, 21, 22, 23, 24, 25, 26, 27]
ARM_DOF_START = 4
# ARM_DOF_START = 1


def parse_mapping(value: str | None, dof_count: int) -> dict[int, int]:
    if value:
        mapping: dict[int, int] = {}
        for item in value.split(','):
            joint_id_text, column_text = item.split(':', 1)
            mapping[int(joint_id_text)] = int(column_text)
        return mapping

    required = ARM_DOF_START + len(ARM_JOINT_IDS)
    if dof_count < required:
        raise ValueError(
            f'dof_pos only has {dof_count} columns, cannot extract arm joints from '
            f'[{ARM_DOF_START}, {required - 1}]'
        )

    # Motion convention: dof_pos[0] is body_yaw_joint, arm joints are dof_pos[1..14].
    return {
        joint_id: ARM_DOF_START + offset
        for offset, joint_id in enumerate(ARM_JOINT_IDS)
    }


def load_motion(path: Path) -> dict:
    with path.open('rb') as handle:
        data = pickle.load(handle)

    if not isinstance(data, dict):
        raise TypeError(f'{path} must contain a dict, got {type(data)!r}')
    if 'dof_pos' not in data:
        raise KeyError(f'{path} has no dof_pos field')

    dof_pos = np.asarray(data['dof_pos'], dtype=float)
    if dof_pos.ndim != 2:
        raise ValueError(f'dof_pos must be 2-D, got shape {dof_pos.shape}')

    data['dof_pos'] = dof_pos
    return data


def every_n(values: np.ndarray, source_fps: float, target_hz: float) -> np.ndarray:
    if source_fps <= 0:
        raise ValueError('source fps must be positive')
    if target_hz <= 0:
        raise ValueError('target hz must be positive')
    if abs(source_fps - target_hz) < 1e-6:
        return values

    source_times = np.arange(values.shape[0], dtype=float) / source_fps
    duration = source_times[-1]
    target_times = np.arange(0.0, duration + 1e-9, 1.0 / target_hz)
    output = np.empty((len(target_times), values.shape[1]), dtype=float)
    for column in range(values.shape[1]):
        output[:, column] = np.interp(target_times, source_times, values[:, column])
    return output


def select_frames(values: np.ndarray, start_frame: int, end_frame: int | None) -> np.ndarray:
    if end_frame is None:
        end_frame = values.shape[0]
    selected = values[start_frame:end_frame]
    if selected.size == 0:
        raise ValueError('selected frame range is empty')
    return selected


def round_list(values: Iterable[float], digits: int) -> list[float]:
    return [round(float(value), digits) for value in values]


def build_action(
    dof_pos: np.ndarray,
    mapping: dict[int, int],
    topic: str,
    spd: float,
    cur: float,
    digits: int,
) -> dict:
    ordered_pairs = sorted(mapping.items())
    joint_ids: list[int] = []
    columns: list[int] = []
    for joint_id, column in ordered_pairs:
        if column < 0 or column >= dof_pos.shape[1]:
            raise IndexError(f'column {column} for joint {joint_id} out of range 0..{dof_pos.shape[1] - 1}')
        joint_ids.append(int(joint_id))
        columns.append(int(column))

    keys = [
        round_list(frame, digits)
        for frame in dof_pos[:, columns].tolist()
    ]

    return {
        'actions': [
            {
                'topic': topic,
                'message_type': 'bodyctrl_msgs/msg/CmdSetMotorPosition',
                'opts': {
                    'spd': spd,
                    'cur': cur,
                },
                'data': {
                    'join_id': joint_ids,
                    'keys': keys,
                },
            }
        ]
    }


def main() -> None:
    parser = argparse.ArgumentParser(
        description='Extract arm joints from a motion pkl to sample action JSON.',
    )
    parser.add_argument('input', type=Path, help='Input motion pkl path')
    parser.add_argument('-o', '--output', type=Path, required=True, help='Output action JSON path')
    parser.add_argument('--topic', default='/arm/cmd_pos', help='ROS topic for CmdSetMotorPosition')
    parser.add_argument('--target-hz', type=float, default=30.0, help='Output sample rate')
    parser.add_argument('--start-frame', type=int, default=0, help='Inclusive start frame')
    parser.add_argument('--end-frame', type=int, default=None, help='Exclusive end frame')
    parser.add_argument('--spd', type=float, default=3.0, help='MotorCtrl.spd for every joint')
    parser.add_argument('--cur', type=float, default=12.0, help='MotorCtrl.tor/current for every joint')
    parser.add_argument('--digits', type=int, default=6, help='Decimal digits in JSON')
    parser.add_argument(
        '--mapping',
        default=None,
        help='Optional joint-to-column mapping, e.g. "11:13,12:14,...,27:26". '
        'Default uses dof_pos[1..14] (dof_pos[0] is body_yaw_joint) mapped to joints 11-17 and 21-27.',
    )

    args = parser.parse_args()
    motion = load_motion(args.input)
    fps = float(motion.get('fps', args.target_hz))
    dof_pos = select_frames(motion['dof_pos'], args.start_frame, args.end_frame)
    dof_pos = every_n(dof_pos, fps, args.target_hz)
    mapping = parse_mapping(args.mapping, dof_pos.shape[1])

    action = build_action(
        dof_pos=dof_pos,
        mapping=mapping,
        topic=args.topic,
        spd=args.spd,
        cur=args.cur,
        digits=args.digits,
    )

    args.output.parent.mkdir(parents=True, exist_ok=True)
    with args.output.open('w', encoding='utf-8') as handle:
        json.dump(action, handle, ensure_ascii=False, indent=2)
        handle.write('\n')

    print(f'fps={fps:g}, frames={dof_pos.shape[0]}, dof={dof_pos.shape[1]}')
    print('mapping=' + ','.join(f'{joint}:{column}' for joint, column in mapping.items()))
    print(f'wrote {args.output}')


if __name__ == '__main__':
    main()