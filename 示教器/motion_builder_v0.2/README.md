# 天工行者机器人：示教器生成到真机部署

## 说明
- **参考框架**: ROS 2 Humble + Python GUI
- **适配机型**: 天工无疆（Pro）
- **操作系统**: Ubuntu 22.04
- **依赖环境**: ROS 2 Humble、Python 3.10+

---

## 一、环境要求

| 项目 | 要求 |
|------|------|
| 操作系统 | Ubuntu 22.04 |
| ROS 2 版本 | Humble |
| Python | 3.10+ |
| ROS 2 软件包 | ros-humble-desktop、colcon-common-extensions、robot-state-publisher、joint-state-publisher、xacro、rviz2 |
| Python 依赖 | python3-tk、inputs、pynput（用于 sim_joy 遥控器监听） |
| 外部消息包 | lyre_msgs（音频控制）、bodyctrl_msgs（关节控制）- 已包含在 `other_install/` 目录中 |

---

## 二、项目结构

```
motion_builder/
├── run_create.sh                    # 启动时间轴编辑器
├── run_editer.sh                    # 启动动作精修工具
├── run_sim.sh                       # 启动仿真播放环境
├── run_real.sh                      # 启动真实机播放环境
├── save/                            # 动作文件存储目录
├── src/
│   ├── tienkung_action/             # 动作播放包
│   │   ├── config/
│   │   │   └── scenarios.json       # 场景配置文件
│   │   └── scripts/
│   │       └── extract_arm_action.py # 动作提取工具
│   ├── tiangong2pro_urdf/           # 机器人URDF模型包
│   │   └── launch/
│   │       ├── editer.launch.py     # 时间轴编辑器启动文件（被run_create.sh调用）
│   │       ├── interactive_gui.launch.py # Pose创建器启动文件（被run_editer.sh调用）
│   │       └── simulation.launch.py # 仿真环境启动文件
│   └── sim_joy/                     # 遥控器手柄控制包
├── install/                         # 编译输出目录
│   └── tienkung_action/
│       └── share/
│           └── tienkung_action/
│               └── config/
│                   ├── scenarios.json # 运行时使用的场景配置
│                   └── actions/             # 动作JSON文件目录
│                      ├── editer/          # 动作编辑器保存目录
│                      └── create/          # 动作录制器保存目录
└── other_install/                   # 外部依赖消息包
    ├── lyre_msgs/                   # 音频播放控制消息
    └── bodyctrl_msgs/               # 机器人关节控制消息
```

---

## 三、快速开始

### 启动命令

| 功能 | 命令 | 说明 |
|------|------|------|
| Pose创建器 | `./run_create.sh` | 通过关节数值创建新动作 |
| 动作精修 | `./run_editer.sh` | 对已有动作进行精细调整，检查动作超速 |
| 仿真播放 | `./run_sim.sh` | 在仿真环境中播放动作 |
| 真实机播放 | `./run_real.sh` | 在真实机器人上播放动作 |

### 使用前提

1. **确保 ROS 2 Humble 已安装并 source**:
   ```bash
   source /opt/ros/humble/setup.bash
   ```

2. **脚本会自动完成以下操作**:
   - Source 依赖消息包 (lyre_msgs, bodyctrl_msgs)
   - 编译相关包
   - Source 工作空间
   - 启动对应的 GUI 或节点

3. **直接运行即可**，无需额外配置：
   ```bash
   cd ~/motion_builder
   ./run_create.sh    # 启动Pose创建器
   ./run_editer.sh    # 启动动作精修工具，检查动作超速
   ./run_sim.sh       # 启动仿真播放
   ./run_real.sh      # 启动真实机播放
   ```

---

## 四、运行脚本详细说明

### 4.1 ./run_create.sh - Pose创建器（通过关节数值创建动作）

**功能**: 通过关节数值调节控制机器人，添加关键帧(pose)和时间，生成动作文件。

**启动内容**:
- `robot_state_publisher` - 机器人状态发布
- `sim_joint_bridge` - 仿真关节桥接
- `action_editor.py` - 时间轴编辑GUI
- `rviz2` - 3D可视化界面

**文件保存位置**:
```
install/tienkung_action/share/tienkung_action/config/actions/create/
└── {项目名}/
    ├── {项目名}.json      # Pose设定文件（保存各个关键帧的关节数据）
    └── action.json        # 动作文件（Generate生成，用于播放）
```

