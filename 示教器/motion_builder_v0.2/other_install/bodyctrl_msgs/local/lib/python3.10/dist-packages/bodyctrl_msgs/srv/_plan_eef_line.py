# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:srv/PlanEefLine.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanEefLine_Request(type):
    """Metaclass of message 'PlanEefLine_Request'."""

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
                'bodyctrl_msgs.srv.PlanEefLine_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_eef_line__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_eef_line__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_eef_line__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_eef_line__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_eef_line__request

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanEefLine_Request(metaclass=Metaclass_PlanEefLine_Request):
    """Message class 'PlanEefLine_Request'."""

    __slots__ = [
        '_arm_name',
        '_eef_pose',
        '_vel_percent',
        '_acc_percent',
    ]

    _fields_and_field_types = {
        'arm_name': 'string',
        'eef_pose': 'geometry_msgs/Pose',
        'vel_percent': 'double',
        'acc_percent': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.arm_name = kwargs.get('arm_name', str())
        from geometry_msgs.msg import Pose
        self.eef_pose = kwargs.get('eef_pose', Pose())
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
        if self.eef_pose != other.eef_pose:
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
    def eef_pose(self):
        """Message field 'eef_pose'."""
        return self._eef_pose

    @eef_pose.setter
    def eef_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'eef_pose' field must be a sub message of type 'Pose'"
        self._eef_pose = value

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


class Metaclass_PlanEefLine_Response(type):
    """Metaclass of message 'PlanEefLine_Response'."""

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
                'bodyctrl_msgs.srv.PlanEefLine_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__plan_eef_line__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__plan_eef_line__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__plan_eef_line__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__plan_eef_line__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__plan_eef_line__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanEefLine_Response(metaclass=Metaclass_PlanEefLine_Response):
    """Message class 'PlanEefLine_Response'."""

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


class Metaclass_PlanEefLine(type):
    """Metaclass of service 'PlanEefLine'."""

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
                'bodyctrl_msgs.srv.PlanEefLine')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__plan_eef_line

            from bodyctrl_msgs.srv import _plan_eef_line
            if _plan_eef_line.Metaclass_PlanEefLine_Request._TYPE_SUPPORT is None:
                _plan_eef_line.Metaclass_PlanEefLine_Request.__import_type_support__()
            if _plan_eef_line.Metaclass_PlanEefLine_Response._TYPE_SUPPORT is None:
                _plan_eef_line.Metaclass_PlanEefLine_Response.__import_type_support__()


class PlanEefLine(metaclass=Metaclass_PlanEefLine):
    from bodyctrl_msgs.srv._plan_eef_line import PlanEefLine_Request as Request
    from bodyctrl_msgs.srv._plan_eef_line import PlanEefLine_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
