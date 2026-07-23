# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/CmdSetWaistMotorPos.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CmdSetWaistMotorPos(type):
    """Metaclass of message 'CmdSetWaistMotorPos'."""

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
                'bodyctrl_msgs.msg.CmdSetWaistMotorPos')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cmd_set_waist_motor_pos
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cmd_set_waist_motor_pos
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cmd_set_waist_motor_pos
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cmd_set_waist_motor_pos
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cmd_set_waist_motor_pos

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


class CmdSetWaistMotorPos(metaclass=Metaclass_CmdSetWaistMotorPos):
    """Message class 'CmdSetWaistMotorPos'."""

    __slots__ = [
        '_header',
        '_pos',
        '_spd',
        '_accel',
        '_decel',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pos': 'double',
        'spd': 'double',
        'accel': 'double',
        'decel': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.pos = kwargs.get('pos', float())
        self.spd = kwargs.get('spd', float())
        self.accel = kwargs.get('accel', float())
        self.decel = kwargs.get('decel', float())

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
        if self.pos != other.pos:
            return False
        if self.spd != other.spd:
            return False
        if self.accel != other.accel:
            return False
        if self.decel != other.decel:
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
    def pos(self):
        """Message field 'pos'."""
        return self._pos

    @pos.setter
    def pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos = value

    @builtins.property
    def spd(self):
        """Message field 'spd'."""
        return self._spd

    @spd.setter
    def spd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'spd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'spd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._spd = value

    @builtins.property
    def accel(self):
        """Message field 'accel'."""
        return self._accel

    @accel.setter
    def accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'accel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._accel = value

    @builtins.property
    def decel(self):
        """Message field 'decel'."""
        return self._decel

    @decel.setter
    def decel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'decel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'decel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._decel = value
