# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/PowerStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PowerStatus(type):
    """Metaclass of message 'PowerStatus'."""

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
                'bodyctrl_msgs.msg.PowerStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__power_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__power_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__power_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__power_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__power_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PowerStatus(metaclass=Metaclass_PowerStatus):
    """Message class 'PowerStatus'."""

    __slots__ = [
        '_header',
        '_waist_temp',
        '_arm_a_temp',
        '_arm_b_temp',
        '_leg_a_temp',
        '_leg_b_temp',
        '_waist_temp_max',
        '_arm_a_temp_max',
        '_arm_b_temp_max',
        '_leg_a_temp_max',
        '_leg_b_temp_max',
        '_waist_temp_min',
        '_arm_a_temp_min',
        '_arm_b_temp_min',
        '_leg_a_temp_min',
        '_leg_b_temp_min',
        '_arm_a_curr',
        '_arm_b_curr',
        '_leg_a_curr',
        '_leg_b_curr',
        '_waist_curr',
        '_head_curr',
        '_arm_a_curr_max',
        '_arm_b_curr_max',
        '_leg_a_curr_max',
        '_leg_b_curr_max',
        '_waist_curr_max',
        '_head_curr_max',
        '_arm_a_curr_min',
        '_arm_b_curr_min',
        '_leg_a_curr_min',
        '_leg_b_curr_min',
        '_waist_curr_min',
        '_head_curr_min',
        '_arm_a_volt',
        '_arm_b_volt',
        '_leg_a_volt',
        '_leg_b_volt',
        '_waist_volt',
        '_bus_volt',
        '_arm_a_volt_max',
        '_arm_b_volt_max',
        '_leg_a_volt_max',
        '_leg_b_volt_max',
        '_waist_volt_max',
        '_bus_volt_max',
        '_arm_a_volt_min',
        '_arm_b_volt_min',
        '_leg_a_volt_min',
        '_leg_b_volt_min',
        '_waist_volt_min',
        '_bus_volt_min',
        '_software_version',
        '_hardware_version',
        '_battery_voltage',
        '_battery_current',
        '_battery_power',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'waist_temp': 'float',
        'arm_a_temp': 'float',
        'arm_b_temp': 'float',
        'leg_a_temp': 'float',
        'leg_b_temp': 'float',
        'waist_temp_max': 'float',
        'arm_a_temp_max': 'float',
        'arm_b_temp_max': 'float',
        'leg_a_temp_max': 'float',
        'leg_b_temp_max': 'float',
        'waist_temp_min': 'float',
        'arm_a_temp_min': 'float',
        'arm_b_temp_min': 'float',
        'leg_a_temp_min': 'float',
        'leg_b_temp_min': 'float',
        'arm_a_curr': 'float',
        'arm_b_curr': 'float',
        'leg_a_curr': 'float',
        'leg_b_curr': 'float',
        'waist_curr': 'float',
        'head_curr': 'float',
        'arm_a_curr_max': 'float',
        'arm_b_curr_max': 'float',
        'leg_a_curr_max': 'float',
        'leg_b_curr_max': 'float',
        'waist_curr_max': 'float',
        'head_curr_max': 'float',
        'arm_a_curr_min': 'float',
        'arm_b_curr_min': 'float',
        'leg_a_curr_min': 'float',
        'leg_b_curr_min': 'float',
        'waist_curr_min': 'float',
        'head_curr_min': 'float',
        'arm_a_volt': 'float',
        'arm_b_volt': 'float',
        'leg_a_volt': 'float',
        'leg_b_volt': 'float',
        'waist_volt': 'float',
        'bus_volt': 'float',
        'arm_a_volt_max': 'float',
        'arm_b_volt_max': 'float',
        'leg_a_volt_max': 'float',
        'leg_b_volt_max': 'float',
        'waist_volt_max': 'float',
        'bus_volt_max': 'float',
        'arm_a_volt_min': 'float',
        'arm_b_volt_min': 'float',
        'leg_a_volt_min': 'float',
        'leg_b_volt_min': 'float',
        'waist_volt_min': 'float',
        'bus_volt_min': 'float',
        'software_version': 'string',
        'hardware_version': 'string',
        'battery_voltage': 'float',
        'battery_current': 'float',
        'battery_power': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.waist_temp = kwargs.get('waist_temp', float())
        self.arm_a_temp = kwargs.get('arm_a_temp', float())
        self.arm_b_temp = kwargs.get('arm_b_temp', float())
        self.leg_a_temp = kwargs.get('leg_a_temp', float())
        self.leg_b_temp = kwargs.get('leg_b_temp', float())
        self.waist_temp_max = kwargs.get('waist_temp_max', float())
        self.arm_a_temp_max = kwargs.get('arm_a_temp_max', float())
        self.arm_b_temp_max = kwargs.get('arm_b_temp_max', float())
        self.leg_a_temp_max = kwargs.get('leg_a_temp_max', float())
        self.leg_b_temp_max = kwargs.get('leg_b_temp_max', float())
        self.waist_temp_min = kwargs.get('waist_temp_min', float())
        self.arm_a_temp_min = kwargs.get('arm_a_temp_min', float())
        self.arm_b_temp_min = kwargs.get('arm_b_temp_min', float())
        self.leg_a_temp_min = kwargs.get('leg_a_temp_min', float())
        self.leg_b_temp_min = kwargs.get('leg_b_temp_min', float())
        self.arm_a_curr = kwargs.get('arm_a_curr', float())
        self.arm_b_curr = kwargs.get('arm_b_curr', float())
        self.leg_a_curr = kwargs.get('leg_a_curr', float())
        self.leg_b_curr = kwargs.get('leg_b_curr', float())
        self.waist_curr = kwargs.get('waist_curr', float())
        self.head_curr = kwargs.get('head_curr', float())
        self.arm_a_curr_max = kwargs.get('arm_a_curr_max', float())
        self.arm_b_curr_max = kwargs.get('arm_b_curr_max', float())
        self.leg_a_curr_max = kwargs.get('leg_a_curr_max', float())
        self.leg_b_curr_max = kwargs.get('leg_b_curr_max', float())
        self.waist_curr_max = kwargs.get('waist_curr_max', float())
        self.head_curr_max = kwargs.get('head_curr_max', float())
        self.arm_a_curr_min = kwargs.get('arm_a_curr_min', float())
        self.arm_b_curr_min = kwargs.get('arm_b_curr_min', float())
        self.leg_a_curr_min = kwargs.get('leg_a_curr_min', float())
        self.leg_b_curr_min = kwargs.get('leg_b_curr_min', float())
        self.waist_curr_min = kwargs.get('waist_curr_min', float())
        self.head_curr_min = kwargs.get('head_curr_min', float())
        self.arm_a_volt = kwargs.get('arm_a_volt', float())
        self.arm_b_volt = kwargs.get('arm_b_volt', float())
        self.leg_a_volt = kwargs.get('leg_a_volt', float())
        self.leg_b_volt = kwargs.get('leg_b_volt', float())
        self.waist_volt = kwargs.get('waist_volt', float())
        self.bus_volt = kwargs.get('bus_volt', float())
        self.arm_a_volt_max = kwargs.get('arm_a_volt_max', float())
        self.arm_b_volt_max = kwargs.get('arm_b_volt_max', float())
        self.leg_a_volt_max = kwargs.get('leg_a_volt_max', float())
        self.leg_b_volt_max = kwargs.get('leg_b_volt_max', float())
        self.waist_volt_max = kwargs.get('waist_volt_max', float())
        self.bus_volt_max = kwargs.get('bus_volt_max', float())
        self.arm_a_volt_min = kwargs.get('arm_a_volt_min', float())
        self.arm_b_volt_min = kwargs.get('arm_b_volt_min', float())
        self.leg_a_volt_min = kwargs.get('leg_a_volt_min', float())
        self.leg_b_volt_min = kwargs.get('leg_b_volt_min', float())
        self.waist_volt_min = kwargs.get('waist_volt_min', float())
        self.bus_volt_min = kwargs.get('bus_volt_min', float())
        self.software_version = kwargs.get('software_version', str())
        self.hardware_version = kwargs.get('hardware_version', str())
        self.battery_voltage = kwargs.get('battery_voltage', float())
        self.battery_current = kwargs.get('battery_current', float())
        self.battery_power = kwargs.get('battery_power', float())

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
        if self.waist_temp != other.waist_temp:
            return False
        if self.arm_a_temp != other.arm_a_temp:
            return False
        if self.arm_b_temp != other.arm_b_temp:
            return False
        if self.leg_a_temp != other.leg_a_temp:
            return False
        if self.leg_b_temp != other.leg_b_temp:
            return False
        if self.waist_temp_max != other.waist_temp_max:
            return False
        if self.arm_a_temp_max != other.arm_a_temp_max:
            return False
        if self.arm_b_temp_max != other.arm_b_temp_max:
            return False
        if self.leg_a_temp_max != other.leg_a_temp_max:
            return False
        if self.leg_b_temp_max != other.leg_b_temp_max:
            return False
        if self.waist_temp_min != other.waist_temp_min:
            return False
        if self.arm_a_temp_min != other.arm_a_temp_min:
            return False
        if self.arm_b_temp_min != other.arm_b_temp_min:
            return False
        if self.leg_a_temp_min != other.leg_a_temp_min:
            return False
        if self.leg_b_temp_min != other.leg_b_temp_min:
            return False
        if self.arm_a_curr != other.arm_a_curr:
            return False
        if self.arm_b_curr != other.arm_b_curr:
            return False
        if self.leg_a_curr != other.leg_a_curr:
            return False
        if self.leg_b_curr != other.leg_b_curr:
            return False
        if self.waist_curr != other.waist_curr:
            return False
        if self.head_curr != other.head_curr:
            return False
        if self.arm_a_curr_max != other.arm_a_curr_max:
            return False
        if self.arm_b_curr_max != other.arm_b_curr_max:
            return False
        if self.leg_a_curr_max != other.leg_a_curr_max:
            return False
        if self.leg_b_curr_max != other.leg_b_curr_max:
            return False
        if self.waist_curr_max != other.waist_curr_max:
            return False
        if self.head_curr_max != other.head_curr_max:
            return False
        if self.arm_a_curr_min != other.arm_a_curr_min:
            return False
        if self.arm_b_curr_min != other.arm_b_curr_min:
            return False
        if self.leg_a_curr_min != other.leg_a_curr_min:
            return False
        if self.leg_b_curr_min != other.leg_b_curr_min:
            return False
        if self.waist_curr_min != other.waist_curr_min:
            return False
        if self.head_curr_min != other.head_curr_min:
            return False
        if self.arm_a_volt != other.arm_a_volt:
            return False
        if self.arm_b_volt != other.arm_b_volt:
            return False
        if self.leg_a_volt != other.leg_a_volt:
            return False
        if self.leg_b_volt != other.leg_b_volt:
            return False
        if self.waist_volt != other.waist_volt:
            return False
        if self.bus_volt != other.bus_volt:
            return False
        if self.arm_a_volt_max != other.arm_a_volt_max:
            return False
        if self.arm_b_volt_max != other.arm_b_volt_max:
            return False
        if self.leg_a_volt_max != other.leg_a_volt_max:
            return False
        if self.leg_b_volt_max != other.leg_b_volt_max:
            return False
        if self.waist_volt_max != other.waist_volt_max:
            return False
        if self.bus_volt_max != other.bus_volt_max:
            return False
        if self.arm_a_volt_min != other.arm_a_volt_min:
            return False
        if self.arm_b_volt_min != other.arm_b_volt_min:
            return False
        if self.leg_a_volt_min != other.leg_a_volt_min:
            return False
        if self.leg_b_volt_min != other.leg_b_volt_min:
            return False
        if self.waist_volt_min != other.waist_volt_min:
            return False
        if self.bus_volt_min != other.bus_volt_min:
            return False
        if self.software_version != other.software_version:
            return False
        if self.hardware_version != other.hardware_version:
            return False
        if self.battery_voltage != other.battery_voltage:
            return False
        if self.battery_current != other.battery_current:
            return False
        if self.battery_power != other.battery_power:
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
    def waist_temp(self):
        """Message field 'waist_temp'."""
        return self._waist_temp

    @waist_temp.setter
    def waist_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waist_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'waist_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._waist_temp = value

    @builtins.property
    def arm_a_temp(self):
        """Message field 'arm_a_temp'."""
        return self._arm_a_temp

    @arm_a_temp.setter
    def arm_a_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_a_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_a_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_a_temp = value

    @builtins.property
    def arm_b_temp(self):
        """Message field 'arm_b_temp'."""
        return self._arm_b_temp

    @arm_b_temp.setter
    def arm_b_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_b_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_b_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_b_temp = value

    @builtins.property
    def leg_a_temp(self):
        """Message field 'leg_a_temp'."""
        return self._leg_a_temp

    @leg_a_temp.setter
    def leg_a_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_a_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_a_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_a_temp = value

    @builtins.property
    def leg_b_temp(self):
        """Message field 'leg_b_temp'."""
        return self._leg_b_temp

    @leg_b_temp.setter
    def leg_b_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_b_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_b_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_b_temp = value

    @builtins.property
    def waist_temp_max(self):
        """Message field 'waist_temp_max'."""
        return self._waist_temp_max

    @waist_temp_max.setter
    def waist_temp_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waist_temp_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'waist_temp_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._waist_temp_max = value

    @builtins.property
    def arm_a_temp_max(self):
        """Message field 'arm_a_temp_max'."""
        return self._arm_a_temp_max

    @arm_a_temp_max.setter
    def arm_a_temp_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_a_temp_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_a_temp_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_a_temp_max = value

    @builtins.property
    def arm_b_temp_max(self):
        """Message field 'arm_b_temp_max'."""
        return self._arm_b_temp_max

    @arm_b_temp_max.setter
    def arm_b_temp_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_b_temp_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_b_temp_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_b_temp_max = value

    @builtins.property
    def leg_a_temp_max(self):
        """Message field 'leg_a_temp_max'."""
        return self._leg_a_temp_max

    @leg_a_temp_max.setter
    def leg_a_temp_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_a_temp_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_a_temp_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_a_temp_max = value

    @builtins.property
    def leg_b_temp_max(self):
        """Message field 'leg_b_temp_max'."""
        return self._leg_b_temp_max

    @leg_b_temp_max.setter
    def leg_b_temp_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_b_temp_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_b_temp_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_b_temp_max = value

    @builtins.property
    def waist_temp_min(self):
        """Message field 'waist_temp_min'."""
        return self._waist_temp_min

    @waist_temp_min.setter
    def waist_temp_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waist_temp_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'waist_temp_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._waist_temp_min = value

    @builtins.property
    def arm_a_temp_min(self):
        """Message field 'arm_a_temp_min'."""
        return self._arm_a_temp_min

    @arm_a_temp_min.setter
    def arm_a_temp_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_a_temp_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_a_temp_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_a_temp_min = value

    @builtins.property
    def arm_b_temp_min(self):
        """Message field 'arm_b_temp_min'."""
        return self._arm_b_temp_min

    @arm_b_temp_min.setter
    def arm_b_temp_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_b_temp_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_b_temp_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_b_temp_min = value

    @builtins.property
    def leg_a_temp_min(self):
        """Message field 'leg_a_temp_min'."""
        return self._leg_a_temp_min

    @leg_a_temp_min.setter
    def leg_a_temp_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_a_temp_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_a_temp_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_a_temp_min = value

    @builtins.property
    def leg_b_temp_min(self):
        """Message field 'leg_b_temp_min'."""
        return self._leg_b_temp_min

    @leg_b_temp_min.setter
    def leg_b_temp_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_b_temp_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_b_temp_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_b_temp_min = value

    @builtins.property
    def arm_a_curr(self):
        """Message field 'arm_a_curr'."""
        return self._arm_a_curr

    @arm_a_curr.setter
    def arm_a_curr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_a_curr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_a_curr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_a_curr = value

    @builtins.property
    def arm_b_curr(self):
        """Message field 'arm_b_curr'."""
        return self._arm_b_curr

    @arm_b_curr.setter
    def arm_b_curr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_b_curr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_b_curr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_b_curr = value

    @builtins.property
    def leg_a_curr(self):
        """Message field 'leg_a_curr'."""
        return self._leg_a_curr

    @leg_a_curr.setter
    def leg_a_curr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_a_curr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_a_curr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_a_curr = value

    @builtins.property
    def leg_b_curr(self):
        """Message field 'leg_b_curr'."""
        return self._leg_b_curr

    @leg_b_curr.setter
    def leg_b_curr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_b_curr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_b_curr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_b_curr = value

    @builtins.property
    def waist_curr(self):
        """Message field 'waist_curr'."""
        return self._waist_curr

    @waist_curr.setter
    def waist_curr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waist_curr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'waist_curr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._waist_curr = value

    @builtins.property
    def head_curr(self):
        """Message field 'head_curr'."""
        return self._head_curr

    @head_curr.setter
    def head_curr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'head_curr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'head_curr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._head_curr = value

    @builtins.property
    def arm_a_curr_max(self):
        """Message field 'arm_a_curr_max'."""
        return self._arm_a_curr_max

    @arm_a_curr_max.setter
    def arm_a_curr_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_a_curr_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_a_curr_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_a_curr_max = value

    @builtins.property
    def arm_b_curr_max(self):
        """Message field 'arm_b_curr_max'."""
        return self._arm_b_curr_max

    @arm_b_curr_max.setter
    def arm_b_curr_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_b_curr_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_b_curr_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_b_curr_max = value

    @builtins.property
    def leg_a_curr_max(self):
        """Message field 'leg_a_curr_max'."""
        return self._leg_a_curr_max

    @leg_a_curr_max.setter
    def leg_a_curr_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_a_curr_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_a_curr_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_a_curr_max = value

    @builtins.property
    def leg_b_curr_max(self):
        """Message field 'leg_b_curr_max'."""
        return self._leg_b_curr_max

    @leg_b_curr_max.setter
    def leg_b_curr_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_b_curr_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_b_curr_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_b_curr_max = value

    @builtins.property
    def waist_curr_max(self):
        """Message field 'waist_curr_max'."""
        return self._waist_curr_max

    @waist_curr_max.setter
    def waist_curr_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waist_curr_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'waist_curr_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._waist_curr_max = value

    @builtins.property
    def head_curr_max(self):
        """Message field 'head_curr_max'."""
        return self._head_curr_max

    @head_curr_max.setter
    def head_curr_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'head_curr_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'head_curr_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._head_curr_max = value

    @builtins.property
    def arm_a_curr_min(self):
        """Message field 'arm_a_curr_min'."""
        return self._arm_a_curr_min

    @arm_a_curr_min.setter
    def arm_a_curr_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_a_curr_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_a_curr_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_a_curr_min = value

    @builtins.property
    def arm_b_curr_min(self):
        """Message field 'arm_b_curr_min'."""
        return self._arm_b_curr_min

    @arm_b_curr_min.setter
    def arm_b_curr_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_b_curr_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_b_curr_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_b_curr_min = value

    @builtins.property
    def leg_a_curr_min(self):
        """Message field 'leg_a_curr_min'."""
        return self._leg_a_curr_min

    @leg_a_curr_min.setter
    def leg_a_curr_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_a_curr_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_a_curr_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_a_curr_min = value

    @builtins.property
    def leg_b_curr_min(self):
        """Message field 'leg_b_curr_min'."""
        return self._leg_b_curr_min

    @leg_b_curr_min.setter
    def leg_b_curr_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_b_curr_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_b_curr_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_b_curr_min = value

    @builtins.property
    def waist_curr_min(self):
        """Message field 'waist_curr_min'."""
        return self._waist_curr_min

    @waist_curr_min.setter
    def waist_curr_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waist_curr_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'waist_curr_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._waist_curr_min = value

    @builtins.property
    def head_curr_min(self):
        """Message field 'head_curr_min'."""
        return self._head_curr_min

    @head_curr_min.setter
    def head_curr_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'head_curr_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'head_curr_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._head_curr_min = value

    @builtins.property
    def arm_a_volt(self):
        """Message field 'arm_a_volt'."""
        return self._arm_a_volt

    @arm_a_volt.setter
    def arm_a_volt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_a_volt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_a_volt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_a_volt = value

    @builtins.property
    def arm_b_volt(self):
        """Message field 'arm_b_volt'."""
        return self._arm_b_volt

    @arm_b_volt.setter
    def arm_b_volt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_b_volt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_b_volt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_b_volt = value

    @builtins.property
    def leg_a_volt(self):
        """Message field 'leg_a_volt'."""
        return self._leg_a_volt

    @leg_a_volt.setter
    def leg_a_volt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_a_volt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_a_volt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_a_volt = value

    @builtins.property
    def leg_b_volt(self):
        """Message field 'leg_b_volt'."""
        return self._leg_b_volt

    @leg_b_volt.setter
    def leg_b_volt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_b_volt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_b_volt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_b_volt = value

    @builtins.property
    def waist_volt(self):
        """Message field 'waist_volt'."""
        return self._waist_volt

    @waist_volt.setter
    def waist_volt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waist_volt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'waist_volt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._waist_volt = value

    @builtins.property
    def bus_volt(self):
        """Message field 'bus_volt'."""
        return self._bus_volt

    @bus_volt.setter
    def bus_volt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bus_volt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bus_volt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bus_volt = value

    @builtins.property
    def arm_a_volt_max(self):
        """Message field 'arm_a_volt_max'."""
        return self._arm_a_volt_max

    @arm_a_volt_max.setter
    def arm_a_volt_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_a_volt_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_a_volt_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_a_volt_max = value

    @builtins.property
    def arm_b_volt_max(self):
        """Message field 'arm_b_volt_max'."""
        return self._arm_b_volt_max

    @arm_b_volt_max.setter
    def arm_b_volt_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_b_volt_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_b_volt_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_b_volt_max = value

    @builtins.property
    def leg_a_volt_max(self):
        """Message field 'leg_a_volt_max'."""
        return self._leg_a_volt_max

    @leg_a_volt_max.setter
    def leg_a_volt_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_a_volt_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_a_volt_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_a_volt_max = value

    @builtins.property
    def leg_b_volt_max(self):
        """Message field 'leg_b_volt_max'."""
        return self._leg_b_volt_max

    @leg_b_volt_max.setter
    def leg_b_volt_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_b_volt_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_b_volt_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_b_volt_max = value

    @builtins.property
    def waist_volt_max(self):
        """Message field 'waist_volt_max'."""
        return self._waist_volt_max

    @waist_volt_max.setter
    def waist_volt_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waist_volt_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'waist_volt_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._waist_volt_max = value

    @builtins.property
    def bus_volt_max(self):
        """Message field 'bus_volt_max'."""
        return self._bus_volt_max

    @bus_volt_max.setter
    def bus_volt_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bus_volt_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bus_volt_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bus_volt_max = value

    @builtins.property
    def arm_a_volt_min(self):
        """Message field 'arm_a_volt_min'."""
        return self._arm_a_volt_min

    @arm_a_volt_min.setter
    def arm_a_volt_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_a_volt_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_a_volt_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_a_volt_min = value

    @builtins.property
    def arm_b_volt_min(self):
        """Message field 'arm_b_volt_min'."""
        return self._arm_b_volt_min

    @arm_b_volt_min.setter
    def arm_b_volt_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_b_volt_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_b_volt_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_b_volt_min = value

    @builtins.property
    def leg_a_volt_min(self):
        """Message field 'leg_a_volt_min'."""
        return self._leg_a_volt_min

    @leg_a_volt_min.setter
    def leg_a_volt_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_a_volt_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_a_volt_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_a_volt_min = value

    @builtins.property
    def leg_b_volt_min(self):
        """Message field 'leg_b_volt_min'."""
        return self._leg_b_volt_min

    @leg_b_volt_min.setter
    def leg_b_volt_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_b_volt_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leg_b_volt_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leg_b_volt_min = value

    @builtins.property
    def waist_volt_min(self):
        """Message field 'waist_volt_min'."""
        return self._waist_volt_min

    @waist_volt_min.setter
    def waist_volt_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waist_volt_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'waist_volt_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._waist_volt_min = value

    @builtins.property
    def bus_volt_min(self):
        """Message field 'bus_volt_min'."""
        return self._bus_volt_min

    @bus_volt_min.setter
    def bus_volt_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bus_volt_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bus_volt_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bus_volt_min = value

    @builtins.property
    def software_version(self):
        """Message field 'software_version'."""
        return self._software_version

    @software_version.setter
    def software_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'software_version' field must be of type 'str'"
        self._software_version = value

    @builtins.property
    def hardware_version(self):
        """Message field 'hardware_version'."""
        return self._hardware_version

    @hardware_version.setter
    def hardware_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hardware_version' field must be of type 'str'"
        self._hardware_version = value

    @builtins.property
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_voltage = value

    @builtins.property
    def battery_current(self):
        """Message field 'battery_current'."""
        return self._battery_current

    @battery_current.setter
    def battery_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_current = value

    @builtins.property
    def battery_power(self):
        """Message field 'battery_power'."""
        return self._battery_power

    @battery_power.setter
    def battery_power(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_power' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_power' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_power = value
