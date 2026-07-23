# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:srv/XSensImuInit.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_XSensImuInit_Request(type):
    """Metaclass of message 'XSensImuInit_Request'."""

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
                'bodyctrl_msgs.srv.XSensImuInit_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__x_sens_imu_init__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__x_sens_imu_init__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__x_sens_imu_init__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__x_sens_imu_init__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__x_sens_imu_init__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class XSensImuInit_Request(metaclass=Metaclass_XSensImuInit_Request):
    """Message class 'XSensImuInit_Request'."""

    __slots__ = [
        '_dev_name',
    ]

    _fields_and_field_types = {
        'dev_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dev_name = kwargs.get('dev_name', str())

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
        if self.dev_name != other.dev_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dev_name(self):
        """Message field 'dev_name'."""
        return self._dev_name

    @dev_name.setter
    def dev_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'dev_name' field must be of type 'str'"
        self._dev_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_XSensImuInit_Response(type):
    """Metaclass of message 'XSensImuInit_Response'."""

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
                'bodyctrl_msgs.srv.XSensImuInit_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__x_sens_imu_init__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__x_sens_imu_init__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__x_sens_imu_init__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__x_sens_imu_init__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__x_sens_imu_init__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class XSensImuInit_Response(metaclass=Metaclass_XSensImuInit_Response):
    """Message class 'XSensImuInit_Response'."""

    __slots__ = [
        '_ret',
    ]

    _fields_and_field_types = {
        'ret': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ret = kwargs.get('ret', bool())

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
        if self.ret != other.ret:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ret(self):
        """Message field 'ret'."""
        return self._ret

    @ret.setter
    def ret(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ret' field must be of type 'bool'"
        self._ret = value


class Metaclass_XSensImuInit(type):
    """Metaclass of service 'XSensImuInit'."""

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
                'bodyctrl_msgs.srv.XSensImuInit')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__x_sens_imu_init

            from bodyctrl_msgs.srv import _x_sens_imu_init
            if _x_sens_imu_init.Metaclass_XSensImuInit_Request._TYPE_SUPPORT is None:
                _x_sens_imu_init.Metaclass_XSensImuInit_Request.__import_type_support__()
            if _x_sens_imu_init.Metaclass_XSensImuInit_Response._TYPE_SUPPORT is None:
                _x_sens_imu_init.Metaclass_XSensImuInit_Response.__import_type_support__()


class XSensImuInit(metaclass=Metaclass_XSensImuInit):
    from bodyctrl_msgs.srv._x_sens_imu_init import XSensImuInit_Request as Request
    from bodyctrl_msgs.srv._x_sens_imu_init import XSensImuInit_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
