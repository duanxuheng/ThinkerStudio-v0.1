# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/PowerLightCtrl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PowerLightCtrl(type):
    """Metaclass of message 'PowerLightCtrl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POWER_LIGHT_BATTERY_SUPPLY': 1,
        'POWER_LIGHT_POWER_ON_START': 2,
        'POWER_LIGHT_POWER_ON_FINISH': 3,
        'POWER_LIGHT_SERVICE_START': 4,
        'POWER_LIGHT_SERVICE_FINISH': 5,
        'POWER_LIGHT_SELF_CHECK_START': 6,
        'POWER_LIGHT_SELF_CHECK_FAILED': 7,
        'POWER_LIGHT_SELF_CHECK_SUCCESS': 8,
        'POWER_LIGHT_FAULT_OCCUR': 9,
        'POWER_LIGHT_FAULT_CLEAR': 10,
        'POWER_LIGHT_VOICE_WAKEUP': 11,
        'POWER_LIGHT_VOICE_RESPONSE': 12,
        'POWER_LIGHT_VOICE_EXIT': 13,
        'POWER_LIGHT_RUNNING_START': 14,
        'POWER_LIGHT_RUNNING_FINISH': 15,
        'POWER_LIGHT_POWER_OFF': 16,
        'POWER_LIGHT_WARN_OCCUR': 17,
        'POWER_LIGHT_WARN_CLEAR': 18,
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
                'bodyctrl_msgs.msg.PowerLightCtrl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__power_light_ctrl
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__power_light_ctrl
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__power_light_ctrl
            cls._TYPE_SUPPORT = module.type_support_msg__msg__power_light_ctrl
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__power_light_ctrl

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POWER_LIGHT_BATTERY_SUPPLY': cls.__constants['POWER_LIGHT_BATTERY_SUPPLY'],
            'POWER_LIGHT_POWER_ON_START': cls.__constants['POWER_LIGHT_POWER_ON_START'],
            'POWER_LIGHT_POWER_ON_FINISH': cls.__constants['POWER_LIGHT_POWER_ON_FINISH'],
            'POWER_LIGHT_SERVICE_START': cls.__constants['POWER_LIGHT_SERVICE_START'],
            'POWER_LIGHT_SERVICE_FINISH': cls.__constants['POWER_LIGHT_SERVICE_FINISH'],
            'POWER_LIGHT_SELF_CHECK_START': cls.__constants['POWER_LIGHT_SELF_CHECK_START'],
            'POWER_LIGHT_SELF_CHECK_FAILED': cls.__constants['POWER_LIGHT_SELF_CHECK_FAILED'],
            'POWER_LIGHT_SELF_CHECK_SUCCESS': cls.__constants['POWER_LIGHT_SELF_CHECK_SUCCESS'],
            'POWER_LIGHT_FAULT_OCCUR': cls.__constants['POWER_LIGHT_FAULT_OCCUR'],
            'POWER_LIGHT_FAULT_CLEAR': cls.__constants['POWER_LIGHT_FAULT_CLEAR'],
            'POWER_LIGHT_VOICE_WAKEUP': cls.__constants['POWER_LIGHT_VOICE_WAKEUP'],
            'POWER_LIGHT_VOICE_RESPONSE': cls.__constants['POWER_LIGHT_VOICE_RESPONSE'],
            'POWER_LIGHT_VOICE_EXIT': cls.__constants['POWER_LIGHT_VOICE_EXIT'],
            'POWER_LIGHT_RUNNING_START': cls.__constants['POWER_LIGHT_RUNNING_START'],
            'POWER_LIGHT_RUNNING_FINISH': cls.__constants['POWER_LIGHT_RUNNING_FINISH'],
            'POWER_LIGHT_POWER_OFF': cls.__constants['POWER_LIGHT_POWER_OFF'],
            'POWER_LIGHT_WARN_OCCUR': cls.__constants['POWER_LIGHT_WARN_OCCUR'],
            'POWER_LIGHT_WARN_CLEAR': cls.__constants['POWER_LIGHT_WARN_CLEAR'],
        }

    @property
    def POWER_LIGHT_BATTERY_SUPPLY(self):
        """Message constant 'POWER_LIGHT_BATTERY_SUPPLY'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_BATTERY_SUPPLY']

    @property
    def POWER_LIGHT_POWER_ON_START(self):
        """Message constant 'POWER_LIGHT_POWER_ON_START'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_POWER_ON_START']

    @property
    def POWER_LIGHT_POWER_ON_FINISH(self):
        """Message constant 'POWER_LIGHT_POWER_ON_FINISH'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_POWER_ON_FINISH']

    @property
    def POWER_LIGHT_SERVICE_START(self):
        """Message constant 'POWER_LIGHT_SERVICE_START'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_SERVICE_START']

    @property
    def POWER_LIGHT_SERVICE_FINISH(self):
        """Message constant 'POWER_LIGHT_SERVICE_FINISH'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_SERVICE_FINISH']

    @property
    def POWER_LIGHT_SELF_CHECK_START(self):
        """Message constant 'POWER_LIGHT_SELF_CHECK_START'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_SELF_CHECK_START']

    @property
    def POWER_LIGHT_SELF_CHECK_FAILED(self):
        """Message constant 'POWER_LIGHT_SELF_CHECK_FAILED'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_SELF_CHECK_FAILED']

    @property
    def POWER_LIGHT_SELF_CHECK_SUCCESS(self):
        """Message constant 'POWER_LIGHT_SELF_CHECK_SUCCESS'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_SELF_CHECK_SUCCESS']

    @property
    def POWER_LIGHT_FAULT_OCCUR(self):
        """Message constant 'POWER_LIGHT_FAULT_OCCUR'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_FAULT_OCCUR']

    @property
    def POWER_LIGHT_FAULT_CLEAR(self):
        """Message constant 'POWER_LIGHT_FAULT_CLEAR'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_FAULT_CLEAR']

    @property
    def POWER_LIGHT_VOICE_WAKEUP(self):
        """Message constant 'POWER_LIGHT_VOICE_WAKEUP'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_VOICE_WAKEUP']

    @property
    def POWER_LIGHT_VOICE_RESPONSE(self):
        """Message constant 'POWER_LIGHT_VOICE_RESPONSE'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_VOICE_RESPONSE']

    @property
    def POWER_LIGHT_VOICE_EXIT(self):
        """Message constant 'POWER_LIGHT_VOICE_EXIT'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_VOICE_EXIT']

    @property
    def POWER_LIGHT_RUNNING_START(self):
        """Message constant 'POWER_LIGHT_RUNNING_START'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_RUNNING_START']

    @property
    def POWER_LIGHT_RUNNING_FINISH(self):
        """Message constant 'POWER_LIGHT_RUNNING_FINISH'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_RUNNING_FINISH']

    @property
    def POWER_LIGHT_POWER_OFF(self):
        """Message constant 'POWER_LIGHT_POWER_OFF'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_POWER_OFF']

    @property
    def POWER_LIGHT_WARN_OCCUR(self):
        """Message constant 'POWER_LIGHT_WARN_OCCUR'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_WARN_OCCUR']

    @property
    def POWER_LIGHT_WARN_CLEAR(self):
        """Message constant 'POWER_LIGHT_WARN_CLEAR'."""
        return Metaclass_PowerLightCtrl.__constants['POWER_LIGHT_WARN_CLEAR']


