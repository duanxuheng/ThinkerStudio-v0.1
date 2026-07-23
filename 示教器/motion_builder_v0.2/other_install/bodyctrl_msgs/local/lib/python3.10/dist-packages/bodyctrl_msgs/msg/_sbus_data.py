# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/SbusData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbusData(type):
    """Metaclass of message 'SbusData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'KEY_NONE': 0,
        'KEY_A_UP': 1,
        'KEY_A_DOWN': 2,
        'KEY_B_UP': 3,
        'KEY_B_DOWN': 4,
        'KEY_C_UP': 5,
        'KEY_C_DOWN': 6,
        'KEY_D_UP': 7,
        'KEY_D_DOWN': 8,
        'KEY_E_UP': 9,
        'KEY_E_MID': 10,
        'KEY_E_DOWN': 11,
        'KEY_F_UP': 12,
        'KEY_F_MID': 13,
        'KEY_F_DOWN': 14,
        'KEY_G_LEFT': 15,
        'KEY_G_MID': 16,
        'KEY_G_RIGHT': 17,
        'KEY_H_LEFT': 18,
        'KEY_H_MID': 19,
        'KEY_H_RIGHT': 20,
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
                'bodyctrl_msgs.msg.SbusData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbus_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbus_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbus_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbus_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbus_data

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'KEY_NONE': cls.__constants['KEY_NONE'],
            'KEY_A_UP': cls.__constants['KEY_A_UP'],
            'KEY_A_DOWN': cls.__constants['KEY_A_DOWN'],
            'KEY_B_UP': cls.__constants['KEY_B_UP'],
            'KEY_B_DOWN': cls.__constants['KEY_B_DOWN'],
            'KEY_C_UP': cls.__constants['KEY_C_UP'],
            'KEY_C_DOWN': cls.__constants['KEY_C_DOWN'],
            'KEY_D_UP': cls.__constants['KEY_D_UP'],
            'KEY_D_DOWN': cls.__constants['KEY_D_DOWN'],
            'KEY_E_UP': cls.__constants['KEY_E_UP'],
            'KEY_E_MID': cls.__constants['KEY_E_MID'],
            'KEY_E_DOWN': cls.__constants['KEY_E_DOWN'],
            'KEY_F_UP': cls.__constants['KEY_F_UP'],
            'KEY_F_MID': cls.__constants['KEY_F_MID'],
            'KEY_F_DOWN': cls.__constants['KEY_F_DOWN'],
            'KEY_G_LEFT': cls.__constants['KEY_G_LEFT'],
            'KEY_G_MID': cls.__constants['KEY_G_MID'],
            'KEY_G_RIGHT': cls.__constants['KEY_G_RIGHT'],
            'KEY_H_LEFT': cls.__constants['KEY_H_LEFT'],
            'KEY_H_MID': cls.__constants['KEY_H_MID'],
            'KEY_H_RIGHT': cls.__constants['KEY_H_RIGHT'],
        }

    @property
    def KEY_NONE(self):
        """Message constant 'KEY_NONE'."""
        return Metaclass_SbusData.__constants['KEY_NONE']

    @property
    def KEY_A_UP(self):
        """Message constant 'KEY_A_UP'."""
        return Metaclass_SbusData.__constants['KEY_A_UP']

    @property
    def KEY_A_DOWN(self):
        """Message constant 'KEY_A_DOWN'."""
        return Metaclass_SbusData.__constants['KEY_A_DOWN']

    @property
    def KEY_B_UP(self):
        """Message constant 'KEY_B_UP'."""
        return Metaclass_SbusData.__constants['KEY_B_UP']

    @property
    def KEY_B_DOWN(self):
        """Message constant 'KEY_B_DOWN'."""
        return Metaclass_SbusData.__constants['KEY_B_DOWN']

    @property
    def KEY_C_UP(self):
        """Message constant 'KEY_C_UP'."""
        return Metaclass_SbusData.__constants['KEY_C_UP']

    @property
    def KEY_C_DOWN(self):
        """Message constant 'KEY_C_DOWN'."""
        return Metaclass_SbusData.__constants['KEY_C_DOWN']

    @property
    def KEY_D_UP(self):
        """Message constant 'KEY_D_UP'."""
        return Metaclass_SbusData.__constants['KEY_D_UP']

    @property
    def KEY_D_DOWN(self):
        """Message constant 'KEY_D_DOWN'."""
        return Metaclass_SbusData.__constants['KEY_D_DOWN']

    @property
    def KEY_E_UP(self):
        """Message constant 'KEY_E_UP'."""
        return Metaclass_SbusData.__constants['KEY_E_UP']

    @property
    def KEY_E_MID(self):
        """Message constant 'KEY_E_MID'."""
        return Metaclass_SbusData.__constants['KEY_E_MID']

    @property
    def KEY_E_DOWN(self):
        """Message constant 'KEY_E_DOWN'."""
        return Metaclass_SbusData.__constants['KEY_E_DOWN']

    @property
    def KEY_F_UP(self):
        """Message constant 'KEY_F_UP'."""
        return Metaclass_SbusData.__constants['KEY_F_UP']

    @property
    def KEY_F_MID(self):
        """Message constant 'KEY_F_MID'."""
        return Metaclass_SbusData.__constants['KEY_F_MID']

    @property
    def KEY_F_DOWN(self):
        """Message constant 'KEY_F_DOWN'."""
        return Metaclass_SbusData.__constants['KEY_F_DOWN']

    @property
    def KEY_G_LEFT(self):
        """Message constant 'KEY_G_LEFT'."""
        return Metaclass_SbusData.__constants['KEY_G_LEFT']

    @property
    def KEY_G_MID(self):
        """Message constant 'KEY_G_MID'."""
        return Metaclass_SbusData.__constants['KEY_G_MID']

    @property
    def KEY_G_RIGHT(self):
        """Message constant 'KEY_G_RIGHT'."""
        return Metaclass_SbusData.__constants['KEY_G_RIGHT']

    @property
    def KEY_H_LEFT(self):
        """Message constant 'KEY_H_LEFT'."""
        return Metaclass_SbusData.__constants['KEY_H_LEFT']

    @property
    def KEY_H_MID(self):
        """Message constant 'KEY_H_MID'."""
        return Metaclass_SbusData.__constants['KEY_H_MID']

    @property
    def KEY_H_RIGHT(self):
        """Message constant 'KEY_H_RIGHT'."""
        return Metaclass_SbusData.__constants['KEY_H_RIGHT']


class SbusData(metaclass=Metaclass_SbusData):
    """
    Message class 'SbusData'.

    Constants:
      KEY_NONE
      KEY_A_UP
      KEY_A_DOWN
      KEY_B_UP
      KEY_B_DOWN
      KEY_C_UP
      KEY_C_DOWN
      KEY_D_UP
      KEY_D_DOWN
      KEY_E_UP
      KEY_E_MID
      KEY_E_DOWN
      KEY_F_UP
      KEY_F_MID
      KEY_F_DOWN
      KEY_G_LEFT
      KEY_G_MID
      KEY_G_RIGHT
      KEY_H_LEFT
      KEY_H_MID
      KEY_H_RIGHT
    """

    __slots__ = [
        '_header',
        '_key_event_new',
        '_key_event_old',
        '_button_a',
        '_button_b',
        '_button_c',
        '_button_d',
        '_button_e',
        '_button_f',
        '_button_g',
        '_button_h',
        '_x1',
        '_y1',
        '_x2',
        '_y2',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'key_event_new': 'int32',
        'key_event_old': 'int32',
        'button_a': 'int8',
        'button_b': 'int8',
        'button_c': 'int8',
        'button_d': 'int8',
        'button_e': 'int8',
        'button_f': 'int8',
        'button_g': 'int8',
        'button_h': 'int8',
        'x1': 'float',
        'y1': 'float',
        'x2': 'float',
        'y2': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.key_event_new = kwargs.get('key_event_new', int())
        self.key_event_old = kwargs.get('key_event_old', int())
        self.button_a = kwargs.get('button_a', int())
        self.button_b = kwargs.get('button_b', int())
        self.button_c = kwargs.get('button_c', int())
        self.button_d = kwargs.get('button_d', int())
        self.button_e = kwargs.get('button_e', int())
        self.button_f = kwargs.get('button_f', int())
        self.button_g = kwargs.get('button_g', int())
        self.button_h = kwargs.get('button_h', int())
        self.x1 = kwargs.get('x1', float())
        self.y1 = kwargs.get('y1', float())
        self.x2 = kwargs.get('x2', float())
        self.y2 = kwargs.get('y2', float())

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
        if self.key_event_new != other.key_event_new:
            return False
        if self.key_event_old != other.key_event_old:
            return False
        if self.button_a != other.button_a:
            return False
        if self.button_b != other.button_b:
            return False
        if self.button_c != other.button_c:
            return False
        if self.button_d != other.button_d:
            return False
        if self.button_e != other.button_e:
            return False
        if self.button_f != other.button_f:
            return False
        if self.button_g != other.button_g:
            return False
        if self.button_h != other.button_h:
            return False
        if self.x1 != other.x1:
            return False
        if self.y1 != other.y1:
            return False
        if self.x2 != other.x2:
            return False
        if self.y2 != other.y2:
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
    def key_event_new(self):
        """Message field 'key_event_new'."""
        return self._key_event_new

    @key_event_new.setter
    def key_event_new(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'key_event_new' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'key_event_new' field must be an integer in [-2147483648, 2147483647]"
        self._key_event_new = value

    @builtins.property
    def key_event_old(self):
        """Message field 'key_event_old'."""
        return self._key_event_old

    @key_event_old.setter
    def key_event_old(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'key_event_old' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'key_event_old' field must be an integer in [-2147483648, 2147483647]"
        self._key_event_old = value

    @builtins.property
    def button_a(self):
        """Message field 'button_a'."""
        return self._button_a

    @button_a.setter
    def button_a(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_a' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'button_a' field must be an integer in [-128, 127]"
        self._button_a = value

    @builtins.property
    def button_b(self):
        """Message field 'button_b'."""
        return self._button_b

    @button_b.setter
    def button_b(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_b' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'button_b' field must be an integer in [-128, 127]"
        self._button_b = value

    @builtins.property
    def button_c(self):
        """Message field 'button_c'."""
        return self._button_c

    @button_c.setter
    def button_c(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_c' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'button_c' field must be an integer in [-128, 127]"
        self._button_c = value

    @builtins.property
    def button_d(self):
        """Message field 'button_d'."""
        return self._button_d

    @button_d.setter
    def button_d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_d' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'button_d' field must be an integer in [-128, 127]"
        self._button_d = value

    @builtins.property
    def button_e(self):
        """Message field 'button_e'."""
        return self._button_e

    @button_e.setter
    def button_e(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_e' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'button_e' field must be an integer in [-128, 127]"
        self._button_e = value

    @builtins.property
    def button_f(self):
        """Message field 'button_f'."""
        return self._button_f

    @button_f.setter
    def button_f(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_f' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'button_f' field must be an integer in [-128, 127]"
        self._button_f = value

    @builtins.property
    def button_g(self):
        """Message field 'button_g'."""
        return self._button_g

    @button_g.setter
    def button_g(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_g' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'button_g' field must be an integer in [-128, 127]"
        self._button_g = value

    @builtins.property
    def button_h(self):
        """Message field 'button_h'."""
        return self._button_h

    @button_h.setter
    def button_h(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_h' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'button_h' field must be an integer in [-128, 127]"
        self._button_h = value

    @builtins.property
    def x1(self):
        """Message field 'x1'."""
        return self._x1

    @x1.setter
    def x1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x1 = value

    @builtins.property
    def y1(self):
        """Message field 'y1'."""
        return self._y1

    @y1.setter
    def y1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y1 = value

    @builtins.property
    def x2(self):
        """Message field 'x2'."""
        return self._x2

    @x2.setter
    def x2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x2 = value

    @builtins.property
    def y2(self):
        """Message field 'y2'."""
        return self._y2

    @y2.setter
    def y2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y2 = value
