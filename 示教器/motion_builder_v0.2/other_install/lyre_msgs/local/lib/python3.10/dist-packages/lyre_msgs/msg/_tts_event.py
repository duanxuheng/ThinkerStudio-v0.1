# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lyre_msgs:msg/TtsEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TtsEvent(type):
    """Metaclass of message 'TtsEvent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TOPIC_NAME': '/audio_tts/event',
        'EVENT_STARTED': 0,
        'EVENT_COMPLETED': 1,
        'EVENT_STOPPED': 2,
        'EVENT_CANCELLED': 3,
        'EVENT_FAILED': 4,
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
                'lyre_msgs.msg.TtsEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tts_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tts_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tts_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tts_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tts_event

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TOPIC_NAME': cls.__constants['TOPIC_NAME'],
            'EVENT_STARTED': cls.__constants['EVENT_STARTED'],
            'EVENT_COMPLETED': cls.__constants['EVENT_COMPLETED'],
            'EVENT_STOPPED': cls.__constants['EVENT_STOPPED'],
            'EVENT_CANCELLED': cls.__constants['EVENT_CANCELLED'],
            'EVENT_FAILED': cls.__constants['EVENT_FAILED'],
        }

    @property
    def TOPIC_NAME(self):
        """Message constant 'TOPIC_NAME'."""
        return Metaclass_TtsEvent.__constants['TOPIC_NAME']

    @property
    def EVENT_STARTED(self):
        """Message constant 'EVENT_STARTED'."""
        return Metaclass_TtsEvent.__constants['EVENT_STARTED']

    @property
    def EVENT_COMPLETED(self):
        """Message constant 'EVENT_COMPLETED'."""
        return Metaclass_TtsEvent.__constants['EVENT_COMPLETED']

    @property
    def EVENT_STOPPED(self):
        """Message constant 'EVENT_STOPPED'."""
        return Metaclass_TtsEvent.__constants['EVENT_STOPPED']

    @property
    def EVENT_CANCELLED(self):
        """Message constant 'EVENT_CANCELLED'."""
        return Metaclass_TtsEvent.__constants['EVENT_CANCELLED']

    @property
    def EVENT_FAILED(self):
        """Message constant 'EVENT_FAILED'."""
        return Metaclass_TtsEvent.__constants['EVENT_FAILED']


class TtsEvent(metaclass=Metaclass_TtsEvent):
    """
    Message class 'TtsEvent'.

    Constants:
      TOPIC_NAME
      EVENT_STARTED
      EVENT_COMPLETED
      EVENT_STOPPED
      EVENT_CANCELLED
      EVENT_FAILED
    """

    __slots__ = [
        '_sid',
        '_seq',
        '_event',
        '_message',
    ]

    _fields_and_field_types = {
        'sid': 'string',
        'seq': 'uint32',
        'event': 'int8',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sid = kwargs.get('sid', str())
        self.seq = kwargs.get('seq', int())
        self.event = kwargs.get('event', int())
        self.message = kwargs.get('message', str())

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
        if self.sid != other.sid:
            return False
        if self.seq != other.seq:
            return False
        if self.event != other.event:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sid(self):
        """Message field 'sid'."""
        return self._sid

    @sid.setter
    def sid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sid' field must be of type 'str'"
        self._sid = value

    @builtins.property
    def seq(self):
        """Message field 'seq'."""
        return self._seq

    @seq.setter
    def seq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seq' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'seq' field must be an unsigned integer in [0, 4294967295]"
        self._seq = value

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
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value
