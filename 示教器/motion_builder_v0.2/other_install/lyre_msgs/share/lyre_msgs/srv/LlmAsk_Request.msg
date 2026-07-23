# lyre_msgs/srv/LlmAsk.srv
# 向 LLM 大模型提出一个问题。

string SERVICE_NAME = /audio_llm/ask

string  id     # optional. An identifier responds to the IAT ID.
string  text   # required.
