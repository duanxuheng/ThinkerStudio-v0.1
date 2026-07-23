# lyre_msgs/srv/PlayFile.srv
# 以本地文件的形式播放一段语音。

string SERVICE_NAME = /audio_play/play_file

string sid    # Stream identifier (unique per audio stream).
uint32 seq    # Sequence number (incremental per packet).
bool   last   # Last flag (true if this is the final packet).
bool   force  # Force playback (stop all running tasks and play immediately).

string  path  # Absolute path to the audio file in the local file system.
