# 音频程序

## 模块接口描述

音频程序包提供了以下功能模块：

### 音频播放服务

设备出厂内置了丰富的音频播放 API，包括播放本地文件、播放远程文件、播放音频二进制数据等播放接口，以及停止、暂停、恢复等音频控制接口。

#### 播放本地文件（Service）

如果你已经明确知道语音程序包所在的主控板中有一个音频文件，你可以使用下面的 ROS 服务播放这个文件。

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

示例脚本：

程序包的 install 目录中包含有一个用来测试的音频文件。先找到这个文件的全路径，再通过 ROS 服务来播放该文件。

```
audio_file=$(realpath $(find install -name test.mp3))
ros2 service call /audio_play/play_file lyre_msgs/srv/PlayFile "{path: "${audio_file}"}"
```

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

示例脚本：

程序包的 install 目录中包含有一个用来测试的音频文件。先找到这个文件的全路径，再通过 ROS 服务来播放该文件。

```
audio_url="\"http://10.0.3.108:8090/download/speech/test.mp3\""
ros2 service call /audio_play/play_url lyre_msgs/srv/PlayUrl "{url: "${audio_url}"}"
```

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

示例脚本：

```
ros2 service call /audio_play/play_text lyre_msgs/srv/PlayText '{text: "Hello Robot"}'
```

注意：此功能需要 play 节点和 aiui 节点一起启动时才可用。

#### 播放二进制数据（Service）

如果你正在从别的主控板访问音频播放服务，并且已经有一个现成的音频文件了，你可以先读取这个文件，再使用下面的 ROS 服务来播放它。

```
# lyre_msgs/srv/PlayBinary.srv
# 以二进制的形式播放一段语音。

string SERVICE_NAME = /audio_play/play_binary

string sid    # Stream identifier (unique per audio stream).
uint32 seq    # Sequence number (incremental per packet).
bool   last   # Last flag (true if this is the final packet).
bool   force  # Force playback (stop all running tasks and play immediately).

uint8[] data   # Audio data in binary format.
---

int8 CODE_OK = 0
int8 CODE_INVALID_PARAMS = 1
int8 CODE_FAILED = -1

string sid      # Playback stream ID (generated internally if absent).
int8   code     # Status code.
string message  # Human-readable status message.
```

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

示例脚本：

```
ros2 topic echo /audio_play/event
```

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

示例脚本：

```
ros2 topic echo /audio_play/progress
```

#### 停止音频播放（Service）

通过下面的 ROS 服务来停止音频播放（停止以后无法恢复）：

```
# lyre_msgs/srv/PlayStop.srv
# 停止当前的音频播放任务（不可恢复）。

string SERVICE_NAME = /audio_play/stop

---
```

示例脚本：

```
ros2 service call /audio_play/stop lyre_msgs/srv/PlayStop
```

#### 暂停音频播放（Service）

通过下面的 ROS 服务来停止音频播放（暂停以后可以调用 Resume 服务恢复播放）：

```
# lyre_msgs/srv/PlayPause.srv
# 暂停当前的音频播放任务。

string SERVICE_NAME = /audio_play/pause

---
```

示例脚本：

```
ros2 service call /audio_play/pause lyre_msgs/srv/PlayPause
```

#### 恢复音频播放（Service）

通过下面的 ROS 服务来恢复播放暂停中的音频：

```
# lyre_msgs/srv/PlayResume.srv
# 恢复已暂停的音频播放任务。

string SERVICE_NAME = /audio_play/resume

---
```

示例脚本：

```
ros2 service call /audio_play/resume lyre_msgs/srv/PlayResume
```

### 音频识别服务

设备集成有 3588 语义模块，可以提供 ASR 语音识别功能。

设备需要唤醒才可以识别周围的声音。在人脸唤醒模式下，当对话人站在设备前方 1～1.8m，水平辐射角度 ±30° 范围内时，会唤醒设备。对话人可以直接发起对话。在关键词唤醒模式下，对话人需要在设备周围喊出关键词。

- 人脸唤醒
- 关键词唤醒

注意：

1. 使用关键词唤醒时，不需要摄像头识别唇形。
2. 即使在人脸唤醒模式下，仍然可以通过关键词触发唤醒事件。

