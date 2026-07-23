# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/SetTsHandCtrl.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'threshold'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetTsHandCtrl(type):
    """Metaclass of message 'SetTsHandCtrl'."""

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
                'bodyctrl_msgs.msg.SetTsHandCtrl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__set_ts_hand_ctrl
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__set_ts_hand_ctrl
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__set_ts_hand_ctrl
            cls._TYPE_SUPPORT = module.type_support_msg__msg__set_ts_hand_ctrl
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__set_ts_hand_ctrl

            from bodyctrl_msgs.msg import SetTsHandCtrlItem
            if SetTsHandCtrlItem.__class__._TYPE_SUPPORT is None:
                SetTsHandCtrlItem.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetTsHandCtrl(metaclass=Metaclass_SetTsHandCtrl):
    """Message class 'SetTsHandCtrl'."""

    __slots__ = [
        '_name',
        '_rotation',
        '_bend',
        '_threshold',
    ]

    _fields_and_field_types = {
        'name': 'int32',
        'rotation': 'bodyctrl_msgs/SetTsHandCtrlItem',
        'bend': 'sequence<bodyctrl_msgs/SetTsHandCtrlItem>',
        'threshold': 'sequence<uint16>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['bodyctrl_msgs', 'msg'], 'SetTsHandCtrlItem'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['bodyctrl_msgs', 'msg'], 'SetTsHandCtrlItem')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', int())
        from bodyctrl_msgs.msg import SetTsHandCtrlItem
        self.rotation = kwargs.get('rotation', SetTsHandCtrlItem())
        self.bend = kwargs.get('bend', [])
        self.threshold = array.array('H', kwargs.get('threshold', []))

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
        if self.rotation != other.rotation:
            return False
        if self.bend != other.bend:
            return False
        if self.threshold != other.threshold:
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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'name' field must be an integer in [-2147483648, 2147483647]"
        self._name = value

    @builtins.property
    def rotation(self):
        """Message field 'rotation'."""
        return self._rotation

    @rotation.setter
    def rotation(self, value):
        if __debug__:
            from bodyctrl_msgs.msg import SetTsHandCtrlItem
            assert \
                isinstance(value, SetTsHandCtrlItem), \
                "The 'rotation' field must be a sub message of type 'SetTsHandCtrlItem'"
        self._rotation = value

    @builtins.property
    def bend(self):
        """Message field 'bend'."""
        return self._bend

    @bend.setter
    def bend(self, value):
        if __debug__:
            from bodyctrl_msgs.msg import SetTsHandCtrlItem
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
                 all(isinstance(v, SetTsHandCtrlItem) for v in value) and
                 True), \
                "The 'bend' field must be a set or sequence and each value of type 'SetTsHandCtrlItem'"
        self._bend = value

    @builtins.property
    def threshold(self):
        """Message field 'threshold'."""
        return self._threshold

    @threshold.setter
    def threshold(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'threshold' array.array() must have the type code of 'H'"
            self._threshold = value
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
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'threshold' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._threshold = array.array('H', value)