每个项目保存为一个独立的子目录，包含：
- **{项目名}.json** - 通过"Save Project"保存的项目文件，记录所有pose的关节数据和时间设置
- **action.json** - 点击"Generate"按钮生成的动作文件，可直接用于仿真和真机播放

**GUI界面详细说明**:

**左侧关节控制面板**:
- 每个关节有滑块(slider)和数值输入框(spinbox)
- 实时调节关节角度，机器人即时响应
- 支持关节：头部、手臂、灵巧手

**右侧动作管理面板**:
- **Load Project** - 加载已保存的项目文件（包含所有pose）
- **Save Project** - 保存当前项目
- **Save As** - 另存为新项目
- **Save Pose** - 保存当前机器人姿态为一个关键帧
- **Add** - 添加新的pose到序列
- **Delete** - 删除选中的pose
- **Move Up/Down** - 调整pose在序列中的顺序
- **Generate** - 将pose序列转换为动作JSON文件
- **Convert** - 转换为编辑器格式，保存到 `install/tienkung_action/share/tienkung_action/config/actions/editer/` 目录
- **Load Action** - 加载已有动作文件
- **Play/Stop** - 播放/停止预览动作
- **Zero** - 机器人归零

**时间控制**:
- Move时间：pose之间的运动时间
- Dwell时间：pose保持时间

> **手指编辑技巧**：编辑手指动作时，建议先调整四指（食指、中指、无名指、小指），最后再收拢大拇指，这样可以避免手指相互卡住。

---

### 4.2 ./run_editer.sh - 动作精修工具（对已创建的动作进行精细调整，检查动作超速）

**功能**: 加载在 create 中创建的动作文件，对特定帧范围进行精细调整和修正。

**启动内容**:
- `robot_state_publisher` - 机器人状态发布
- `sim_joint_bridge` - 仿真关节桥接
- `action_editor.py` - 时间轴编辑GUI
- `rviz2` - 3D可视化界面

**文件位置**:
```
# 加载文件地址：
install/tienkung_action/share/tienkung_action/config/actions/editer/{动作名}.json

# 保存文件地址：
install/tienkung_action/share/tienkung_action/config/actions/{动作名}.json
```

检测动作是否超速，可以通过速度平滑按钮解决部分超速问题，直接保存精修后的动作JSON文件，可直接用于仿真和真机播放。

> **注意**: 
> - 核心功能是精修动作和检查超速，动作编辑之后一定要检查超速问题
> - 完成精修或排除超速问题之后，需要确保点击保存按钮，不然就不能将修改的动作文件放到对应的文件下

**GUI界面详细说明**:

**顶部文件操作栏**:
- **加载动作** - 打开文件选择对话框，加载JSON动作文件
- **重新加载** - 重新加载当前文件，放弃未保存的修改
- **保存** - 保存当前修改到原文件
- **另存为** - 将当前修改保存为新文件
- **检查超速** - 检查动作中是否存在超过速度限制的帧
- **速度平滑** - 自动修正超速问题，进行平滑处理

**时间轴区域**:
- 可视化显示动作的时间轴和所有帧
- 拖动选择帧范围进行编辑
- 红色指针表示当前帧位置
- 蓝色背景表示选中的编辑区域

**播放控制**:
- **播放** - 从当前帧开始播放动作
- **暂停** - 暂停播放
- **停止** - 停止播放并回到第一帧
- **预览当前帧** - 在RViz中显示当前帧的机器人姿态
- **拖动时自动预览** - 勾选后拖动滑块时自动预览

**帧选择区域**:
- **开始帧** - 设置编辑范围的起始帧
- **结束帧** - 设置编辑范围的结束帧
- **开始设为当前帧** - 将当前帧设为开始帧
- **结束设为当前帧** - 将当前帧设为结束帧
- 显示选中帧数和持续时间

**关节编辑区域**:
- **新增分组** - 创建新的关节编辑组
- 每组包含：关节编号、调整值、操作按钮
- **应用到选区** - 将调整应用到选中的帧范围
- **预览** - 预览编辑效果（不保存）
- **撤销预览** - 恢复预览前的状态
- **平滑帧数** - 设置边缘平滑的帧数

**可用关节列表**:
- 显示动作中包含的所有关节
- 双击关节将其加入当前编辑组
- 支持多选

> **注意**: 脚本名称与功能存在命名混淆：
> - `run_create.sh` 虽然叫"create"，但实际运行的是时间轴**编辑器**（用于精修已有动作文件）
> - `run_editer.sh` 虽然叫"editer"，但实际运行的是Pose**创建器**（用于超速检查，速度i平滑，通过关节数值创建实现矫正动作）
> - 使用时请按实际功能选择，不要被脚本名称误导