#### 唤醒事件（Topic）

在设备周围喊出关键词，可以触发唤醒事件。

关键词定义：

- 天工：天工天工
- 天轶：你好天轶

在代码中可以通过以下 ROS 话题来监听唤醒消息：

```
# lyre_msgs/msg/AsrKeyword.msg
# ASR 唤醒时识别到的关键字。

string TOPIC_NAME = /audio_asr/keyword

string keyword
int32  angle
```

示例脚本：

```
ros2 topic echo /audio_asr/keyword
```

#### 语音识别事件（Topic）

设备唤醒以后可以将周围的声音转化为文本。可以通过以下 ROS 话题获取识别到的文本：

```
# lyre_msgs/msg/AsrIat.msg
# ASR 语音识别到的内容。

string TOPIC_NAME = /audio_asr/iat

string id
string text
```

示例脚本：

```
ros2 topic echo /audio_asr/iat
```

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

示例脚本：

```
ros2 topic echo /audio_asr/event
```

#### aiui_msg 事件

SDK 兼容旧版本的 /xunfei/aiui_msg 话题，这个话题已经被标记为 Deprecated，未来很可能会被移除。

```
string TOPIC_NAME = /xunfei/aiui_msg
```

该话题的类型是 `std_msgs::msg::String`，可以通过下面的示例脚本获取到：

```
ros2 topic echo -f /xunfei/aiui_msg
```

### 语音对话服务

## 启动模式

lyre 包提供了多种启动模式，供集成方灵活使用。

启动命令统一为：

```
ros2 launch lyre <mode>.launch.py
```

### play 模式

在此启动模式下，仅『音频播放』相关的功能可以使用。

语音识别、语音对话等功能不可用。

文本播放功能在此模式下『不』可用。

启动方法：

```
ros2 launch lyre play.launch.py
```

#### 提供的 ROS Services:

- /audio_play/play_file
- /audio_play/play_url
- /audio_play/play_binary
- /audio_play/resume
- /audio_play/pause
- /audio_play/stop

#### 发布的 ROS Topics:

- /audio_play/event
- /audio_play/progress

### asr 模式

在此启动模式下，仅『语音识别』相关的功能可以使用。

音频播放、语音对话等功能不可用。

文本播放功能在此模式下『不』可用。

```
ros2 launch lyre asr.launch.py
```

#### 发布的 ROS Topics:

- /audio_asr/keyword
- /audio_asr/iat
- /audio_asr/event

### audio 模式

在此启动模式下，可以同时使用『语音识别』和『音频播放』功能，包括『文本播放』功能。

语音对话功能不可用。

启动方法：

```
ros2 launch lyre audio.launch.py
```

#### 提供的 ROS Services:

- /audio_play/play_file
- /audio_play/play_url
- /audio_play/play_binary
- /audio_play/resume
- /audio_play/pause
- /audio_play/stop
- /audio_play/play_text

#### 发布的 ROS Topics:

- /audio_play/event
- /audio_play/progress
- /audio_asr/keyword
- /audio_asr/iat
- /audio_asr/event
- /audio_tts/event

### chat 模式

在此启动模式下，可以同时使用『语音识别』、『音频播放』和『语音对话』功能。

启动方法：

```
ros2 launch lyre chat.launch.py
```

#### 交互开关

chat 节点接收一个 ROS 话题来控制语音交互的可用状态。

```
string TOPIC_NAME = /audio_chat/enable
```

话题的类型是 `std_msgs/msg/Bool`。

对话开启的示例脚本：

```
ros2 topic pub -1 /audio_chat/enable std_msgs/msg/Bool 'data: true'
```

对话关闭的示例脚本：

```
ros2 topic pub -1 /audio_chat/enable std_msgs/msg/Bool 'data: false'
```

#### 大模型扩展

集成方可以便捷地将自己的大模型接入到 lyre 包中。接入方法如下：

1. 实现 lyre_msgs 包定义的 `LlmAsk` 服务；
2. 提供 `LlmRst` 和 `LlmEvent` 话题来播报语义结果；
3. 修改 `chat.launch.py` 中的 `llm.enabled` 为 `False`；
4. 同时启动自己的大模型节点和 lyre 包的 `chat.launch.py`。
