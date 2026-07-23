# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/LightCtrl.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LightCtrl(type):
    """Metaclass of message 'LightCtrl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TOPIC_NAME': '/xsys/light/ctrl',
        'CMD_SYSTEM_SHUTTING': 0,
        'CMD_SYSTEM_ERROR_OCCUR': 10,
        'CMD_SYSTEM_ERROR_CLEAR': 11,
        'CMD_SYSTEM_WARN_OCCUR': 12,
        'CMD_SYSTEM_WARN_CLEAR': 13,
        'CMD_SYSTEM_SERVICE_WAIT': 20,
        'CMD_SYSTEM_SERVICE_START': 21,
        'CMD_SYSTEM_SERVICE_READY': 22,
        'CMD_SYSTEM_SERVICE_FAILED': 23,
        'CMD_SYSTEM_STANDBY': 99,
        'CMD_OTA_QUIT': 100,
        'CMD_OTA_START': 101,
        'CMD_POWER_QUIT': 200,
        'CMD_POWER_BATTERY_NORMAL': 201,
        'CMD_POWER_BATTERY_LOW': 202,
        'CMD_POWER_BATTERY_CRITICAL': 203,
        'CMD_POWER_CHARGING': 210,
        'CMD_POWER_CHARGING_FULL': 211,
        'CMD_POWER_BACKUP_NORMAL': 220,
        'CMD_CHAT_QUIT': 300,
        'CMD_CHAT_WAKEUP': 301,
        'CMD_CHAT_ASR': 310,
        'CMD_CHAT_LLM': 311,
        'CMD_CHAT_TTS': 312,
        'CMD_CHAT_PLAY': 313,
        'CMD_CHAT_NET_OFFLINE': 320,
        'CMD_CHAT_NET_ONLINE': 321,
        'CMD_MOTION_QUIT': 400,
        'CMD_MOTION_RUNNING': 401,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('bodyctrl_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'bodyctrl_msgs.msg.LightCtrl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__light_ctrl
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__light_ctrl
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__light_ctrl
            cls._TYPE_SUPPORT = module.type_support_msg__msg__light_ctrl
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__light_ctrl

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TOPIC_NAME': cls.__constants['TOPIC_NAME'],
            'CMD_SYSTEM_SHUTTING': cls.__constants['CMD_SYSTEM_SHUTTING'],
            'CMD_SYSTEM_ERROR_OCCUR': cls.__constants['CMD_SYSTEM_ERROR_OCCUR'],
            'CMD_SYSTEM_ERROR_CLEAR': cls.__constants['CMD_SYSTEM_ERROR_CLEAR'],
            'CMD_SYSTEM_WARN_OCCUR': cls.__constants['CMD_SYSTEM_WARN_OCCUR'],
            'CMD_SYSTEM_WARN_CLEAR': cls.__constants['CMD_SYSTEM_WARN_CLEAR'],
            'CMD_SYSTEM_SERVICE_WAIT': cls.__constants['CMD_SYSTEM_SERVICE_WAIT'],
            'CMD_SYSTEM_SERVICE_START': cls.__constants['CMD_SYSTEM_SERVICE_START'],
            'CMD_SYSTEM_SERVICE_READY': cls.__constants['CMD_SYSTEM_SERVICE_READY'],
            'CMD_SYSTEM_SERVICE_FAILED': cls.__constants['CMD_SYSTEM_SERVICE_FAILED'],
            'CMD_SYSTEM_STANDBY': cls.__constants['CMD_SYSTEM_STANDBY'],
            'CMD_OTA_QUIT': cls.__constants['CMD_OTA_QUIT'],
            'CMD_OTA_START': cls.__constants['CMD_OTA_START'],
            'CMD_POWER_QUIT': cls.__constants['CMD_POWER_QUIT'],
            'CMD_POWER_BATTERY_NORMAL': cls.__constants['CMD_POWER_BATTERY_NORMAL'],
            'CMD_POWER_BATTERY_LOW': cls.__constants['CMD_POWER_BATTERY_LOW'],
            'CMD_POWER_BATTERY_CRITICAL': cls.__constants['CMD_POWER_BATTERY_CRITICAL'],
            'CMD_POWER_CHARGING': cls.__constants['CMD_POWER_CHARGING'],
            'CMD_POWER_CHARGING_FULL': cls.__constants['CMD_POWER_CHARGING_FULL'],
            'CMD_POWER_BACKUP_NORMAL': cls.__constants['CMD_POWER_BACKUP_NORMAL'],
            'CMD_CHAT_QUIT': cls.__constants['CMD_CHAT_QUIT'],
            'CMD_CHAT_WAKEUP': cls.__constants['CMD_CHAT_WAKEUP'],
            'CMD_CHAT_ASR': cls.__constants['CMD_CHAT_ASR'],
            'CMD_CHAT_LLM': cls.__constants['CMD_CHAT_LLM'],
            'CMD_CHAT_TTS': cls.__constants['CMD_CHAT_TTS'],
            'CMD_CHAT_PLAY': cls.__constants['CMD_CHAT_PLAY'],
            'CMD_CHAT_NET_OFFLINE': cls.__constants['CMD_CHAT_NET_OFFLINE'],
            'CMD_CHAT_NET_ONLINE': cls.__constants['CMD_CHAT_NET_ONLINE'],
            'CMD_MOTION_QUIT': cls.__constants['CMD_MOTION_QUIT'],
            'CMD_MOTION_RUNNING': cls.__constants['CMD_MOTION_RUNNING'],
        }

    @property
    def TOPIC_NAME(self):
        """Message constant 'TOPIC_NAME'."""
        return Metaclass_LightCtrl.__constants['TOPIC_NAME']

    @property
    def CMD_SYSTEM_SHUTTING(self):
        """Message constant 'CMD_SYSTEM_SHUTTING'."""
        return Metaclass_LightCtrl.__constants['CMD_SYSTEM_SHUTTING']

    @property
    def CMD_SYSTEM_ERROR_OCCUR(self):
        """Message constant 'CMD_SYSTEM_ERROR_OCCUR'."""
        return Metaclass_LightCtrl.__constants['CMD_SYSTEM_ERROR_OCCUR']

    @property
    def CMD_SYSTEM_ERROR_CLEAR(self):
        """Message constant 'CMD_SYSTEM_ERROR_CLEAR'."""
        return Metaclass_LightCtrl.__constants['CMD_SYSTEM_ERROR_CLEAR']

    @property
    def CMD_SYSTEM_WARN_OCCUR(self):
        """Message constant 'CMD_SYSTEM_WARN_OCCUR'."""
        return Metaclass_LightCtrl.__constants['CMD_SYSTEM_WARN_OCCUR']

    @property
    def CMD_SYSTEM_WARN_CLEAR(self):
        """Message constant 'CMD_SYSTEM_WARN_CLEAR'."""
        return Metaclass_LightCtrl.__constants['CMD_SYSTEM_WARN_CLEAR']

    @property
    def CMD_SYSTEM_SERVICE_WAIT(self):
        """Message constant 'CMD_SYSTEM_SERVICE_WAIT'."""
        return Metaclass_LightCtrl.__constants['CMD_SYSTEM_SERVICE_WAIT']

    @property
    def CMD_SYSTEM_SERVICE_START(self):
        """Message constant 'CMD_SYSTEM_SERVICE_START'."""
        return Metaclass_LightCtrl.__constants['CMD_SYSTEM_SERVICE_START']

    @property
    def CMD_SYSTEM_SERVICE_READY(self):
        """Message constant 'CMD_SYSTEM_SERVICE_READY'."""
        return Metaclass_LightCtrl.__constants['CMD_SYSTEM_SERVICE_READY']

    @property
    def CMD_SYSTEM_SERVICE_FAILED(self):
        """Message constant 'CMD_SYSTEM_SERVICE_FAILED'."""
        return Metaclass_LightCtrl.__constants['CMD_SYSTEM_SERVICE_FAILED']

    @property
    def CMD_SYSTEM_STANDBY(self):
        """Message constant 'CMD_SYSTEM_STANDBY'."""
        return Metaclass_LightCtrl.__constants['CMD_SYSTEM_STANDBY']

    @property
    def CMD_OTA_QUIT(self):
        """Message constant 'CMD_OTA_QUIT'."""
        return Metaclass_LightCtrl.__constants['CMD_OTA_QUIT']

    @property
    def CMD_OTA_START(self):
        """Message constant 'CMD_OTA_START'."""
        return Metaclass_LightCtrl.__constants['CMD_OTA_START']

    @property
    def CMD_POWER_QUIT(self):
        """Message constant 'CMD_POWER_QUIT'."""
        return Metaclass_LightCtrl.__constants['CMD_POWER_QUIT']

    @property
    def CMD_POWER_BATTERY_NORMAL(self):
        """Message constant 'CMD_POWER_BATTERY_NORMAL'."""
        return Metaclass_LightCtrl.__constants['CMD_POWER_BATTERY_NORMAL']

    @property
    def CMD_POWER_BATTERY_LOW(self):
        """Message constant 'CMD_POWER_BATTERY_LOW'."""
        return Metaclass_LightCtrl.__constants['CMD_POWER_BATTERY_LOW']

    @property
    def CMD_POWER_BATTERY_CRITICAL(self):
        """Message constant 'CMD_POWER_BATTERY_CRITICAL'."""
        return Metaclass_LightCtrl.__constants['CMD_POWER_BATTERY_CRITICAL']

    @property
    def CMD_POWER_CHARGING(self):
        """Message constant 'CMD_POWER_CHARGING'."""
        return Metaclass_LightCtrl.__constants['CMD_POWER_CHARGING']

    @property
    def CMD_POWER_CHARGING_FULL(self):
        """Message constant 'CMD_POWER_CHARGING_FULL'."""
        return Metaclass_LightCtrl.__constants['CMD_POWER_CHARGING_FULL']

    @property
    def CMD_POWER_BACKUP_NORMAL(self):
        """Message constant 'CMD_POWER_BACKUP_NORMAL'."""
        return Metaclass_LightCtrl.__constants['CMD_POWER_BACKUP_NORMAL']

    @property
    def CMD_CHAT_QUIT(self):
        """Message constant 'CMD_CHAT_QUIT'."""
        return Metaclass_LightCtrl.__constants['CMD_CHAT_QUIT']

    @property
    def CMD_CHAT_WAKEUP(self):
        """Message constant 'CMD_CHAT_WAKEUP'."""
        return Metaclass_LightCtrl.__constants['CMD_CHAT_WAKEUP']

    @property
    def CMD_CHAT_ASR(self):
        """Message constant 'CMD_CHAT_ASR'."""
        return Metaclass_LightCtrl.__constants['CMD_CHAT_ASR']

    @property
    def CMD_CHAT_LLM(self):
        """Message constant 'CMD_CHAT_LLM'."""
        return Metaclass_LightCtrl.__constants['CMD_CHAT_LLM']

    @property
    def CMD_CHAT_TTS(self):
        """Message constant 'CMD_CHAT_TTS'."""
        return Metaclass_LightCtrl.__constants['CMD_CHAT_TTS']

    @property
    def CMD_CHAT_PLAY(self):
        """Message constant 'CMD_CHAT_PLAY'."""
        return Metaclass_LightCtrl.__constants['CMD_CHAT_PLAY']

    @property
    def CMD_CHAT_NET_OFFLINE(self):
        """Message constant 'CMD_CHAT_NET_OFFLINE'."""
        return Metaclass_LightCtrl.__constants['CMD_CHAT_NET_OFFLINE']

    @property
    def CMD_CHAT_NET_ONLINE(self):
        """Message constant 'CMD_CHAT_NET_ONLINE'."""
        return Metaclass_LightCtrl.__constants['CMD_CHAT_NET_ONLINE']

    @property
    def CMD_MOTION_QUIT(self):
        """Message constant 'CMD_MOTION_QUIT'."""
        return Metaclass_LightCtrl.__constants['CMD_MOTION_QUIT']

    @property
    def CMD_MOTION_RUNNING(self):
        """Message constant 'CMD_MOTION_RUNNING'."""
        return Metaclass_LightCtrl.__constants['CMD_MOTION_RUNNING']


class LightCtrl(metaclass=Metaclass_LightCtrl):
    """
    Message class 'LightCtrl'.

    Constants:
      TOPIC_NAME
      CMD_SYSTEM_SHUTTING
      CMD_SYSTEM_ERROR_OCCUR
      CMD_SYSTEM_ERROR_CLEAR
      CMD_SYSTEM_WARN_OCCUR
      CMD_SYSTEM_WARN_CLEAR
      CMD_SYSTEM_SERVICE_WAIT
      CMD_SYSTEM_SERVICE_START
      CMD_SYSTEM_SERVICE_READY
      CMD_SYSTEM_SERVICE_FAILED
      CMD_SYSTEM_STANDBY
      CMD_OTA_QUIT
      CMD_OTA_START
      CMD_POWER_QUIT
      CMD_POWER_BATTERY_NORMAL
      CMD_POWER_BATTERY_LOW
      CMD_POWER_BATTERY_CRITICAL
      CMD_POWER_CHARGING
      CMD_POWER_CHARGING_FULL
      CMD_POWER_BACKUP_NORMAL
      CMD_CHAT_QUIT
      CMD_CHAT_WAKEUP
      CMD_CHAT_ASR
      CMD_CHAT_LLM
      CMD_CHAT_TTS
      CMD_CHAT_PLAY
      CMD_CHAT_NET_OFFLINE
      CMD_CHAT_NET_ONLINE
      CMD_MOTION_QUIT
      CMD_MOTION_RUNNING
    """

    __slots__ = [
        '_header',
        '_cmd',
        '_data',
        '_caller_id',
        '_caller_msg',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'cmd': 'int32',
        'data': 'sequence<int8>',
        'caller_id': 'string',
        'caller_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.cmd = kwargs.get('cmd', int())
        self.data = array.array('b', kwargs.get('data', []))
        self.caller_id = kwargs.get('caller_id', str())
        self.caller_msg = kwargs.get('caller_msg', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.cmd != other.cmd:
            return False
        if self.data != other.data:
            return False
        if self.caller_id != other.caller_id:
            return False
        if self.caller_msg != other.caller_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def cmd(self):
        """Message field 'cmd'."""
        return self._cmd

    @cmd.setter
    def cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cmd' field must be an integer in [-2147483648, 2147483647]"
        self._cmd = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'b', \
                "The 'data' array.array() must have the type code of 'b'"
            self._data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._data = array.array('b', value)

    @builtins.property
    def caller_id(self):
        """Message field 'caller_id'."""
        return self._caller_id

    @caller_id.setter
    def caller_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'caller_id' field must be of type 'str'"
        self._caller_id = value

    @builtins.property
    def caller_msg(self):
        """Message field 'caller_msg'."""
        return self._caller_msg

    @caller_msg.setter
    def caller_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'caller_msg' field must be of type 'str'"
        self._caller_msg = value