---

### 4.3 ./run_sim.sh - 仿真播放环境

**功能**: 在仿真环境中完整播放动作序列，包含音频和动作。

**启动内容**:
- `robot_state_publisher` - 机器人状态发布
- `sim_joint_bridge` - 仿真关节桥接
- `audio_service` - 音频播放服务
- `sim_joy` - 遥控器事件监听（节点名）
- `trigger_player` - 动作播放节点
- `rviz2` - 3D可视化界面

**使用的配置文件**:
```
src/tienkung_action/config/scenarios.json
```

**音频文件位置**:
```bash
# 真机音频地址设定
"audio_base_dir": "/home/nvidia/{voice_project}"

# 本地音频地址设定
"sim_base_dir": "src/tienkung_action/data/{voice_project}",
```

**动作文件目录**:
```
install/tienkung_action/share/tienkung_action/config/actions/
```

**配置文件格式说明** (scenarios.json routines):

在 `scenarios.json` 的 `routines` 数组中，每个条目可以有以下三种配置方式：

**1. 只有声音** (voice_only):
```json
{
  "name": "voice_only",
  "audio": "1.mp3",
  "audio_duration_sec": 29.0
}
```
- `audio`: 音频文件名（文件需放在 `/home/nvidia` 目录）
- `audio_duration_sec`: 音频播放时长（秒），根据MP3文件实际时长设定

**2. 声音和动作同时执行**:
```json
{
  "name": "动作文件名1",
  "audio": "3.mp3",
  "audio_duration_sec": 2.0,
  "action_file": "actions/动作文件名1.json",
  "action_start_offset_sec": 0.0,
  "post_wait_sec": 1.0
}
```
- `audio`: 音频文件名
- `audio_duration_sec`: 音频播放时长
- `action_file`: 动作文件路径（相对于 `actions/` 目录）
- `action_start_offset_sec`: 动作开始偏移时间
- `post_wait_sec`: 动作结束后等待时间

**3. 只有动作**:
```json
{
  "name": "动作文件名2",
  "action_file": "actions/动作文件名2.json",
  "action_start_offset_sec": 0.0,
  "post_wait_sec": 1.0
}
```
- 仅执行动作，不播放音频

**控制流程说明**:

**前置准备**: 确保 scenarios.json 中配置正确：
- `button_e: -1` (E键抬起)
- `button_f: 1` (F键按下)

**操作步骤**:

| 步骤 | 操作 | 说明 |
|------|------|------|
| 1 | 将F模式设置为down | 按下F键，button_f = 1 |
| 2 | 长按A键 | 机器人进入站立姿态 |
| 3 | 将E模式设置为up | 抬起E键，button_e = -1 |
| 4 | 准备完成 | 等待触发 |
| 5 | 按B键，再按A键 | 开始播放第一个动作（如抬手握拳） |
| 6 | 再次按B键 | 切换到下一个动作（如播放mp3） |
| 7 | 再次按B键 | 切换到下一个动作（如手落下） |
| 8 | 重复B+A | 进入下一轮动作序列 |

**控制逻辑**:
- **B键** - 预备(arm)，使能触发器，1秒内有效
- **A键** - 执行(fire)，播放当前选中的动作
- **B+A为一轮** - 按B预备，再按A执行当前动作
- **按B切换下一个** - 一个动作播放完后，按B键切换到预设的下一个动作，再次按A播放

**执行模式** (由 scenarios.json 中的 `mode` 字段决定):

| 模式 | 配置 | 说明 |
|------|------|------|
| Step | `"mode": "step"` | 每次B+A执行一个routine，按B切换到下一个，适合调试 |
| Batch | `"mode": "batch"` | 一次B+A执行全部routines，适合完整表演 |

---

### 4.4 ./run_real.sh - 真实机播放环境

**功能**: 在真实机器人上播放动作序列（不启动仿真环境，只运行 trigger_player 节点）。

---

#### 部署步骤

##### 一、上传文件包

#### 1. 上传 MP3 音频文件到 nvidia

```bash
# 上传 mp3 文件
scp ./user_voice.zip nvidia@192.168.41.2:~/
```

#### 2. 上传文件包到 nvidia 控制板

```bash
# 将 motion_builder 项目打包并上传
scp ./motion_builder.zip nvidia@192.168.41.2:~
```

