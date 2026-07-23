# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/MotorStatusMsgPlate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorStatusMsgPlate(type):
    """Metaclass of message 'MotorStatusMsgPlate'."""

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
                'bodyctrl_msgs.msg.MotorStatusMsgPlate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_status_msg_plate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_status_msg_plate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_status_msg_plate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_status_msg_plate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_status_msg_plate

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


class MotorStatusMsgPlate(metaclass=Metaclass_MotorStatusMsgPlate):
    """Message class 'MotorStatusMsgPlate'."""

    __slots__ = [
        '_header',
        '_name1',
        '_pos1',
        '_speed1',
        '_current1',
        '_name2',
        '_pos2',
        '_speed2',
        '_current2',
        '_name3',
        '_pos3',
        '_speed3',
        '_current3',
        '_name4',
        '_pos4',
        '_speed4',
        '_current4',
        '_name5',
        '_pos5',
        '_speed5',
        '_current5',
        '_name6',
        '_pos6',
        '_speed6',
        '_current6',
        '_name7',
        '_pos7',
        '_speed7',
        '_current7',
        '_name8',
        '_pos8',
        '_speed8',
        '_current8',
        '_name9',
        '_pos9',
        '_speed9',
        '_current9',
        '_name10',
        '_pos10',
        '_speed10',
        '_current10',
        '_name11',
        '_pos11',
        '_speed11',
        '_current11',
        '_name12',
        '_pos12',
        '_speed12',
        '_current12',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'name1': 'uint16',
        'pos1': 'float',
        'speed1': 'float',
        'current1': 'float',
        'name2': 'uint16',
        'pos2': 'float',
        'speed2': 'float',
        'current2': 'float',
        'name3': 'uint16',
        'pos3': 'float',
        'speed3': 'float',
        'current3': 'float',
        'name4': 'uint16',
        'pos4': 'float',
        'speed4': 'float',
        'current4': 'float',
        'name5': 'uint16',
        'pos5': 'float',
        'speed5': 'float',
        'current5': 'float',
        'name6': 'uint16',
        'pos6': 'float',
        'speed6': 'float',
        'current6': 'float',
        'name7': 'uint16',
        'pos7': 'float',
        'speed7': 'float',
        'current7': 'float',
        'name8': 'uint16',
        'pos8': 'float',
        'speed8': 'float',
        'current8': 'float',
        'name9': 'uint16',
        'pos9': 'float',
        'speed9': 'float',
        'current9': 'float',
        'name10': 'uint16',
        'pos10': 'float',
        'speed10': 'float',
        'current10': 'float',
        'name11': 'uint16',
        'pos11': 'float',
        'speed11': 'float',
        'current11': 'float',
        'name12': 'uint16',
        'pos12': 'float',
        'speed12': 'float',
        'current12': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.name1 = kwargs.get('name1', int())
        self.pos1 = kwargs.get('pos1', float())
        self.speed1 = kwargs.get('speed1', float())
        self.current1 = kwargs.get('current1', float())
        self.name2 = kwargs.get('name2', int())
        self.pos2 = kwargs.get('pos2', float())
        self.speed2 = kwargs.get('speed2', float())
        self.current2 = kwargs.get('current2', float())
        self.name3 = kwargs.get('name3', int())
        self.pos3 = kwargs.get('pos3', float())
        self.speed3 = kwargs.get('speed3', float())
        self.current3 = kwargs.get('current3', float())
        self.name4 = kwargs.get('name4', int())
        self.pos4 = kwargs.get('pos4', float())
        self.speed4 = kwargs.get('speed4', float())
        self.current4 = kwargs.get('current4', float())
        self.name5 = kwargs.get('name5', int())
        self.pos5 = kwargs.get('pos5', float())
        self.speed5 = kwargs.get('speed5', float())
        self.current5 = kwargs.get('current5', float())
        self.name6 = kwargs.get('name6', int())
        self.pos6 = kwargs.get('pos6', float())
        self.speed6 = kwargs.get('speed6', float())
        self.current6 = kwargs.get('current6', float())
        self.name7 = kwargs.get('name7', int())
        self.pos7 = kwargs.get('pos7', float())
        self.speed7 = kwargs.get('speed7', float())
        self.current7 = kwargs.get('current7', float())
        self.name8 = kwargs.get('name8', int())
        self.pos8 = kwargs.get('pos8', float())
        self.speed8 = kwargs.get('speed8', float())
        self.current8 = kwargs.get('current8', float())
        self.name9 = kwargs.get('name9', int())
        self.pos9 = kwargs.get('pos9', float())
        self.speed9 = kwargs.get('speed9', float())
        self.current9 = kwargs.get('current9', float())
        self.name10 = kwargs.get('name10', int())
        self.pos10 = kwargs.get('pos10', float())
        self.speed10 = kwargs.get('speed10', float())
        self.current10 = kwargs.get('current10', float())
        self.name11 = kwargs.get('name11', int())
        self.pos11 = kwargs.get('pos11', float())
        self.speed11 = kwargs.get('speed11', float())
        self.current11 = kwargs.get('current11', float())
        self.name12 = kwargs.get('name12', int())
        self.pos12 = kwargs.get('pos12', float())
        self.speed12 = kwargs.get('speed12', float())
        self.current12 = kwargs.get('current12', float())

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
        if self.name1 != other.name1:
            return False
        if self.pos1 != other.pos1:
            return False
        if self.speed1 != other.speed1:
            return False
        if self.current1 != other.current1:
            return False
        if self.name2 != other.name2:
            return False
        if self.pos2 != other.pos2:
            return False
        if self.speed2 != other.speed2:
            return False
        if self.current2 != other.current2:
            return False
        if self.name3 != other.name3:
            return False
        if self.pos3 != other.pos3:
            return False
        if self.speed3 != other.speed3:
            return False
        if self.current3 != other.current3:
            return False
        if self.name4 != other.name4:
            return False
        if self.pos4 != other.pos4:
            return False
        if self.speed4 != other.speed4:
            return False
        if self.current4 != other.current4:
            return False
        if self.name5 != other.name5:
            return False
        if self.pos5 != other.pos5:
            return False
        if self.speed5 != other.speed5:
            return False
        if self.current5 != other.current5:
            return False
        if self.name6 != other.name6:
            return False
        if self.pos6 != other.pos6:
            return False
        if self.speed6 != other.speed6:
            return False
        if self.current6 != other.current6:
            return False
        if self.name7 != other.name7:
            return False
        if self.pos7 != other.pos7:
            return False
        if self.speed7 != other.speed7:
            return False
        if self.current7 != other.current7:
            return False
        if self.name8 != other.name8:
            return False
        if self.pos8 != other.pos8:
            return False
        if self.speed8 != other.speed8:
            return False
        if self.current8 != other.current8:
            return False
        if self.name9 != other.name9:
            return False
        if self.pos9 != other.pos9:
            return False
        if self.speed9 != other.speed9:
            return False
        if self.current9 != other.current9:
            return False
        if self.name10 != other.name10:
            return False
        if self.pos10 != other.pos10:
            return False
        if self.speed10 != other.speed10:
            return False
        if self.current10 != other.current10:
            return False
        if self.name11 != other.name11:
            return False
        if self.pos11 != other.pos11:
            return False
        if self.speed11 != other.speed11:
            return False
        if self.current11 != other.current11:
            return False
        if self.name12 != other.name12:
            return False
        if self.pos12 != other.pos12:
            return False
        if self.speed12 != other.speed12:
            return False
        if self.current12 != other.current12:
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
    def name1(self):
        """Message field 'name1'."""
        return self._name1

    @name1.setter
    def name1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'name1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'name1' field must be an unsigned integer in [0, 65535]"
        self._name1 = value

    @builtins.property
    def pos1(self):
        """Message field 'pos1'."""
        return self._pos1

    @pos1.setter
    def pos1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos1 = value

    @builtins.property
    def speed1(self):
        """Message field 'speed1'."""
        return self._speed1

    @speed1.setter
    def speed1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed1 = value

    @builtins.property
    def current1(self):
        """Message field 'current1'."""
        return self._current1

    @current1.setter
    def current1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current1 = value

    @builtins.property
    def name2(self):
        """Message field 'name2'."""
        return self._name2

    @name2.setter
    def name2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'name2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'name2' field must be an unsigned integer in [0, 65535]"
        self._name2 = value

    @builtins.property
    def pos2(self):
        """Message field 'pos2'."""
        return self._pos2

    @pos2.setter
    def pos2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos2 = value

    @builtins.property
    def speed2(self):
        """Message field 'speed2'."""
        return self._speed2

    @speed2.setter
    def speed2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed2 = value

    @builtins.property
    def current2(self):
        """Message field 'current2'."""
        return self._current2

    @current2.setter
    def current2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current2 = value

    @builtins.property
    def name3(self):
        """Message field 'name3'."""
        return self._name3

    @name3.setter
    def name3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'name3' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'name3' field must be an unsigned integer in [0, 65535]"
        self._name3 = value

    @builtins.property
    def pos3(self):
        """Message field 'pos3'."""
        return self._pos3

    @pos3.setter
    def pos3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos3 = value

    @builtins.property
    def speed3(self):
        """Message field 'speed3'."""
        return self._speed3

    @speed3.setter
    def speed3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed3 = value

    @builtins.property
    def current3(self):
        """Message field 'current3'."""
        return self._current3

    @current3.setter
    def current3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current3 = value

    @builtins.property
    def name4(self):
        """Message field 'name4'."""
        return self._name4

    @name4.setter
    def name4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'name4' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'name4' field must be an unsigned integer in [0, 65535]"
        self._name4 = value

    @builtins.property
    def pos4(self):
        """Message field 'pos4'."""
        return self._pos4

    @pos4.setter
    def pos4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos4 = value

    @builtins.property
    def speed4(self):
        """Message field 'speed4'."""
        return self._speed4

    @speed4.setter
    def speed4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed4 = value

    @builtins.property
    def current4(self):
        """Message field 'current4'."""
        return self._current4

    @current4.setter
    def current4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current4 = value

    @builtins.property
    def name5(self):
        """Message field 'name5'."""
        return self._name5

    @name5.setter
    def name5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'name5' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'name5' field must be an unsigned integer in [0, 65535]"
        self._name5 = value

    @builtins.property
    def pos5(self):
        """Message field 'pos5'."""
        return self._pos5

    @pos5.setter
    def pos5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos5 = value

    @builtins.property
    def speed5(self):
        """Message field 'speed5'."""
        return self._speed5

    @speed5.setter
    def speed5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed5 = value

    @builtins.property
    def current5(self):
        """Message field 'current5'."""
        return self._current5

    @current5.setter
    def current5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current5 = value

    @builtins.property
    def name6(self):
        """Message field 'name6'."""
        return self._name6

    @name6.setter
    def name6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'name6' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'name6' field must be an unsigned integer in [0, 65535]"
        self._name6 = value

    @builtins.property
    def pos6(self):
        """Message field 'pos6'."""
        return self._pos6

    @pos6.setter
    def pos6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos6 = value

    @builtins.property
    def speed6(self):
        """Message field 'speed6'."""
        return self._speed6

    @speed6.setter
    def speed6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed6 = value

    @builtins.property
    def current6(self):
        """Message field 'current6'."""
        return self._current6

    @current6.setter
    def current6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current6 = value

    @builtins.property
    def name7(self):
        """Message field 'name7'."""
        return self._name7

    @name7.setter
    def name7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'name7' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'name7' field must be an unsigned integer in [0, 65535]"
        self._name7 = value

    @builtins.property
    def pos7(self):
        """Message field 'pos7'."""
        return self._pos7

    @pos7.setter
    def pos7(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos7' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos7' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos7 = value

    @builtins.property
    def speed7(self):
        """Message field 'speed7'."""
        return self._speed7

    @speed7.setter
    def speed7(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed7' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed7' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed7 = value

    @builtins.property
    def current7(self):
        """Message field 'current7'."""
        return self._current7

    @current7.setter
    def current7(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current7' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current7' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current7 = value

    @builtins.property
    def name8(self):
        """Message field 'name8'."""
        return self._name8

    @name8.setter
    def name8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'name8' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'name8' field must be an unsigned integer in [0, 65535]"
        self._name8 = value

    @builtins.property
    def pos8(self):
        """Message field 'pos8'."""
        return self._pos8

    @pos8.setter
    def pos8(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos8' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos8' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos8 = value

    @builtins.property
    def speed8(self):
        """Message field 'speed8'."""
        return self._speed8

    @speed8.setter
    def speed8(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed8' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed8' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed8 = value

    @builtins.property
    def current8(self):
        """Message field 'current8'."""
        return self._current8

    @current8.setter
    def current8(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current8' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current8' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current8 = value

    @builtins.property
    def name9(self):
        """Message field 'name9'."""
        return self._name9

    @name9.setter
    def name9(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'name9' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'name9' field must be an unsigned integer in [0, 65535]"
        self._name9 = value

    @builtins.property
    def pos9(self):
        """Message field 'pos9'."""
        return self._pos9

    @pos9.setter
    def pos9(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos9' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos9' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos9 = value

    @builtins.property
    def speed9(self):
        """Message field 'speed9'."""
        return self._speed9

    @speed9.setter
    def speed9(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed9' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed9' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed9 = value

    @builtins.property
    def current9(self):
        """Message field 'current9'."""
        return self._current9

    @current9.setter
    def current9(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current9' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current9' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current9 = value

    @builtins.property
    def name10(self):
        """Message field 'name10'."""
        return self._name10

    @name10.setter
    def name10(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'name10' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'name10' field must be an unsigned integer in [0, 65535]"
        self._name10 = value

    @builtins.property
    def pos10(self):
        """Message field 'pos10'."""
        return self._pos10

    @pos10.setter
    def pos10(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos10' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos10' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos10 = value

    @builtins.property
    def speed10(self):
        """Message field 'speed10'."""
        return self._speed10

    @speed10.setter
    def speed10(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed10' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed10' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed10 = value

    @builtins.property
    def current10(self):
        """Message field 'current10'."""
        return self._current10

    @current10.setter
    def current10(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current10' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current10' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current10 = value

    @builtins.property
    def name11(self):
        """Message field 'name11'."""
        return self._name11

    @name11.setter
    def name11(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'name11' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'name11' field must be an unsigned integer in [0, 65535]"
        self._name11 = value

    @builtins.property
    def pos11(self):
        """Message field 'pos11'."""
        return self._pos11

    @pos11.setter
    def pos11(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos11' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos11' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos11 = value

    @builtins.property
    def speed11(self):
        """Message field 'speed11'."""
        return self._speed11

    @speed11.setter
    def speed11(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed11' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed11' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed11 = value

    @builtins.property
    def current11(self):
        """Message field 'current11'."""
        return self._current11

    @current11.setter
    def current11(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current11' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current11' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current11 = value

    @builtins.property
    def name12(self):
        """Message field 'name12'."""
        return self._name12

    @name12.setter
    def name12(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'name12' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'name12' field must be an unsigned integer in [0, 65535]"
        self._name12 = value

    @builtins.property
    def pos12(self):
        """Message field 'pos12'."""
        return self._pos12

    @pos12.setter
    def pos12(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos12' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos12' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos12 = value

    @builtins.property
    def speed12(self):
        """Message field 'speed12'."""
        return self._speed12

    @speed12.setter
    def speed12(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed12' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed12' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed12 = value

    @builtins.property
    def current12(self):
        """Message field 'current12'."""
        return self._current12

    @current12.setter
    def current12(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current12' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current12' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current12 = value
