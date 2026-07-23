# SDK 开发手册

## lyre 语音包

### 程序包及安装位置

`lyre` 语音包包括 `lyre_ros2`、`lyre_msgs` 和 `lyre_examples` 三个程序包。

- `lyre_ros2` 是语音包的功能程序包，安装在 orin 主控中。
- `lyre_msgs` 是语音包的接口定义。该接口定义同时安装在 x86 的 `ros2ws` 目录以及 `lyre_ros2` 目录。
- `lyre_examples` 是语音包接口的调用示例程序。该示例程序安装在 x86 的 `ros2ws` 目录。

`lyre` 语音包程序的目录结构如下：

```
├── ros2ws/                # x86
│   ├── install
│   │   ├── lyre_msgs      # 接口定义
│   │   │   ├── README.md  # SDK 开发文档
│   │   ├── lyre_examples  # 接口调用示例程序
|
├── ros2ws/             # orin
│   ├── install
│   │   ├── lyre_msgs      # 接口定义
│   │   │   ├── README.md  # SDK 开发文档
│   │   ├── lyre           # 功能包
│   ├── scripts
│   │   ├── setup_network.sh  # 网络配置脚本
│   │   ├── setup_systemd.sh  # 自启动服务部署脚本
│   │   ├── reset_systemd.sh  # 自启动服务卸载脚本
│   ├── README.md  # 用户手册
│   ├── QAs.md     # 常见问题
```

### 语音交互功能

机器人提供有语音交互功能。设备开机以后，语音交互功能为关闭状态。通过遥控器按键可以开启语音交互功能。

#### 遥控器开关

`E`、`G`、`H` 键在中间； `F` 键向上。

长按 `A` 键，可以打开/关闭语音交互功能。

#### 语音对话方式

站立在机器人正前方 1.5 米左右的位置，正视机器人胸前麦克风上方的摄像头，与机器人进行对话。

### 启动语音包

语音包的 ROS 包名为 `lyre`，在 `systemd` 中的服务名称也是 `lyre`。

#### 手动启动语音对话的 ROS 节点

在 `lyre_ros2` 程序包中使用下面的命令启动语音对话的 ROS 节点。

```
cd lyre_ros2
source install/setup.bash
ros2 launch lyre chat.launch.py
```

注意：机器人默认会在开始时自行启动 `lyre` 节点。同一时间只允许一个 `lyre` 进程运行。通过下面的命令检查系统中是否有其它 `lyre` 进程正在运行。

```
ps -ef | grep "ros2 launch lyre" | grep -v grep
```

如果有打印内容，则说明 `lyre` 进程正在运行。通过下面的命令可以关闭系统中正在运行的 `lyre` 进程。

```
pkill -INT -f "ros2 launch lyre"
```

注意：如果通过 `systemd` 配置了开机自启动服务，则需要在关闭自启动服务以后再结束进程。否则，手动结束的进程会被重新启动。具体操作参考后面的章节。

#### 开机自启动服务

出厂时，语音包的 `systemd` 服务 `lyre` 会在开机时自行启动。

**检查 lyre 服务是否会在开机时自启动**

```
systemctl is-enabled lyre
```

如果显示 enabled，则说明 lyre 服务会在开机时自启动。

**打开 lyre 服务开机自启动设置**

```
sudo systemctl enable lyre
```

**关闭 lyre 服务开机自启动设置**

```
sudo systemctl disable lyre
```

### 启动模式

`lyre` 语音包提供了四种运行模式，分别是 `play`、`asr`、`audio`、`chat`。接入者可以根据实际情况选用其中的一种。

注意：启动模式是互斥的。同一时间，只可以允许 4 种启动模式中的一种。

- `play`: 在此启动模式下，仅『音频播放』相关的功能可以使用。
- `asr`: 在此启动模式下，仅『语音识别』相关的功能可以使用。
- `audio`: 在此启动模式下，可以同时使用『语音识别』和『音频播放』功能，包括『文本播放』功能。
- `chat`: 在此启动模式下，可以同时使用『语音识别』、『音频播放』和『语音对话』功能。

不同模式的节点的启动命令统一为：

```
ros2 launch lyre <mode>.launch.py
```

例如，启动 audio 模式的命令为：

```
ros2 launch lyre audio.launch.py
```

**部署某个启动模式的开机自启动服务**

`lyre_ros2` 程序包给出了自启动服务的部署脚本 `setup_systemd.sh`，该脚本位于 `lyre_ros2/scripts` 目录下。使用方法如下：

```
bash setup_systemd.sh <mode>[default:chat]
```

例如：将 `play` 启动模式部署为自启动服务的命令如下：

```
bash setup_systemd.sh play
```

### 接口示例程序

`lyre_examples` 程序包提供了部分 `CPP` 版本的接口调用示例。程序包的目录结构如下：

