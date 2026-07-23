# generated from rosidl_generator_py/resource/_idl.py.em
# with input from bodyctrl_msgs:msg/MotorName.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorName(type):
    """Metaclass of message 'MotorName'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MOTOR_HEAD_1': 1,
        'MOTOR_HEAD_2': 2,
        'MOTOR_HEAD_3': 3,
        'MOTOR_ARM_LEFT_1': 11,
        'MOTOR_ARM_LEFT_2': 12,
        'MOTOR_ARM_LEFT_3': 13,
        'MOTOR_ARM_LEFT_4': 14,
        'MOTOR_ARM_LEFT_5': 15,
        'MOTOR_ARM_LEFT_6': 16,
        'MOTOR_ARM_LEFT_7': 17,
        'MOTOR_ARM_RIGHT_1': 21,
        'MOTOR_ARM_RIGHT_2': 22,
        'MOTOR_ARM_RIGHT_3': 23,
        'MOTOR_ARM_RIGHT_4': 24,
        'MOTOR_ARM_RIGHT_5': 25,
        'MOTOR_ARM_RIGHT_6': 26,
        'MOTOR_ARM_RIGHT_7': 27,
        'MOTOR_WAIST_1': 31,
        'MOTOR_WAIST_2': 32,
        'MOTOR_WAIST_3': 33,
        'MOTOR_LEG_LEFT_1': 51,
        'MOTOR_LEG_LEFT_2': 52,
        'MOTOR_LEG_LEFT_3': 53,
        'MOTOR_LEG_LEFT_4': 54,
        'MOTOR_LEG_LEFT_5': 55,
        'MOTOR_LEG_LEFT_6': 56,
        'MOTOR_LEG_RIGHT_1': 61,
        'MOTOR_LEG_RIGHT_2': 62,
        'MOTOR_LEG_RIGHT_3': 63,
        'MOTOR_LEG_RIGHT_4': 64,
        'MOTOR_LEG_RIGHT_5': 65,
        'MOTOR_LEG_RIGHT_6': 66,
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
                'bodyctrl_msgs.msg.MotorName')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_name
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_name
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_name
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_name
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_name

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MOTOR_HEAD_1': cls.__constants['MOTOR_HEAD_1'],
            'MOTOR_HEAD_2': cls.__constants['MOTOR_HEAD_2'],
            'MOTOR_HEAD_3': cls.__constants['MOTOR_HEAD_3'],
            'MOTOR_ARM_LEFT_1': cls.__constants['MOTOR_ARM_LEFT_1'],
            'MOTOR_ARM_LEFT_2': cls.__constants['MOTOR_ARM_LEFT_2'],
            'MOTOR_ARM_LEFT_3': cls.__constants['MOTOR_ARM_LEFT_3'],
            'MOTOR_ARM_LEFT_4': cls.__constants['MOTOR_ARM_LEFT_4'],
            'MOTOR_ARM_LEFT_5': cls.__constants['MOTOR_ARM_LEFT_5'],
            'MOTOR_ARM_LEFT_6': cls.__constants['MOTOR_ARM_LEFT_6'],
            'MOTOR_ARM_LEFT_7': cls.__constants['MOTOR_ARM_LEFT_7'],
            'MOTOR_ARM_RIGHT_1': cls.__constants['MOTOR_ARM_RIGHT_1'],
            'MOTOR_ARM_RIGHT_2': cls.__constants['MOTOR_ARM_RIGHT_2'],
            'MOTOR_ARM_RIGHT_3': cls.__constants['MOTOR_ARM_RIGHT_3'],
            'MOTOR_ARM_RIGHT_4': cls.__constants['MOTOR_ARM_RIGHT_4'],
            'MOTOR_ARM_RIGHT_5': cls.__constants['MOTOR_ARM_RIGHT_5'],
            'MOTOR_ARM_RIGHT_6': cls.__constants['MOTOR_ARM_RIGHT_6'],
            'MOTOR_ARM_RIGHT_7': cls.__constants['MOTOR_ARM_RIGHT_7'],
            'MOTOR_WAIST_1': cls.__constants['MOTOR_WAIST_1'],
            'MOTOR_WAIST_2': cls.__constants['MOTOR_WAIST_2'],
            'MOTOR_WAIST_3': cls.__constants['MOTOR_WAIST_3'],
            'MOTOR_LEG_LEFT_1': cls.__constants['MOTOR_LEG_LEFT_1'],
            'MOTOR_LEG_LEFT_2': cls.__constants['MOTOR_LEG_LEFT_2'],
            'MOTOR_LEG_LEFT_3': cls.__constants['MOTOR_LEG_LEFT_3'],
            'MOTOR_LEG_LEFT_4': cls.__constants['MOTOR_LEG_LEFT_4'],
            'MOTOR_LEG_LEFT_5': cls.__constants['MOTOR_LEG_LEFT_5'],
            'MOTOR_LEG_LEFT_6': cls.__constants['MOTOR_LEG_LEFT_6'],
            'MOTOR_LEG_RIGHT_1': cls.__constants['MOTOR_LEG_RIGHT_1'],
            'MOTOR_LEG_RIGHT_2': cls.__constants['MOTOR_LEG_RIGHT_2'],
            'MOTOR_LEG_RIGHT_3': cls.__constants['MOTOR_LEG_RIGHT_3'],
            'MOTOR_LEG_RIGHT_4': cls.__constants['MOTOR_LEG_RIGHT_4'],
            'MOTOR_LEG_RIGHT_5': cls.__constants['MOTOR_LEG_RIGHT_5'],
            'MOTOR_LEG_RIGHT_6': cls.__constants['MOTOR_LEG_RIGHT_6'],
        }

    @property
    def MOTOR_HEAD_1(self):
        """Message constant 'MOTOR_HEAD_1'."""
        return Metaclass_MotorName.__constants['MOTOR_HEAD_1']

    @property
    def MOTOR_HEAD_2(self):
        """Message constant 'MOTOR_HEAD_2'."""
        return Metaclass_MotorName.__constants['MOTOR_HEAD_2']

    @property
    def MOTOR_HEAD_3(self):
        """Message constant 'MOTOR_HEAD_3'."""
        return Metaclass_MotorName.__constants['MOTOR_HEAD_3']

    @property
    def MOTOR_ARM_LEFT_1(self):
        """Message constant 'MOTOR_ARM_LEFT_1'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_LEFT_1']

    @property
    def MOTOR_ARM_LEFT_2(self):
        """Message constant 'MOTOR_ARM_LEFT_2'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_LEFT_2']

    @property
    def MOTOR_ARM_LEFT_3(self):
        """Message constant 'MOTOR_ARM_LEFT_3'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_LEFT_3']

    @property
    def MOTOR_ARM_LEFT_4(self):
        """Message constant 'MOTOR_ARM_LEFT_4'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_LEFT_4']

    @property
    def MOTOR_ARM_LEFT_5(self):
        """Message constant 'MOTOR_ARM_LEFT_5'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_LEFT_5']

    @property
    def MOTOR_ARM_LEFT_6(self):
        """Message constant 'MOTOR_ARM_LEFT_6'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_LEFT_6']

    @property
    def MOTOR_ARM_LEFT_7(self):
        """Message constant 'MOTOR_ARM_LEFT_7'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_LEFT_7']

    @property
    def MOTOR_ARM_RIGHT_1(self):
        """Message constant 'MOTOR_ARM_RIGHT_1'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_RIGHT_1']

    @property
    def MOTOR_ARM_RIGHT_2(self):
        """Message constant 'MOTOR_ARM_RIGHT_2'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_RIGHT_2']

    @property
    def MOTOR_ARM_RIGHT_3(self):
        """Message constant 'MOTOR_ARM_RIGHT_3'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_RIGHT_3']

    @property
    def MOTOR_ARM_RIGHT_4(self):
        """Message constant 'MOTOR_ARM_RIGHT_4'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_RIGHT_4']

    @property
    def MOTOR_ARM_RIGHT_5(self):
        """Message constant 'MOTOR_ARM_RIGHT_5'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_RIGHT_5']

    @property
    def MOTOR_ARM_RIGHT_6(self):
        """Message constant 'MOTOR_ARM_RIGHT_6'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_RIGHT_6']

    @property
    def MOTOR_ARM_RIGHT_7(self):
        """Message constant 'MOTOR_ARM_RIGHT_7'."""
        return Metaclass_MotorName.__constants['MOTOR_ARM_RIGHT_7']

    @property
    def MOTOR_WAIST_1(self):
        """Message constant 'MOTOR_WAIST_1'."""
        return Metaclass_MotorName.__constants['MOTOR_WAIST_1']

    @property
    def MOTOR_WAIST_2(self):
        """Message constant 'MOTOR_WAIST_2'."""
        return Metaclass_MotorName.__constants['MOTOR_WAIST_2']

    @property
    def MOTOR_WAIST_3(self):
        """Message constant 'MOTOR_WAIST_3'."""
        return Metaclass_MotorName.__constants['MOTOR_WAIST_3']

    @property
    def MOTOR_LEG_LEFT_1(self):
        """Message constant 'MOTOR_LEG_LEFT_1'."""
        return Metaclass_MotorName.__constants['MOTOR_LEG_LEFT_1']

    @property
    def MOTOR_LEG_LEFT_2(self):
        """Message constant 'MOTOR_LEG_LEFT_2'."""
        return Metaclass_MotorName.__constants['MOTOR_LEG_LEFT_2']

    @property
    def MOTOR_LEG_LEFT_3(self):
        """Message constant 'MOTOR_LEG_LEFT_3'."""
        return Metaclass_MotorName.__constants['MOTOR_LEG_LEFT_3']

    @property
    def MOTOR_LEG_LEFT_4(self):
        """Message constant 'MOTOR_LEG_LEFT_4'."""
        return Metaclass_MotorName.__constants['MOTOR_LEG_LEFT_4']

    @property
    def MOTOR_LEG_LEFT_5(self):
        """Message constant 'MOTOR_LEG_LEFT_5'."""
        return Metaclass_MotorName.__constants['MOTOR_LEG_LEFT_5']

    @property
    def MOTOR_LEG_LEFT_6(self):
        """Message constant 'MOTOR_LEG_LEFT_6'."""
        return Metaclass_MotorName.__constants['MOTOR_LEG_LEFT_6']

    @property
    def MOTOR_LEG_RIGHT_1(self):
        """Message constant 'MOTOR_LEG_RIGHT_1'."""
        return Metaclass_MotorName.__constants['MOTOR_LEG_RIGHT_1']

    @property
    def MOTOR_LEG_RIGHT_2(self):
        """Message constant 'MOTOR_LEG_RIGHT_2'."""
        return Metaclass_MotorName.__constants['MOTOR_LEG_RIGHT_2']

    @property
    def MOTOR_LEG_RIGHT_3(self):
        """Message constant 'MOTOR_LEG_RIGHT_3'."""
        return Metaclass_MotorName.__constants['MOTOR_LEG_RIGHT_3']

    @property
    def MOTOR_LEG_RIGHT_4(self):
        """Message constant 'MOTOR_LEG_RIGHT_4'."""
        return Metaclass_MotorName.__constants['MOTOR_LEG_RIGHT_4']

    @property
    def MOTOR_LEG_RIGHT_5(self):
        """Message constant 'MOTOR_LEG_RIGHT_5'."""
        return Metaclass_MotorName.__constants['MOTOR_LEG_RIGHT_5']

    @property
    def MOTOR_LEG_RIGHT_6(self):
        """Message constant 'MOTOR_LEG_RIGHT_6'."""
        return Metaclass_MotorName.__constants['MOTOR_LEG_RIGHT_6']


