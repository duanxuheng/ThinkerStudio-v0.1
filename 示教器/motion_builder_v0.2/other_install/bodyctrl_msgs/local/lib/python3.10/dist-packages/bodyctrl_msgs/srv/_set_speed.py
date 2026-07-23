# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:srv/SetSpeed.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetSpeed_Request(type):
    """Metaclass of message 'SetSpeed_Request'."""

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
                'bodyctrl_msgs.srv.SetSpeed_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_speed__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_speed__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_speed__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_speed__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_speed__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetSpeed_Request(metaclass=Metaclass_SetSpeed_Request):
    """Message class 'SetSpeed_Request'."""

    __slots__ = [
        '_speed0_ratio',
        '_speed1_ratio',
        '_speed2_ratio',
        '_speed3_ratio',
        '_speed4_ratio',
        '_speed5_ratio',
    ]

    _fields_and_field_types = {
        'speed0_ratio': 'float',
        'speed1_ratio': 'float',
        'speed2_ratio': 'float',
        'speed3_ratio': 'float',
        'speed4_ratio': 'float',
        'speed5_ratio': 'float',
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
        self.speed0_ratio = kwargs.get('speed0_ratio', float())
        self.speed1_ratio = kwargs.get('speed1_ratio', float())
        self.speed2_ratio = kwargs.get('speed2_ratio', float())
        self.speed3_ratio = kwargs.get('speed3_ratio', float())
        self.speed4_ratio = kwargs.get('speed4_ratio', float())
        self.speed5_ratio = kwargs.get('speed5_ratio', float())

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
        if self.speed0_ratio != other.speed0_ratio:
            return False
        if self.speed1_ratio != other.speed1_ratio:
            return False
        if self.speed2_ratio != other.speed2_ratio:
            return False
        if self.speed3_ratio != other.speed3_ratio:
            return False
        if self.speed4_ratio != other.speed4_ratio:
            return False
        if self.speed5_ratio != other.speed5_ratio:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed0_ratio(self):
        """Message field 'speed0_ratio'."""
        return self._speed0_ratio

    @speed0_ratio.setter
    def speed0_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed0_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed0_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed0_ratio = value

    @builtins.property
    def speed1_ratio(self):
        """Message field 'speed1_ratio'."""
        return self._speed1_ratio

    @speed1_ratio.setter
    def speed1_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed1_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed1_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed1_ratio = value

    @builtins.property
    def speed2_ratio(self):
        """Message field 'speed2_ratio'."""
        return self._speed2_ratio

    @speed2_ratio.setter
    def speed2_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed2_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed2_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed2_ratio = value

    @builtins.property
    def speed3_ratio(self):
        """Message field 'speed3_ratio'."""
        return self._speed3_ratio

    @speed3_ratio.setter
    def speed3_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed3_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed3_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed3_ratio = value

    @builtins.property
    def speed4_ratio(self):
        """Message field 'speed4_ratio'."""
        return self._speed4_ratio

    @speed4_ratio.setter
    def speed4_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed4_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed4_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed4_ratio = value

    @builtins.property
    def speed5_ratio(self):
        """Message field 'speed5_ratio'."""
        return self._speed5_ratio

    @speed5_ratio.setter
    def speed5_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed5_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed5_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed5_ratio = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetSpeed_Response(type):
    """Metaclass of message 'SetSpeed_Response'."""

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
                'bodyctrl_msgs.srv.SetSpeed_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_speed__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_speed__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_speed__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_speed__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_speed__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetSpeed_Response(metaclass=Metaclass_SetSpeed_Response):
    """Message class 'SetSpeed_Response'."""

    __slots__ = [
        '_speed_accepted',
    ]

    _fields_and_field_types = {
        'speed_accepted': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.speed_accepted = kwargs.get('speed_accepted', bool())

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
        if self.speed_accepted != other.speed_accepted:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed_accepted(self):
        """Message field 'speed_accepted'."""
        return self._speed_accepted

    @speed_accepted.setter
    def speed_accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'speed_accepted' field must be of type 'bool'"
        self._speed_accepted = value


class Metaclass_SetSpeed(type):
    """Metaclass of service 'SetSpeed'."""

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
                'bodyctrl_msgs.srv.SetSpeed')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_speed

            from bodyctrl_msgs.srv import _set_speed
            if _set_speed.Metaclass_SetSpeed_Request._TYPE_SUPPORT is None:
                _set_speed.Metaclass_SetSpeed_Request.__import_type_support__()
            if _set_speed.Metaclass_SetSpeed_Response._TYPE_SUPPORT is None:
                _set_speed.Metaclass_SetSpeed_Response.__import_type_support__()


class SetSpeed(metaclass=Metaclass_SetSpeed):
    from bodyctrl_msgs.srv._set_speed import SetSpeed_Request as Request
    from bodyctrl_msgs.srv._set_speed import SetSpeed_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
