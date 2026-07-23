# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/PowerBatteryStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PowerBatteryStatus(type):
    """Metaclass of message 'PowerBatteryStatus'."""

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
                'bodyctrl_msgs.msg.PowerBatteryStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__power_battery_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__power_battery_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__power_battery_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__power_battery_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__power_battery_status

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


class PowerBatteryStatus(metaclass=Metaclass_PowerBatteryStatus):
    """Message class 'PowerBatteryStatus'."""

    __slots__ = [
        '_header',
        '_battery_installed',
        '_battery_working',
        '_master_battery_voltage',
        '_master_battery_current',
        '_master_battery_power',
        '_little_battery_voltage',
        '_little_battery_current',
        '_little_battery_power',
        '_pg12a',
        '_pg12b',
        '_pg12c',
        '_pg12d',
        '_pg5cd',
        '_pg5ab',
        '_pgrdc2',
        '_pgrdc1',
        '_pgheader',
        '_pgbutton2',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'battery_installed': 'int32',
        'battery_working': 'int32',
        'master_battery_voltage': 'float',
        'master_battery_current': 'float',
        'master_battery_power': 'float',
        'little_battery_voltage': 'float',
        'little_battery_current': 'float',
        'little_battery_power': 'float',
        'pg12a': 'int8',
        'pg12b': 'int8',
        'pg12c': 'int8',
        'pg12d': 'int8',
        'pg5cd': 'int8',
        'pg5ab': 'int8',
        'pgrdc2': 'int8',
        'pgrdc1': 'int8',
        'pgheader': 'int8',
        'pgbutton2': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.battery_installed = kwargs.get('battery_installed', int())
        self.battery_working = kwargs.get('battery_working', int())
        self.master_battery_voltage = kwargs.get('master_battery_voltage', float())
        self.master_battery_current = kwargs.get('master_battery_current', float())
        self.master_battery_power = kwargs.get('master_battery_power', float())
        self.little_battery_voltage = kwargs.get('little_battery_voltage', float())
        self.little_battery_current = kwargs.get('little_battery_current', float())
        self.little_battery_power = kwargs.get('little_battery_power', float())
        self.pg12a = kwargs.get('pg12a', int())
        self.pg12b = kwargs.get('pg12b', int())
        self.pg12c = kwargs.get('pg12c', int())
        self.pg12d = kwargs.get('pg12d', int())
        self.pg5cd = kwargs.get('pg5cd', int())
        self.pg5ab = kwargs.get('pg5ab', int())
        self.pgrdc2 = kwargs.get('pgrdc2', int())
        self.pgrdc1 = kwargs.get('pgrdc1', int())
        self.pgheader = kwargs.get('pgheader', int())
        self.pgbutton2 = kwargs.get('pgbutton2', int())

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
        if self.battery_installed != other.battery_installed:
            return False
        if self.battery_working != other.battery_working:
            return False
        if self.master_battery_voltage != other.master_battery_voltage:
            return False
        if self.master_battery_current != other.master_battery_current:
            return False
        if self.master_battery_power != other.master_battery_power:
            return False
        if self.little_battery_voltage != other.little_battery_voltage:
            return False
        if self.little_battery_current != other.little_battery_current:
            return False
        if self.little_battery_power != other.little_battery_power:
            return False
        if self.pg12a != other.pg12a:
            return False
        if self.pg12b != other.pg12b:
            return False
        if self.pg12c != other.pg12c:
            return False
        if self.pg12d != other.pg12d:
            return False
        if self.pg5cd != other.pg5cd:
            return False
        if self.pg5ab != other.pg5ab:
            return False
        if self.pgrdc2 != other.pgrdc2:
            return False
        if self.pgrdc1 != other.pgrdc1:
            return False
        if self.pgheader != other.pgheader:
            return False
        if self.pgbutton2 != other.pgbutton2:
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
    def battery_installed(self):
        """Message field 'battery_installed'."""
        return self._battery_installed

    @battery_installed.setter
    def battery_installed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_installed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'battery_installed' field must be an integer in [-2147483648, 2147483647]"
        self._battery_installed = value

    @builtins.property
    def battery_working(self):
        """Message field 'battery_working'."""
        return self._battery_working

    @battery_working.setter
    def battery_working(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_working' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'battery_working' field must be an integer in [-2147483648, 2147483647]"
        self._battery_working = value

    @builtins.property
    def master_battery_voltage(self):
        """Message field 'master_battery_voltage'."""
        return self._master_battery_voltage

    @master_battery_voltage.setter
    def master_battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'master_battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'master_battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._master_battery_voltage = value

    @builtins.property
    def master_battery_current(self):
        """Message field 'master_battery_current'."""
        return self._master_battery_current

    @master_battery_current.setter
    def master_battery_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'master_battery_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'master_battery_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._master_battery_current = value

    @builtins.property
    def master_battery_power(self):
        """Message field 'master_battery_power'."""
        return self._master_battery_power

    @master_battery_power.setter
    def master_battery_power(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'master_battery_power' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'master_battery_power' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._master_battery_power = value

    @builtins.property
    def little_battery_voltage(self):
        """Message field 'little_battery_voltage'."""
        return self._little_battery_voltage

    @little_battery_voltage.setter
    def little_battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'little_battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'little_battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._little_battery_voltage = value

    @builtins.property
    def little_battery_current(self):
        """Message field 'little_battery_current'."""
        return self._little_battery_current

    @little_battery_current.setter
    def little_battery_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'little_battery_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'little_battery_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._little_battery_current = value

    @builtins.property
    def little_battery_power(self):
        """Message field 'little_battery_power'."""
        return self._little_battery_power

    @little_battery_power.setter
    def little_battery_power(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'little_battery_power' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'little_battery_power' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._little_battery_power = value

    @builtins.property
    def pg12a(self):
        """Message field 'pg12a'."""
        return self._pg12a

    @pg12a.setter
    def pg12a(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pg12a' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pg12a' field must be an integer in [-128, 127]"
        self._pg12a = value

    @builtins.property
    def pg12b(self):
        """Message field 'pg12b'."""
        return self._pg12b

    @pg12b.setter
    def pg12b(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pg12b' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pg12b' field must be an integer in [-128, 127]"
        self._pg12b = value

    @builtins.property
    def pg12c(self):
        """Message field 'pg12c'."""
        return self._pg12c

    @pg12c.setter
    def pg12c(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pg12c' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pg12c' field must be an integer in [-128, 127]"
        self._pg12c = value

    @builtins.property
    def pg12d(self):
        """Message field 'pg12d'."""
        return self._pg12d

    @pg12d.setter
    def pg12d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pg12d' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pg12d' field must be an integer in [-128, 127]"
        self._pg12d = value

    @builtins.property
    def pg5cd(self):
        """Message field 'pg5cd'."""
        return self._pg5cd

    @pg5cd.setter
    def pg5cd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pg5cd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pg5cd' field must be an integer in [-128, 127]"
        self._pg5cd = value

    @builtins.property
    def pg5ab(self):
        """Message field 'pg5ab'."""
        return self._pg5ab

    @pg5ab.setter
    def pg5ab(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pg5ab' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pg5ab' field must be an integer in [-128, 127]"
        self._pg5ab = value

    @builtins.property
    def pgrdc2(self):
        """Message field 'pgrdc2'."""
        return self._pgrdc2

    @pgrdc2.setter
    def pgrdc2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pgrdc2' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pgrdc2' field must be an integer in [-128, 127]"
        self._pgrdc2 = value

    @builtins.property
    def pgrdc1(self):
        """Message field 'pgrdc1'."""
        return self._pgrdc1

    @pgrdc1.setter
    def pgrdc1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pgrdc1' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pgrdc1' field must be an integer in [-128, 127]"
        self._pgrdc1 = value

    @builtins.property
    def pgheader(self):
        """Message field 'pgheader'."""
        return self._pgheader

    @pgheader.setter
    def pgheader(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pgheader' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pgheader' field must be an integer in [-128, 127]"
        self._pgheader = value

    @builtins.property
    def pgbutton2(self):
        """Message field 'pgbutton2'."""
        return self._pgbutton2

    @pgbutton2.setter
    def pgbutton2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pgbutton2' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pgbutton2' field must be an integer in [-128, 127]"
        self._pgbutton2 = value
