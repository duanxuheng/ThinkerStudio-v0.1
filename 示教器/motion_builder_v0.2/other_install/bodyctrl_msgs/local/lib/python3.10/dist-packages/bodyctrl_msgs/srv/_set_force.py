# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:srv/SetForce.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetForce_Request(type):
    """Metaclass of message 'SetForce_Request'."""

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
                'bodyctrl_msgs.srv.SetForce_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_force__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_force__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_force__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_force__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_force__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetForce_Request(metaclass=Metaclass_SetForce_Request):
    """Message class 'SetForce_Request'."""

    __slots__ = [
        '_force0_ratio',
        '_force1_ratio',
        '_force2_ratio',
        '_force3_ratio',
        '_force4_ratio',
        '_force5_ratio',
    ]

    _fields_and_field_types = {
        'force0_ratio': 'float',
        'force1_ratio': 'float',
        'force2_ratio': 'float',
        'force3_ratio': 'float',
        'force4_ratio': 'float',
        'force5_ratio': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.force0_ratio = kwargs.get('force0_ratio', float())
        self.force1_ratio = kwargs.get('force1_ratio', float())
        self.force2_ratio = kwargs.get('force2_ratio', float())
        self.force3_ratio = kwargs.get('force3_ratio', float())
        self.force4_ratio = kwargs.get('force4_ratio', float())
        self.force5_ratio = kwargs.get('force5_ratio', float())

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
        if self.force0_ratio != other.force0_ratio:
            return False
        if self.force1_ratio != other.force1_ratio:
            return False
        if self.force2_ratio != other.force2_ratio:
            return False
        if self.force3_ratio != other.force3_ratio:
            return False
        if self.force4_ratio != other.force4_ratio:
            return False
        if self.force5_ratio != other.force5_ratio:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def force0_ratio(self):
        """Message field 'force0_ratio'."""
        return self._force0_ratio

    @force0_ratio.setter
    def force0_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'force0_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'force0_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._force0_ratio = value

    @builtins.property
    def force1_ratio(self):
        """Message field 'force1_ratio'."""
        return self._force1_ratio

    @force1_ratio.setter
    def force1_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'force1_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'force1_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._force1_ratio = value

    @builtins.property
    def force2_ratio(self):
        """Message field 'force2_ratio'."""
        return self._force2_ratio

    @force2_ratio.setter
    def force2_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'force2_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'force2_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._force2_ratio = value

    @builtins.property
    def force3_ratio(self):
        """Message field 'force3_ratio'."""
        return self._force3_ratio

    @force3_ratio.setter
    def force3_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'force3_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'force3_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._force3_ratio = value

    @builtins.property
    def force4_ratio(self):
        """Message field 'force4_ratio'."""
        return self._force4_ratio

    @force4_ratio.setter
    def force4_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'force4_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'force4_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._force4_ratio = value

    @builtins.property
    def force5_ratio(self):
        """Message field 'force5_ratio'."""
        return self._force5_ratio

    @force5_ratio.setter
    def force5_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'force5_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'force5_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._force5_ratio = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetForce_Response(type):
    """Metaclass of message 'SetForce_Response'."""

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
                'bodyctrl_msgs.srv.SetForce_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_force__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_force__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_force__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_force__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_force__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetForce_Response(metaclass=Metaclass_SetForce_Response):
    """Message class 'SetForce_Response'."""

    __slots__ = [
        '_force_accepted',
    ]

    _fields_and_field_types = {
        'force_accepted': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.force_accepted = kwargs.get('force_accepted', bool())

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
        if self.force_accepted != other.force_accepted:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def force_accepted(self):
        """Message field 'force_accepted'."""
        return self._force_accepted

    @force_accepted.setter
    def force_accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'force_accepted' field must be of type 'bool'"
        self._force_accepted = value


class Metaclass_SetForce(type):
    """Metaclass of service 'SetForce'."""

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
                'bodyctrl_msgs.srv.SetForce')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_force

            from bodyctrl_msgs.srv import _set_force
            if _set_force.Metaclass_SetForce_Request._TYPE_SUPPORT is None:
                _set_force.Metaclass_SetForce_Request.__import_type_support__()
            if _set_force.Metaclass_SetForce_Response._TYPE_SUPPORT is None:
                _set_force.Metaclass_SetForce_Response.__import_type_support__()


class SetForce(metaclass=Metaclass_SetForce):
    from bodyctrl_msgs.srv._set_force import SetForce_Request as Request
    from bodyctrl_msgs.srv._set_force import SetForce_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
