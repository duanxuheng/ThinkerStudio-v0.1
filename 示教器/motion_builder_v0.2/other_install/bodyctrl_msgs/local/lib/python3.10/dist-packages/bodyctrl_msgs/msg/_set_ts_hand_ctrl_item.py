# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/SetTsHandCtrlItem.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetTsHandCtrlItem(type):
    """Metaclass of message 'SetTsHandCtrlItem'."""

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
                'bodyctrl_msgs.msg.SetTsHandCtrlItem')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__set_ts_hand_ctrl_item
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__set_ts_hand_ctrl_item
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__set_ts_hand_ctrl_item
            cls._TYPE_SUPPORT = module.type_support_msg__msg__set_ts_hand_ctrl_item
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__set_ts_hand_ctrl_item

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetTsHandCtrlItem(metaclass=Metaclass_SetTsHandCtrlItem):
    """Message class 'SetTsHandCtrlItem'."""

    __slots__ = [
        '_vel',
        '_start_angle',
        '_max_angle',
    ]

    _fields_and_field_types = {
        'vel': 'uint16',
        'start_angle': 'uint16',
        'max_angle': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vel = kwargs.get('vel', int())
        self.start_angle = kwargs.get('start_angle', int())
        self.max_angle = kwargs.get('max_angle', int())

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
        if self.vel != other.vel:
            return False
        if self.start_angle != other.start_angle:
            return False
        if self.max_angle != other.max_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vel(self):
        """Message field 'vel'."""
        return self._vel

    @vel.setter
    def vel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vel' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'vel' field must be an unsigned integer in [0, 65535]"
        self._vel = value

    @builtins.property
    def start_angle(self):
        """Message field 'start_angle'."""
        return self._start_angle

    @start_angle.setter
    def start_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_angle' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'start_angle' field must be an unsigned integer in [0, 65535]"
        self._start_angle = value

    @builtins.property
    def max_angle(self):
        """Message field 'max_angle'."""
        return self._max_angle

    @max_angle.setter
    def max_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_angle' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_angle' field must be an unsigned integer in [0, 65535]"
        self._max_angle = value