```
lyre_examples/
├── bin/                            # 接口调用示例的可执行程序
│   ├── lyre_example_play_file_srv
├── cli/                            # 接口调用示例的终端执行脚本
│   ├── call_play_file_srv.sh
│   ├── sub_play_progress_msg.sh
├── src/                            # 接口调用示例的 CPP 代码
│   ├── play_file_srv.cpp
├── res/                            # 静态资料
│   ├── test.mp3
├── CMakeLists.txt                  # 项目 CMakeLists.txt 示例
├── package.xml                     # 项目 ROS package.xml 示例
```

对于每个开放的语音接口，`lyre_examples` 包都提供有接口调用的示例代码、编译后的可执行程序、终端调用脚本，分别放置在 `src`、`bin`、`cli` 目录。

为了避免混淆，每个演示所用的可执行程序的文件名前面都加了 `lyre_example_` 作为前缀。
每个用于订阅 Topic 的脚本的文件名都加了 `sub_` 作为前缀；
每个用于发布 Topic 的脚本的文件名都加了 `pub_` 作为前缀。
每个用于调用 Service 的脚本的文件名则都加了 `call_` 作为前缀。

对于二次开发的 CPP ROS2 项目，可以参考 `lyre_examples` 包中的方式导入 `lyre_msgs` 接口，再参考示例代码完成功能开发。

#### ROS package 配置

```
<package format="3">
  <depend>lyre_msgs</depend>
</package>
```

#### 项目 CMake 配置

```
find_package(lyre_msgs REQUIRED)

ament_target_dependencies(
  <your_target>
  lyre_msgs
)
```

#### 编译时、运行时依赖配置

x86 的 `ros2ws` 和 orin 的 `lyre_ros2` 提供了 `lyre_msgs` 包。在构建或者运行自己的 ROS 程序之前，需要先从这两个工作空间导入 `lyre_msgs` 依赖。

```
# x86
source ros2ws/install/setup.bash

# orin
source lyre_ros2/install/setup.bash
```

### 音频播放接口

#### 播放本地文件（Service）

如果你已经明确知道 `lyre_ros2` 程序包所在的主控板中有一个音频文件，你可以使用下面的 ROS 服务播放这个文件。

```
# lyre_msgs/srv/PlayFile.srv
# 以本地文件的形式播放一段语音。

string SERVICE_NAME = /audio_play/play_file

string sid    # Stream identifier (unique per audio stream).
uint32 seq    # Sequence number (incremental per packet).
bool   last   # Last flag (true if this is the final packet).
bool   force  # Force playback (stop all running tasks and play immediately).

string  path  # Absolute path to the audio file in the local file system.
---

int8 CODE_OK = 0
int8 CODE_INVALID_PARAMS = 1
int8 CODE_FAILED = -1

string sid      # Playback stream ID (generated internally if absent).
int8   code     # Status code.
string message  # Human-readable status message.
```

接口调用的 CPP 示例代码请参考 `lyre_examples` 程序包中的 `play_text_srv`。

#### 播放远程文件（Service）

你还可以使用下面的 ROS 服务来播放一个来自网络的音频文件。

```
# lyre_msgs/srv/PlayUrl.srv
# 以文件 URL 的形式播放一段语音。

string SERVICE_NAME = /audio_play/play_url

string sid    # Stream identifier (unique per audio stream).
uint32 seq    # Sequence number (incremental per packet).
bool   last   # Last flag (true if this is the final packet).
bool   force  # Force playback (stop all running tasks and play immediately).

string  url   # URL to the audio file in the network.
---

int8 CODE_OK = 0
int8 CODE_INVALID_PARAMS = 1
int8 CODE_FAILED = -1

string sid      # Playback stream ID (generated internally if absent).
int8   code     # Status code.
string message  # Human-readable status message.
```

接口调用的 CPP 示例代码请参考 `lyre_examples` 程序包中的 `play_url_srv`。

#### 播放文本（Service）

如果你需要从别的主控板访问音频播放服务，可以使用下面的 ROS 服务来播放一个字符串。

```
# lyre_msgs/srv/PlayText.srv
# 以文本的形式播放一段语音。

string SERVICE_NAME = /audio_play/play_text

string sid    # Stream identifier (unique per audio stream).
uint32 seq    # Sequence number (incremental per packet).
bool   last   # Last flag (true if this is the final packet).
bool   force  # Force playback (stop all running tasks and play immediately).

string  text   # Text to be synthesized into speech.

string  token   # System api (unavailable for applications).
string  output  # System api (unavailable for applications).
---

int8 CODE_OK = 0
int8 CODE_INVALID_PARAMS = 1
int8 CODE_FAILED = -1

string sid      # Playback stream ID (generated internally if absent).
int8   code     # Status code.
string message  # Human-readable status message.
```

接口调用的 CPP 示例代码请参考 `lyre_examples` 程序包中的 `play_text_srv`。

注意：此功能仅在 `audio` 和 `chat` 启动模式下才可用。

#### 监听播放事件（Topic）

