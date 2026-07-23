# lyre_msgs/srv/PlayBinary.srv
# 以二进制的形式播放一段语音。

string SERVICE_NAME = /audio_play/play_binary

string sid    # Stream identifier (unique per audio stream).
uint32 seq    # Sequence number (incremental per packet).
bool   last   # Last flag (true if this is the final packet).
bool   force  # Force playback (stop all running tasks and play immediately).

uint8[] data   # Audio data in binary format.