> **注意**：根据具体的 MP3 文件时间，在 scenarios.json 中设定对应的 `audio_duration_sec` 参数

---

##### 二、连接机器人并编译

#### 1. SSH 连接到机器人 nvidia 板
```bash
ssh nvidia@192.168.41.2

# 启动语音服务（方式一：直接启动）
ros2 launch lyre chat.launch.py

# 启动语音服务（方式二：systemctl服务）
sudo systemctl start lyre.service

# 查看是否开启了语音服务
systemctl status lyre.service

# 重启语音服务
sudo systemctl restart lyre.service
```

#### 2. 解压并编译
```bash
# 解压文件包
unzip user_voice.zip

# 解压 motion_builder
unzip motion_builder.zip

# 进入项目目录
cd motion_builder

# 清理旧的编译文件
rm -rf build install log

# 编译项目
colcon build
```

---

##### 三、运行真机操作流程

#### 1. 机器人准备与站立

**⚠️ 重要安全提示**：按下 D 键前，机器人必须固定在保护支架上！

| 步骤 | 操作 | 说明 |
|------|------|------|
| 1 | 按遥控器上的 **D 键** | 机器人回零到初始状态 |
| 2 | 控制保护支架缓慢下降 | 将机器人放置到地面 |
| 3 | 保持机器人竖直状态 | 保持 **60 秒** 稳定 |
| 4 | 确认 **H 拨杆**位置 | 必须处于初始的中间零位 |
| 5 | 长按 **A 键** | 使机器人站立 |
| 6 | 观察机器人状态 | 检查是否站立平衡（无抖动、无前后倾倒） |

> 如不平衡，重复以上操作再次尝试。

#### 2. 启动播放程序

```bash
./run_real.sh
```

#### 3. 播放动作流程

| 步骤 | 操作 | 说明 |
|------|------|------|
| 1 | 将 **F 模式**设置为 down | 按下 F 键，button_f = 1 |
| 2 | 长按 **A 键** | 机器人进入站立 |
| 3 | 将 **E 模式**设置为 up | 抬起 E 键，button_e = -1 |
| 4 | 长按 **A 键** | 准备完成 |
| 5 | 按 **B 键**，再按 **A 键** | 开始播放动作或语音 |
| 6 | 再次按 **B 键** | 切换下一个动作（或播放誓言 mp3 文件） |

**再次演示**：
- 只需再次按 **B 键**，再按 **A 键**，即可重新开始播放动作序列

---

##### 四、关闭机器人

关闭机器人时，请严格遵循以下步骤：

| 步骤 | 操作 | 现象/说明 |
|------|------|----------|
| 1 | 确认机器人已停止并返回站立状态 | 确保动作已完成 |
| 2 | 按下遥控器上的 **C 键** | 使机器人僵停 |
| 3 | 将机器人固定在支架上，并向上吊起 | 确保机器人安全悬空 |
| 4 | 按下急停按钮 | 开/关机键指示灯：变为 **红色** |
| 5 | 长按开/关机键 **6 秒** | 开/关机键指示灯：变为 **蓝色** |
| 6 | 按下总开关键 | 此时所有指示灯全部熄灭 |
| 7 | 遥控器电源键先短按后长按 | 关闭遥控器 |

---

## 五、文件保存位置汇总

| 工具/脚本 | 保存位置 | 说明 |
|----------|---------|------|
| run_create.sh（Pose创建器） | `install/tienkung_action/share/tienkung_action/config/actions/create/` | 通过关节数值创建动作的制作区，通常包含项目文件和生成的 `action.json` |
| run_editer.sh（动作精修工具） | `install/tienkung_action/share/tienkung_action/config/actions/editer/` | 动作精修、检查超速、平滑处理的工作区 |
| 源码动作文件 | `src/tienkung_action/config/actions/` | 用于长期保存和随项目打包的动作 JSON，重新编译后会安装到 `install/` |
| scenarios.json（源码配置） | `src/tienkung_action/config/scenarios.json` | 用于长期保存和随项目打包的场景配置 |
| scenarios.json（安装产物） | `install/tienkung_action/share/tienkung_action/config/scenarios.json` | 编译后生成的运行时配置副本 |
| 运行时动作文件 | `install/tienkung_action/share/tienkung_action/config/actions/` | 播放器运行时读取动作的目录，包含根目录动作和可能存在的子目录动作 |


---

## 六、动作 JSON 文件流转说明

这一节说明动作文件从创建、精修、仿真到真机部署时分别保存在哪里，以及播放器最终读取哪个配置和动作文件。

