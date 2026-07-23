# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:srv/SetAngle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetAngle_Request(type):
    """Metaclass of message 'SetAngle_Request'."""

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
                'bodyctrl_msgs.srv.SetAngle_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_angle__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_angle__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_angle__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_angle__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_angle__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetAngle_Request(metaclass=Metaclass_SetAngle_Request):
    """Message class 'SetAngle_Request'."""

    __slots__ = [
        '_angle0_ratio',
        '_angle1_ratio',
        '_angle2_ratio',
        '_angle3_ratio',
        '_angle4_ratio',
        '_angle5_ratio',
    ]

    _fields_and_field_types = {
        'angle0_ratio': 'float',
        'angle1_ratio': 'float',
        'angle2_ratio': 'float',
        'angle3_ratio': 'float',
        'angle4_ratio': 'float',
        'angle5_ratio': 'float',
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
        self.angle0_ratio = kwargs.get('angle0_ratio', float())
        self.angle1_ratio = kwargs.get('angle1_ratio', float())
        self.angle2_ratio = kwargs.get('angle2_ratio', float())
        self.angle3_ratio = kwargs.get('angle3_ratio', float())
        self.angle4_ratio = kwargs.get('angle4_ratio', float())
        self.angle5_ratio = kwargs.get('angle5_ratio', float())

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
        if self.angle0_ratio != other.angle0_ratio:
            return False
        if self.angle1_ratio != other.angle1_ratio:
            return False
        if self.angle2_ratio != other.angle2_ratio:
            return False
        if self.angle3_ratio != other.angle3_ratio:
            return False
        if self.angle4_ratio != other.angle4_ratio:
            return False
        if self.angle5_ratio != other.angle5_ratio:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def angle0_ratio(self):
        """Message field 'angle0_ratio'."""
        return self._angle0_ratio

    @angle0_ratio.setter
    def angle0_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle0_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle0_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle0_ratio = value

    @builtins.property
    def angle1_ratio(self):
        """Message field 'angle1_ratio'."""
        return self._angle1_ratio

    @angle1_ratio.setter
    def angle1_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle1_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle1_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle1_ratio = value

    @builtins.property
    def angle2_ratio(self):
        """Message field 'angle2_ratio'."""
        return self._angle2_ratio

    @angle2_ratio.setter
    def angle2_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle2_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle2_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle2_ratio = value

    @builtins.property
    def angle3_ratio(self):
        """Message field 'angle3_ratio'."""
        return self._angle3_ratio

    @angle3_ratio.setter
    def angle3_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle3_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle3_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle3_ratio = value

    @builtins.property
    def angle4_ratio(self):
        """Message field 'angle4_ratio'."""
        return self._angle4_ratio

    @angle4_ratio.setter
    def angle4_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle4_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle4_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle4_ratio = value

    @builtins.property
    def angle5_ratio(self):
        """Message field 'angle5_ratio'."""
        return self._angle5_ratio

    @angle5_ratio.setter
    def angle5_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle5_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle5_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle5_ratio = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetAngle_Response(type):
    """Metaclass of message 'SetAngle_Response'."""

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
                'bodyctrl_msgs.srv.SetAngle_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_angle__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_angle__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_angle__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_angle__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_angle__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetAngle_Response(metaclass=Metaclass_SetAngle_Response):
    """Message class 'SetAngle_Response'."""

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


class Metaclass_SetAngle(type):
    """Metaclass of service 'SetAngle'."""

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
                'bodyctrl_msgs.srv.SetAngle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_angle

            from bodyctrl_msgs.srv import _set_angle
            if _set_angle.Metaclass_SetAngle_Request._TYPE_SUPPORT is None:
                _set_angle.Metaclass_SetAngle_Request.__import_type_support__()
            if _set_angle.Metaclass_SetAngle_Response._TYPE_SUPPORT is None:
                _set_angle.Metaclass_SetAngle_Response.__import_type_support__()


class SetAngle(metaclass=Metaclass_SetAngle):
    from bodyctrl_msgs.srv._set_angle import SetAngle_Request as Request
    from bodyctrl_msgs.srv._set_angle import SetAngle_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
