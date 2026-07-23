# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/MotorStatus1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorStatus1(type):
    """Metaclass of message 'MotorStatus1'."""

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
                'bodyctrl_msgs.msg.MotorStatus1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_status1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_status1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_status1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_status1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_status1

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorStatus1(metaclass=Metaclass_MotorStatus1):
    """Message class 'MotorStatus1'."""

    __slots__ = [
        '_name',
        '_motortemperature',
        '_mostemperature',
    ]

    _fields_and_field_types = {
        'name': 'uint16',
        'motortemperature': 'float',
        'mostemperature': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', int())
        self.motortemperature = kwargs.get('motortemperature', float())
        self.mostemperature = kwargs.get('mostemperature', float())

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
        if self.motortemperature != other.motortemperature:
            return False
        if self.mostemperature != other.mostemperature:
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
    def motortemperature(self):
        """Message field 'motortemperature'."""
        return self._motortemperature

    @motortemperature.setter
    def motortemperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motortemperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motortemperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motortemperature = value

    @builtins.property
    def mostemperature(self):
        """Message field 'mostemperature'."""
        return self._mostemperature

    @mostemperature.setter
    def mostemperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mostemperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mostemperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mostemperature = value
