# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:srv/SetAngleFlexible.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'angle_ratio'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetAngleFlexible_Request(type):
    """Metaclass of message 'SetAngleFlexible_Request'."""

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
                'bodyctrl_msgs.srv.SetAngleFlexible_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_angle_flexible__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_angle_flexible__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_angle_flexible__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_angle_flexible__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_angle_flexible__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetAngleFlexible_Request(metaclass=Metaclass_SetAngleFlexible_Request):
    """Message class 'SetAngleFlexible_Request'."""

    __slots__ = [
        '_name',
        '_angle_ratio',
    ]

    _fields_and_field_types = {
        'name': 'sequence<string>',
        'angle_ratio': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', [])
        self.angle_ratio = array.array('f', kwargs.get('angle_ratio', []))

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
        if self.angle_ratio != other.angle_ratio:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'name' field must be a set or sequence and each value of type 'str'"
        self._name = value

    @builtins.property
    def angle_ratio(self):
        """Message field 'angle_ratio'."""
        return self._angle_ratio

    @angle_ratio.setter
    def angle_ratio(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'angle_ratio' array.array() must have the type code of 'f'"
            self._angle_ratio = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'angle_ratio' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._angle_ratio = array.array('f', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetAngleFlexible_Response(type):
    """Metaclass of message 'SetAngleFlexible_Response'."""

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
                'bodyctrl_msgs.srv.SetAngleFlexible_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_angle_flexible__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_angle_flexible__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_angle_flexible__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_angle_flexible__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_angle_flexible__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetAngleFlexible_Response(metaclass=Metaclass_SetAngleFlexible_Response):
    """Message class 'SetAngleFlexible_Response'."""

    __slots__ = [
        '_angle_accepted',
    ]

    _fields_and_field_types = {
        'angle_accepted': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.angle_accepted = kwargs.get('angle_accepted', bool())

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
        if self.angle_accepted != other.angle_accepted:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def angle_accepted(self):
        """Message field 'angle_accepted'."""
        return self._angle_accepted

    @angle_accepted.setter
    def angle_accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'angle_accepted' field must be of type 'bool'"
        self._angle_accepted = value


class Metaclass_SetAngleFlexible(type):
    """Metaclass of service 'SetAngleFlexible'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('bodyctrl_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'bodyctrl_msgs.srv.SetAngleFlexible')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_angle_flexible

            from bodyctrl_msgs.srv import _set_angle_flexible
            if _set_angle_flexible.Metaclass_SetAngleFlexible_Request._TYPE_SUPPORT is None:
                _set_angle_flexible.Metaclass_SetAngleFlexible_Request.__import_type_support__()
            if _set_angle_flexible.Metaclass_SetAngleFlexible_Response._TYPE_SUPPORT is None:
                _set_angle_flexible.Metaclass_SetAngleFlexible_Response.__import_type_support__()


class SetAngleFlexible(metaclass=Metaclass_SetAngleFlexible):
    from bodyctrl_msgs.srv._set_angle_flexible import SetAngleFlexible_Request as Request
    from bodyctrl_msgs.srv._set_angle_flexible import SetAngleFlexible_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
