# SDK 开发手册

## lyre 语音包

### 程序包及安装位置

`lyre` 语音包包括 `lyre_ros2`、`lyre_msgs` 和 `lyre_examples` 三个程序包。

- `lyre_ros2` 是语音包的功能程序包，安装在 x86 主控中。
- `lyre_msgs` 是语音包的接口定义。该接口定义同时安装在 x86 的 `ros2ws` 和 `lyre_ros2` 目录。
- `lyre_examples` 是语音包接口的调用示例程序。该示例程序安装在 x86 的 `ros2ws` 目录。

`lyre` 语音包程序的目录结构如下：

```
├── ros2ws/                # x86
│   ├── install
│   │   ├── lyre_msgs      # 接口定义
│   │   │   ├── README.md  # SDK 开发文档
│   │   ├── lyre_examples  # 接口调用示例程序
|
├── ros2ws/             # x86
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

### 启动语音包

语音包的 ROS 包名为 `lyre`，在 `systemd` 中的服务名称也是 `lyre`。

#### 手动启动语音 ROS 节点

在 `lyre_ros2` 程序包中使用下面的命令启动语音对话的 ROS 节点。

```
cd lyre_ros2
source install/setup.bash
ros2 launch lyre play.launch.py
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

**部署 lyre 开机自启动服务**

`lyre_ros2` 程序包给出了自启动服务的部署脚本 `setup_systemd.sh`，该脚本位于 `lyre_ros2/scripts` 目录下。使用方法如下：

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
