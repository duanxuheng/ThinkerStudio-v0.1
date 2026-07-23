# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/PowerBoardKeyStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PowerBoardKeyStatus(type):
    """Metaclass of message 'PowerBoardKeyStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'bodyctrl_msgs.msg.PowerBoardKeyStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__power_board_key_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__power_board_key_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__power_board_key_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__power_board_key_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__power_board_key_status

            from std_msgs.msg import Bool
            if Bool.__class__._TYPE_SUPPORT is None:
                Bool.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PowerBoardKeyStatus(metaclass=Metaclass_PowerBoardKeyStatus):
    """Message class 'PowerBoardKeyStatus'."""

    __slots__ = [
        '_header',
        '_work_time',
        '_is_estop',
        '_is_remote_estop',
        '_is_power_on',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'work_time': 'uint32',
        'is_estop': 'std_msgs/Bool',
        'is_remote_estop': 'std_msgs/Bool',
        'is_power_on': 'std_msgs/Bool',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Bool'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Bool'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Bool'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.work_time = kwargs.get('work_time', int())
        from std_msgs.msg import Bool
        self.is_estop = kwargs.get('is_estop', Bool())
        from std_msgs.msg import Bool
        self.is_remote_estop = kwargs.get('is_remote_estop', Bool())
        from std_msgs.msg import Bool
        self.is_power_on = kwargs.get('is_power_on', Bool())

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
        if self.work_time != other.work_time:
            return False
        if self.is_estop != other.is_estop:
            return False
        if self.is_remote_estop != other.is_remote_estop:
            return False
        if self.is_power_on != other.is_power_on:
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
    def work_time(self):
        """Message field 'work_time'."""
        return self._work_time

    @work_time.setter
    def work_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'work_time' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'work_time' field must be an unsigned integer in [0, 4294967295]"
        self._work_time = value

    @builtins.property
    def is_estop(self):
        """Message field 'is_estop'."""
        return self._is_estop

    @is_estop.setter
    def is_estop(self, value):
        if __debug__:
            from std_msgs.msg import Bool
            assert \
                isinstance(value, Bool), \
                "The 'is_estop' field must be a sub message of type 'Bool'"
        self._is_estop = value

    @builtins.property
    def is_remote_estop(self):
        """Message field 'is_remote_estop'."""
        return self._is_remote_estop

    @is_remote_estop.setter
    def is_remote_estop(self, value):
        if __debug__:
            from std_msgs.msg import Bool
            assert \
                isinstance(value, Bool), \
                "The 'is_remote_estop' field must be a sub message of type 'Bool'"
        self._is_remote_estop = value

    @builtins.property
    def is_power_on(self):
        """Message field 'is_power_on'."""
        return self._is_power_on

    @is_power_on.setter
    def is_power_on(self, value):
        if __debug__:
            from std_msgs.msg import Bool
            assert \
                isinstance(value, Bool), \
                "The 'is_power_on' field must be a sub message of type 'Bool'"
        self._is_power_on = value
