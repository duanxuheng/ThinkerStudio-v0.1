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
