# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lyre_msgs:msg/AsrEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AsrEvent(type):
    """Metaclass of message 'AsrEvent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TOPIC_NAME': '/audio_asr/event',
        'EVENT_ERROR': 2,
        'EVENT_STATE': 3,
        'EVENT_WAKEUP': 4,
        'EVENT_SLEEP': 5,
        'EVENT_VAD': 6,
        'EVENT_PRE_SLEEP': 10,
        'EVENT_CONNECTED_TO_SERVER': 13,
        'EVENT_SERVER_DISCONNECTED': 14,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lyre_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lyre_msgs.msg.AsrEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__asr_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__asr_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__asr_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__asr_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__asr_event

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TOPIC_NAME': cls.__constants['TOPIC_NAME'],
            'EVENT_ERROR': cls.__constants['EVENT_ERROR'],
            'EVENT_STATE': cls.__constants['EVENT_STATE'],
            'EVENT_WAKEUP': cls.__constants['EVENT_WAKEUP'],
            'EVENT_SLEEP': cls.__constants['EVENT_SLEEP'],
            'EVENT_VAD': cls.__constants['EVENT_VAD'],
            'EVENT_PRE_SLEEP': cls.__constants['EVENT_PRE_SLEEP'],
            'EVENT_CONNECTED_TO_SERVER': cls.__constants['EVENT_CONNECTED_TO_SERVER'],
            'EVENT_SERVER_DISCONNECTED': cls.__constants['EVENT_SERVER_DISCONNECTED'],
        }

    @property
    def TOPIC_NAME(self):
        """Message constant 'TOPIC_NAME'."""
        return Metaclass_AsrEvent.__constants['TOPIC_NAME']

    @property
    def EVENT_ERROR(self):
        """Message constant 'EVENT_ERROR'."""
        return Metaclass_AsrEvent.__constants['EVENT_ERROR']

    @property
    def EVENT_STATE(self):
        """Message constant 'EVENT_STATE'."""
        return Metaclass_AsrEvent.__constants['EVENT_STATE']

    @property
    def EVENT_WAKEUP(self):
        """Message constant 'EVENT_WAKEUP'."""
        return Metaclass_AsrEvent.__constants['EVENT_WAKEUP']

    @property
    def EVENT_SLEEP(self):
        """Message constant 'EVENT_SLEEP'."""
        return Metaclass_AsrEvent.__constants['EVENT_SLEEP']

    @property
    def EVENT_VAD(self):
        """Message constant 'EVENT_VAD'."""
        return Metaclass_AsrEvent.__constants['EVENT_VAD']

    @property
    def EVENT_PRE_SLEEP(self):
        """Message constant 'EVENT_PRE_SLEEP'."""
        return Metaclass_AsrEvent.__constants['EVENT_PRE_SLEEP']

    @property
    def EVENT_CONNECTED_TO_SERVER(self):
        """Message constant 'EVENT_CONNECTED_TO_SERVER'."""
        return Metaclass_AsrEvent.__constants['EVENT_CONNECTED_TO_SERVER']

    @property
    def EVENT_SERVER_DISCONNECTED(self):
        """Message constant 'EVENT_SERVER_DISCONNECTED'."""
        return Metaclass_AsrEvent.__constants['EVENT_SERVER_DISCONNECTED']


class AsrEvent(metaclass=Metaclass_AsrEvent):
    """
    Message class 'AsrEvent'.

    Constants:
      TOPIC_NAME
      EVENT_ERROR
      EVENT_STATE
      EVENT_WAKEUP
      EVENT_SLEEP
      EVENT_VAD
      EVENT_PRE_SLEEP
      EVENT_CONNECTED_TO_SERVER
      EVENT_SERVER_DISCONNECTED
    """

    __slots__ = [
        '_event',
        '_arg1',
        '_arg2',
    ]

    _fields_and_field_types = {
        'event': 'int8',
        'arg1': 'int8',
        'arg2': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.event = kwargs.get('event', int())
        self.arg1 = kwargs.get('arg1', int())
        self.arg2 = kwargs.get('arg2', int())

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
        if self.event != other.event:
            return False
        if self.arg1 != other.arg1:
            return False
        if self.arg2 != other.arg2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def event(self):
        """Message field 'event'."""
        return self._event

    @event.setter
    def event(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'event' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'event' field must be an integer in [-128, 127]"
        self._event = value

    @builtins.property
    def arg1(self):
        """Message field 'arg1'."""
        return self._arg1

    @arg1.setter
    def arg1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arg1' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'arg1' field must be an integer in [-128, 127]"
        self._arg1 = value

    @builtins.property
    def arg2(self):
        """Message field 'arg2'."""
        return self._arg2

    @arg2.setter
    def arg2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arg2' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'arg2' field must be an integer in [-128, 127]"
        self._arg2 = value