播放音频的过程中会通过下面的 Topic 来发布播放事件：

```
# lyre_msgs/msg/PlayEvent.msg
# Play 音频播放的事件。

string TOPIC_NAME = /audio_play/event

int8 EVENT_STARTED   = 0
int8 EVENT_COMPLETED = 1
int8 EVENT_STOPPED   = 2
int8 EVENT_CANCELLED = 3
int8 EVENT_FAILED    = 4

string sid
uint32 seq
int8   event
string message
```

接口调用的 CPP 示例代码请参考 `lyre_examples` 程序包中的 `play_event_msg`。

#### 监听播放进度（Topic）

播放音频的过程中会通过下面的 Topic 来发布播放的进度及总时长（单位：秒）：

```
# lyre_msgs/msg/PlayProgress.msg
# Play 音频播放的进度。

string TOPIC_NAME = /audio_play/progress

string sid
uint32 seq
float64 position
float64 duration
```

接口调用的 CPP 示例代码请参考 `lyre_examples` 程序包中的 `play_progress_msg`。

#### 停止音频播放（Service）

通过下面的 ROS 服务来停止音频播放（停止以后无法恢复）：

```
# lyre_msgs/srv/PlayStop.srv
# 停止当前的音频播放任务（不可恢复）。

string SERVICE_NAME = /audio_play/stop

---
```

接口调用的 CPP 示例代码请参考 `lyre_examples` 程序包中的 `play_stop_srv`。

#### 暂停音频播放（Service）

通过下面的 ROS 服务来停止音频播放（暂停以后可以调用 Resume 服务恢复播放）：

```
# lyre_msgs/srv/PlayPause.srv
# 暂停当前的音频播放任务。

string SERVICE_NAME = /audio_play/pause

---
```

接口调用的 CPP 示例代码请参考 `lyre_examples` 程序包中的 `play_pause_srv`。

#### 恢复音频播放（Service）

通过下面的 ROS 服务来恢复播放暂停中的音频：

```
# lyre_msgs/srv/PlayResume.srv
# 恢复已暂停的音频播放任务。

string SERVICE_NAME = /audio_play/resume

---
```

接口调用的 CPP 示例代码请参考 `lyre_examples` 程序包中的 `play_resume_srv`。

### 语音识别接口

设备集成有语音识别模块，可以提供 ASR 语音识别功能。

#### 唤醒（Topic）

在设备周围喊出关键词，可以触发唤醒事件。不同设备的唤醒关键词请参考用户手册。

在代码中可以通过以下 ROS 话题来监听唤醒消息：

```
# lyre_msgs/msg/AsrKeyword.msg
# ASR 唤醒时识别到的关键字。

string TOPIC_NAME = /audio_asr/keyword

string keyword
int32  angle
```

接口调用的 CPP 示例代码请参考 `lyre_examples` 程序包中的 `asr_keyword_msg`。

#### 语音识别（Topic）

设备可以将周围的声音转化为文本。可以通过以下 ROS 话题获取识别到的文本：

```
# lyre_msgs/msg/AsrIat.msg
# ASR 语音识别到的内容。

string TOPIC_NAME = /audio_asr/iat

string id
string text
```

接口调用的 CPP 示例代码请参考 `lyre_examples` 程序包中的 `asr_iat_msg`。

#### 其它事件（Topic）

设备还会发布其它 ASR 相关的事件，事件类型定义在下面的 ROS 话题中：

```
# lyre_msgs/msg/AsrEvent.msg
# ASR 设备报出的事件。

string TOPIC_NAME = /audio_asr/event

int8 EVENT_ERROR   = 2  # 出错事件。arg1 是错误码。
int8 EVENT_STATE   = 3  # 服务状态事件。
int8 EVENT_WAKEUP  = 4  # 唤醒事件。
int8 EVENT_SLEEP   = 5  # 休眠事件。
int8 EVENT_VAD     = 6  # VAD 事件。

int8 EVENT_PRE_SLEEP            = 10  # 准备休眠事件。
int8 EVENT_CONNECTED_TO_SERVER  = 13  # 与服务端建立连接。
int8 EVENT_SERVER_DISCONNECTED  = 14  # 与服务端断开连接。

int8 event
int8 arg1
int8 arg2
```

接口调用的 CPP 示例代码请参考 `lyre_examples` 程序包中的 `asr_event_msg`。

#### aiui_msg 事件

SDK 兼容旧版本的 `/xunfei/aiui_msg` 话题，这个话题已经被标记为 Deprecated，未来很可能会被移除。

```
string TOPIC_NAME = /xunfei/aiui_msg
```

该话题的类型是 `std_msgs::msg::String`，可以通过下面的示例脚本获取到：

```
ros2 topic echo -f /xunfei/aiui_msg
```

### 语音对话接口

#### 语音交互开关

`lyre` 节点接收一个 ROS 话题来控制语音交互的可用状态。
