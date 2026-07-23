# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/EtherCatSlaveRestart.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EtherCatSlaveRestart(type):
    """Metaclass of message 'EtherCatSlaveRestart'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ETHERCET_SLAVE_RESTART': 1,
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
                'bodyctrl_msgs.msg.EtherCatSlaveRestart')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ether_cat_slave_restart
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ether_cat_slave_restart
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ether_cat_slave_restart
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ether_cat_slave_restart
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ether_cat_slave_restart

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ETHERCET_SLAVE_RESTART': cls.__constants['ETHERCET_SLAVE_RESTART'],
        }

    @property
    def ETHERCET_SLAVE_RESTART(self):
        """Message constant 'ETHERCET_SLAVE_RESTART'."""
        return Metaclass_EtherCatSlaveRestart.__constants['ETHERCET_SLAVE_RESTART']


class EtherCatSlaveRestart(metaclass=Metaclass_EtherCatSlaveRestart):
    """
    Message class 'EtherCatSlaveRestart'.

    Constants:
      ETHERCET_SLAVE_RESTART
    """

    __slots__ = [
        '_header',
        '_topic',
        '_flag',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'topic': 'string',
        'flag': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.topic = kwargs.get('topic', str())
        self.flag = kwargs.get('flag', int())

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
        if self.topic != other.topic:
            return False
        if self.flag != other.flag:
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
    def topic(self):
        """Message field 'topic'."""
        return self._topic

    @topic.setter
    def topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'topic' field must be of type 'str'"
        self._topic = value

    @builtins.property
    def flag(self):
        """Message field 'flag'."""
        return self._flag

    @flag.setter
    def flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flag' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'flag' field must be an unsigned integer in [0, 65535]"
        self._flag = value
