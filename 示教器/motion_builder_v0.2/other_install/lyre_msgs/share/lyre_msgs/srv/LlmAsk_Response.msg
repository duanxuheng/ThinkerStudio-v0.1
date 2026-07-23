

int8 CODE_OK = 0
int8 CODE_INVALID_PARAMS = 1
int8 CODE_FAILED = -1

string sid      # Stream identifier (unique per llm question).
int8   code     # Status code.
string message  # Human-readable status message.
