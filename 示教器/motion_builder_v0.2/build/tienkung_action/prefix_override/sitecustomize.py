import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yaojunqi/Desktop/motion_builder/install/tienkung_action'
