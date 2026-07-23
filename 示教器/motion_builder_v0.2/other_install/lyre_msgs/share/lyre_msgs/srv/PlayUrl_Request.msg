# lyre_msgs/srv/PlayUrl.srv
# 以文件 URL 的形式播放一段语音。

string SERVICE_NAME = /audio_play/play_url

string sid    # Stream identifier (unique per audio stream).
uint32 seq    # Sequence number (incremental per packet).
bool   last   # Last flag (true if this is the final packet).
bool   force  # Force playback (stop all running tasks and play immediately).

string  url   # URL to the audio file in the network.