### 6.1 创建动作：run_create.sh 保存到哪里

运行：

```bash
./run_create.sh
```

Pose创建器保存的文件通常在：

```bash
install/tienkung_action/share/tienkung_action/config/actions/create/
```

常见结构：

```bash
install/tienkung_action/share/tienkung_action/config/actions/create/{项目名}/
├── {项目名}.json
└── action.json
```

其中：
- `{项目名}.json` 是项目文件，用于以后继续打开和修改 pose。
- `action.json` 是生成出来的动作文件，可以继续送到精修工具处理。

### 6.2 精修动作：run_editer.sh 保存到哪里

运行：

```bash
./run_editer.sh
```

动作精修工具常用位置：

```bash
install/tienkung_action/share/tienkung_action/config/actions/editer/
```

精修、检查超速、速度平滑之后保存的动作，可以放在：

```bash
install/tienkung_action/share/tienkung_action/config/actions/editer/{动作名}.json
```

也可以放在：

```bash
install/tienkung_action/share/tienkung_action/config/actions/{动作名}.json
```

只要 `scenarios.json` 里的 `action_file` 路径和实际文件位置一致，就可以播放。

### 6.3 仿真播放：run_sim.sh 读取哪里

运行：

```bash
./run_sim.sh
```

仿真播放使用的场景配置是：

```bash
src/tienkung_action/config/scenarios.json
```

`scenarios.json` 里的 `action_file` 决定具体读哪个动作文件。

如果写：

```json
"action_file": "actions/stop.json"
```

则动作文件应在：

```bash
install/tienkung_action/share/tienkung_action/config/actions/stop.json
```

如果写：

```json
"action_file": "actions/editer/stop.json"
```

则动作文件应在：

```bash
install/tienkung_action/share/tienkung_action/config/actions/editer/stop.json
```

仿真音频目录由 `sim_base_dir` 指定，当前默认是：

```bash
src/tienkung_action/data/traffic_voice/
```

### 6.4 真机部署：需要打包哪些文件

真机部署时，需要把整个项目目录打包上传，例如：

```bash
motion_builder.zip
```

项目包里应包含：
- `src/tienkung_action/config/scenarios.json`
- `src/tienkung_action/config/actions/` 中需要随项目保存的动作文件
- `src/tienkung_action/data/traffic_voice/` 中用于仿真的音频文件
- `run_real.sh`、`src/`、`other_install/` 等项目运行文件

如果你的 `scenarios.json` 引用的是 `actions/editer/{动作名}.json`，需要确认真机解压并编译/运行前，对应文件也在运行时目录：

```bash
install/tienkung_action/share/tienkung_action/config/actions/editer/{动作名}.json
```

如果希望动作随项目源码一起打包，建议额外保存一份到：

```bash
src/tienkung_action/config/actions/{动作名}.json
```

然后在 `scenarios.json` 中引用：

```json
"action_file": "actions/{动作名}.json"
```

真机音频由 `audio_base_dir` 指定，当前默认是：

```bash
/home/nvidia/traffic_voice/
```

因此真机上还需要把 mp3 文件放到：

```bash
/home/nvidia/traffic_voice/
```

### 6.5 真机运行：run_real.sh 读取哪个 scenarios.json

真机运行：

```bash
./run_real.sh
```

脚本会编译并安装 `tienkung_action`，安装后的配置副本在：

```bash
install/tienkung_action/share/tienkung_action/config/scenarios.json
```

实际播放时，`trigger_player` 会根据安装后的 `scenarios.json` 读取动作和音频。为了让修改在重新编译、重新部署后仍然保留，建议主要修改源码里的：

```bash
src/tienkung_action/config/scenarios.json
```

然后重新运行：

```bash
./run_real.sh
```

只要 `action_file` 写的路径和实际文件位置一致，播放器就能找到动作。

---

## 七、配置文件说明

### 7.1 scenarios.json 结构

