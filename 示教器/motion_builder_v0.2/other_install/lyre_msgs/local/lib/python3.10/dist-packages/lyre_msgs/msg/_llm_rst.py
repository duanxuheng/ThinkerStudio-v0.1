# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lyre_msgs:msg/LlmRst.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LlmRst(type):
    """Metaclass of message 'LlmRst'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TOPIC_NAME': '/audio_llm/rst',
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
                'lyre_msgs.msg.LlmRst')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__llm_rst
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__llm_rst
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__llm_rst
            cls._TYPE_SUPPORT = module.type_support_msg__msg__llm_rst
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__llm_rst

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TOPIC_NAME': cls.__constants['TOPIC_NAME'],
        }

    @property
    def TOPIC_NAME(self):
        """Message constant 'TOPIC_NAME'."""
        return Metaclass_LlmRst.__constants['TOPIC_NAME']


class LlmRst(metaclass=Metaclass_LlmRst):
    """
    Message class 'LlmRst'.

    Constants:
      TOPIC_NAME
    """

    __slots__ = [
        '_sid',
        '_seq',
        '_last',
        '_text',
    ]

    _fields_and_field_types = {
        'sid': 'string',
        'seq': 'uint32',
        'last': 'boolean',
        'text': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sid = kwargs.get('sid', str())
        self.seq = kwargs.get('seq', int())
        self.last = kwargs.get('last', bool())
        self.text = kwargs.get('text', str())

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
        if self.last != other.last:
            return False
        if self.text != other.text:
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
    def last(self):
        """Message field 'last'."""
        return self._last

    @last.setter
    def last(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'last' field must be of type 'bool'"
        self._last = value

    @builtins.property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value
