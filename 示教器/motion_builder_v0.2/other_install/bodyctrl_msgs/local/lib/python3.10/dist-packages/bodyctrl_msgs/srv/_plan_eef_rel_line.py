# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:srv/PlanEefRelLine.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanEefRelLine_Request(type):
    """Metaclass of message 'PlanEefRelLine_Request'."""

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
                'bodyctrl_msgs.srv.PlanEefRelLine_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_eef_rel_line__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_eef_rel_line__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_eef_rel_line__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_eef_rel_line__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_eef_rel_line__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanEefRelLine_Request(metaclass=Metaclass_PlanEefRelLine_Request):
    """Message class 'PlanEefRelLine_Request'."""

    __slots__ = [
        '_arm_name',
        '_dx',
        '_dy',
        '_dz',
        '_vel_percent',
        '_acc_percent',
    ]

    _fields_and_field_types = {
        'arm_name': 'string',
        'dx': 'double',
        'dy': 'double',
        'dz': 'double',
        'vel_percent': 'double',
        'acc_percent': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.arm_name = kwargs.get('arm_name', str())
        self.dx = kwargs.get('dx', float())
        self.dy = kwargs.get('dy', float())
        self.dz = kwargs.get('dz', float())
        self.vel_percent = kwargs.get('vel_percent', float())
        self.acc_percent = kwargs.get('acc_percent', float())

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
        if self.arm_name != other.arm_name:
            return False
        if self.dx != other.dx:
            return False
        if self.dy != other.dy:
            return False
        if self.dz != other.dz:
            return False
        if self.vel_percent != other.vel_percent:
            return False
        if self.acc_percent != other.acc_percent:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def arm_name(self):
        """Message field 'arm_name'."""
        return self._arm_name

    @arm_name.setter
    def arm_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'arm_name' field must be of type 'str'"
        self._arm_name = value

    @builtins.property
    def dx(self):
        """Message field 'dx'."""
        return self._dx

    @dx.setter
    def dx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dx = value

    @builtins.property
    def dy(self):
        """Message field 'dy'."""
        return self._dy

    @dy.setter
    def dy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dy = value

    @builtins.property
    def dz(self):
        """Message field 'dz'."""
        return self._dz

    @dz.setter
    def dz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dz = value

    @builtins.property
    def vel_percent(self):
        """Message field 'vel_percent'."""
        return self._vel_percent

    @vel_percent.setter
    def vel_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_percent' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_percent' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_percent = value

    @builtins.property
    def acc_percent(self):
        """Message field 'acc_percent'."""
        return self._acc_percent

    @acc_percent.setter
    def acc_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_percent' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_percent' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_percent = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PlanEefRelLine_Response(type):
    """Metaclass of message 'PlanEefRelLine_Response'."""

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
                'bodyctrl_msgs.srv.PlanEefRelLine_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_eef_rel_line__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_eef_rel_line__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_eef_rel_line__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_eef_rel_line__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_eef_rel_line__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanEefRelLine_Response(metaclass=Metaclass_PlanEefRelLine_Response):
    """Message class 'PlanEefRelLine_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_PlanEefRelLine(type):
    """Metaclass of service 'PlanEefRelLine'."""

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
                'bodyctrl_msgs.srv.PlanEefRelLine')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__plan_eef_rel_line

            from bodyctrl_msgs.srv import _plan_eef_rel_line
            if _plan_eef_rel_line.Metaclass_PlanEefRelLine_Request._TYPE_SUPPORT is None:
                _plan_eef_rel_line.Metaclass_PlanEefRelLine_Request.__import_type_support__()
            if _plan_eef_rel_line.Metaclass_PlanEefRelLine_Response._TYPE_SUPPORT is None:
                _plan_eef_rel_line.Metaclass_PlanEefRelLine_Response.__import_type_support__()


class PlanEefRelLine(metaclass=Metaclass_PlanEefRelLine):
    from bodyctrl_msgs.srv._plan_eef_rel_line import PlanEefRelLine_Request as Request
    from bodyctrl_msgs.srv._plan_eef_rel_line import PlanEefRelLine_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