```json
{
  "mode": "step",                    // 执行模式: "step" 或 "batch"
  "trigger": {
    "required_states": {
      "button_e": -1,                // E键必须抬起
      "button_f": 1                  // F键必须按下
    },
    "arm_event": "KEY_B_DOWN",       // B键按下为预备
    "fire_event": "KEY_A_DOWN",      // A键按下为执行
    "window_sec": 1.0                // 预备有效期（秒）
  },
  "sbus_topic": "/sbus_data/event",  // 遥控器话题
  "audio_base_dir": "/home/nvidia/traffic_voice",  // 音频文件目录（真实机）
  "sim_base_dir": "src/tienkung_action/data/traffic_voice",  // 音频文件目录（仿真）
  "routines": [                      // 动作序列
    {
      "name": "stop",                // 动作名称
      "audio": "stop.mp3",
      "audio_duration_sec": 2.0,
      "action_file": "actions/editer/stop.json",
      "action_start_offset_sec": 0.0,
      "post_wait_sec": 1.0
    },
    {
      "name": "pass",
      "audio": "pass.mp3",
      "audio_duration_sec": 2.0,
      "action_file": "actions/editer/pass.json",
      "action_start_offset_sec": 0.0,
      "post_wait_sec": 1.0
    }
  ]
}
```

### 7.2 动作JSON文件结构

```json
{
  "actions": [
    {
      "topic": "/arm/cmd_pos",       // 控制话题
      "message_type": "bodyctrl_msgs/msg/CmdSetMotorPosition",
      "opts": {
        "spd": 2.0,                  // 速度限制
        "cur": 8.0                   // 电流限制
      },
      "data": {
        "join_id": [11, 12, 13],     // 关节ID列表
        "keys": [                    // 30Hz关键帧序列
          [-0.14, 0.11, -0.02],      // 第1帧
          [-0.10, 0.11, -0.08]       // 第2帧
        ]
      }
    }
  ]
}
```

**路径配置说明**:
- `audio_base_dir`: 真实机器人上的音频文件路径，默认为 `/home/nvidia`
- `sim_base_dir`: 仿真环境下声音文件路径，已配置为相对路径
- `action_file`: 动作文件路径，相对于 scenarios.json 所在目录

> **注意**: 如果需要在其他系统上使用，请根据实际情况修改 `audio_base_dir` 路径。

---

## 八、常用命令

### 8.1 编译

```bash
# 只编译动作包
colcon build --packages-select tienkung_action

# 编译仿真相关包
colcon build --packages-select tiangong2pro_urdf sim_joy tienkung_action

# 清理后重新编译
colcon build --cmake-clean-cache --packages-select tienkung_action
```

### 8.2 手动启动节点

```bash
# Source环境
source /opt/ros/humble/setup.bash
source other_install/lyre_msgs/share/lyre_msgs/local_setup.bash
source other_install/bodyctrl_msgs/share/bodyctrl_msgs/local_setup.bash
source install/setup.bash

# 启动播放器
ros2 run tienkung_action trigger_player
```

### 8.3 调试话题

```bash
# 查看遥控器事件
ros2 topic echo /sbus_data/event

# 查看所有话题
ros2 topic list

# 查看话题信息
ros2 topic info /arm/cmd_pos
```

---

## 九、故障排查

### 9.1 FileNotFoundError: Action file not found

**原因**: scenarios.json中引用的动作文件路径不正确。

**解决方案**:
1. 检查 `scenarios.json` 中的 `action_file` 路径
2. 确保文件存在于 `install/tienkung_action/share/tienkung_action/config/actions/`
3. 如使用 `editer/` 子目录，路径应为 `actions/editer/xxx.json`

### 9.2 编译错误

**问题**: `PackageNotFoundError`

**解决方案**:
```bash
# 确保已source ROS 2环境
source /opt/ros/humble/setup.bash

# 确保已source依赖消息包
source other_install/lyre_msgs/share/lyre_msgs/local_setup.bash
source other_install/bodyctrl_msgs/share/bodyctrl_msgs/local_setup.bash

# 重新编译
colcon build --packages-select tienkung_action
```

### 9.3 动作没有响应

**检查项**:
- 遥控器事件是否正常: `ros2 topic echo /sbus_data/event`
- `required_states` 是否满足（E键up，F键down）
- 是否先按B键预备，再按A键执行
- 预备时间是否超过1秒

### 9.4 有动作但没声音

**检查项**:
- `audio_service` 是否正常运行（仅run_sim.sh启动）
- `audio_base_dir` 路径是否正确
- 音频文件是否存在

---

## 十、注意事项

1. **路径配置**: 修改源文件后必须重新编译才能生效
2. **文件权限**: 确保所有 `.sh` 脚本有执行权限
3. **环境变量**: 每次新开终端需要source环境，或添加到 `~/.bashrc`
4. **动作文件格式**: 必须严格遵循JSON格式，关节ID和角度数组长度要匹配
5. **速度限制**: 动作编辑器中的 `spd` 参数控制关节运动速度，避免超速