class PowerLightCtrl(metaclass=Metaclass_PowerLightCtrl):
    """
    Message class 'PowerLightCtrl'.

    Constants:
      POWER_LIGHT_BATTERY_SUPPLY
      POWER_LIGHT_POWER_ON_START
      POWER_LIGHT_POWER_ON_FINISH
      POWER_LIGHT_SERVICE_START
      POWER_LIGHT_SERVICE_FINISH
      POWER_LIGHT_SELF_CHECK_START
      POWER_LIGHT_SELF_CHECK_FAILED
      POWER_LIGHT_SELF_CHECK_SUCCESS
      POWER_LIGHT_FAULT_OCCUR
      POWER_LIGHT_FAULT_CLEAR
      POWER_LIGHT_VOICE_WAKEUP
      POWER_LIGHT_VOICE_RESPONSE
      POWER_LIGHT_VOICE_EXIT
      POWER_LIGHT_RUNNING_START
      POWER_LIGHT_RUNNING_FINISH
      POWER_LIGHT_POWER_OFF
      POWER_LIGHT_WARN_OCCUR
      POWER_LIGHT_WARN_CLEAR
    """

    __slots__ = [
        '_header',
        '_cmd',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'cmd': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.cmd = kwargs.get('cmd', int())

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
        if self.header != other.header:
            return False
        if self.cmd != other.cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def cmd(self):
        """Message field 'cmd'."""
        return self._cmd

    @cmd.setter
    def cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cmd' field must be an integer in [-2147483648, 2147483647]"
        self._cmd = value