class MotorName(metaclass=Metaclass_MotorName):
    """
    Message class 'MotorName'.

    Constants:
      MOTOR_HEAD_1
      MOTOR_HEAD_2
      MOTOR_HEAD_3
      MOTOR_ARM_LEFT_1
      MOTOR_ARM_LEFT_2
      MOTOR_ARM_LEFT_3
      MOTOR_ARM_LEFT_4
      MOTOR_ARM_LEFT_5
      MOTOR_ARM_LEFT_6
      MOTOR_ARM_LEFT_7
      MOTOR_ARM_RIGHT_1
      MOTOR_ARM_RIGHT_2
      MOTOR_ARM_RIGHT_3
      MOTOR_ARM_RIGHT_4
      MOTOR_ARM_RIGHT_5
      MOTOR_ARM_RIGHT_6
      MOTOR_ARM_RIGHT_7
      MOTOR_WAIST_1
      MOTOR_WAIST_2
      MOTOR_WAIST_3
      MOTOR_LEG_LEFT_1
      MOTOR_LEG_LEFT_2
      MOTOR_LEG_LEFT_3
      MOTOR_LEG_LEFT_4
      MOTOR_LEG_LEFT_5
      MOTOR_LEG_LEFT_6
      MOTOR_LEG_RIGHT_1
      MOTOR_LEG_RIGHT_2
      MOTOR_LEG_RIGHT_3
      MOTOR_LEG_RIGHT_4
      MOTOR_LEG_RIGHT_5
      MOTOR_LEG_RIGHT_6
    """

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)
