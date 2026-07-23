# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/SetMotorCurTor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetMotorCurTor(type):
    """Metaclass of message 'SetMotorCurTor'."""

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
                'bodyctrl_msgs.msg.SetMotorCurTor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__set_motor_cur_tor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__set_motor_cur_tor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__set_motor_cur_tor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__set_motor_cur_tor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__set_motor_cur_tor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMotorCurTor(metaclass=Metaclass_SetMotorCurTor):
    """Message class 'SetMotorCurTor'."""

    __slots__ = [
        '_name',
        '_cur_tor',
        '_ctrl_status',
    ]

    _fields_and_field_types = {
        'name': 'uint16',
        'cur_tor': 'float',
        'ctrl_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', int())
        self.cur_tor = kwargs.get('cur_tor', float())
        self.ctrl_status = kwargs.get('ctrl_status', int())

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
        if self.name != other.name:
            return False
        if self.cur_tor != other.cur_tor:
            return False
        if self.ctrl_status != other.ctrl_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'name' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'name' field must be an unsigned integer in [0, 65535]"
        self._name = value

    @builtins.property
    def cur_tor(self):
        """Message field 'cur_tor'."""
        return self._cur_tor

    @cur_tor.setter
    def cur_tor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cur_tor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cur_tor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cur_tor = value

    @builtins.property
    def ctrl_status(self):
        """Message field 'ctrl_status'."""
        return self._ctrl_status

    @ctrl_status.setter
    def ctrl_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ctrl_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ctrl_status' field must be an unsigned integer in [0, 255]"
        self._ctrl_status = value
