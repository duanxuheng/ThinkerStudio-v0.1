# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lyre_msgs:srv/PlayText.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlayText_Request(type):
    """Metaclass of message 'PlayText_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SERVICE_NAME': '/audio_play/play_text',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lyre_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lyre_msgs.srv.PlayText_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__play_text__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__play_text__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__play_text__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__play_text__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__play_text__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SERVICE_NAME': cls.__constants['SERVICE_NAME'],
        }

    @property
    def SERVICE_NAME(self):
        """Message constant 'SERVICE_NAME'."""
        return Metaclass_PlayText_Request.__constants['SERVICE_NAME']


class PlayText_Request(metaclass=Metaclass_PlayText_Request):
    """
    Message class 'PlayText_Request'.

    Constants:
      SERVICE_NAME
    """

    __slots__ = [
        '_sid',
        '_seq',
        '_last',
        '_force',
        '_text',
        '_token',
        '_output',
    ]

    _fields_and_field_types = {
        'sid': 'string',
        'seq': 'uint32',
        'last': 'boolean',
        'force': 'boolean',
        'text': 'string',
        'token': 'string',
        'output': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sid = kwargs.get('sid', str())
        self.seq = kwargs.get('seq', int())
        self.last = kwargs.get('last', bool())
        self.force = kwargs.get('force', bool())
        self.text = kwargs.get('text', str())
        self.token = kwargs.get('token', str())
        self.output = kwargs.get('output', str())

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
        if self.sid != other.sid:
            return False
        if self.seq != other.seq:
            return False
        if self.last != other.last:
            return False
        if self.force != other.force:
            return False
        if self.text != other.text:
            return False
        if self.token != other.token:
            return False
        if self.output != other.output:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sid(self):
        """Message field 'sid'."""
        return self._sid

    @sid.setter
    def sid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sid' field must be of type 'str'"
        self._sid = value

    @builtins.property
    def seq(self):
        """Message field 'seq'."""
        return self._seq

    @seq.setter
    def seq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seq' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'seq' field must be an unsigned integer in [0, 4294967295]"
        self._seq = value

    @builtins.property
    def last(self):
        """Message field 'last'."""
        return self._last

    @last.setter
    def last(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'last' field must be of type 'bool'"
        self._last = value

    @builtins.property
    def force(self):
        """Message field 'force'."""
        return self._force

    @force.setter
    def force(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'force' field must be of type 'bool'"
        self._force = value

    @builtins.property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value

    @builtins.property
    def token(self):
        """Message field 'token'."""
        return self._token

    @token.setter
    def token(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'token' field must be of type 'str'"
        self._token = value

    @builtins.property
    def output(self):
        """Message field 'output'."""
        return self._output

    @output.setter
    def output(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'output' field must be of type 'str'"
        self._output = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PlayText_Response(type):
    """Metaclass of message 'PlayText_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CODE_OK': 0,
        'CODE_INVALID_PARAMS': 1,
        'CODE_FAILED': -1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lyre_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lyre_msgs.srv.PlayText_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__play_text__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__play_text__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__play_text__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__play_text__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__play_text__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CODE_OK': cls.__constants['CODE_OK'],
            'CODE_INVALID_PARAMS': cls.__constants['CODE_INVALID_PARAMS'],
            'CODE_FAILED': cls.__constants['CODE_FAILED'],
        }

    @property
    def CODE_OK(self):
        """Message constant 'CODE_OK'."""
        return Metaclass_PlayText_Response.__constants['CODE_OK']

    @property
    def CODE_INVALID_PARAMS(self):
        """Message constant 'CODE_INVALID_PARAMS'."""
        return Metaclass_PlayText_Response.__constants['CODE_INVALID_PARAMS']

    @property
    def CODE_FAILED(self):
        """Message constant 'CODE_FAILED'."""
        return Metaclass_PlayText_Response.__constants['CODE_FAILED']


class PlayText_Response(metaclass=Metaclass_PlayText_Response):
    """
    Message class 'PlayText_Response'.

    Constants:
      CODE_OK
      CODE_INVALID_PARAMS
      CODE_FAILED
    """

    __slots__ = [
        '_sid',
        '_code',
        '_message',
    ]

    _fields_and_field_types = {
        'sid': 'string',
        'code': 'int8',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sid = kwargs.get('sid', str())
        self.code = kwargs.get('code', int())
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
        if self.sid != other.sid:
            return False
        if self.code != other.code:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sid(self):
        """Message field 'sid'."""
        return self._sid

    @sid.setter
    def sid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sid' field must be of type 'str'"
        self._sid = value

    @builtins.property
    def code(self):
        """Message field 'code'."""
        return self._code

    @code.setter
    def code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'code' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'code' field must be an integer in [-128, 127]"
        self._code = value

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


class Metaclass_PlayText(type):
    """Metaclass of service 'PlayText'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lyre_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lyre_msgs.srv.PlayText')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__play_text

            from lyre_msgs.srv import _play_text
            if _play_text.Metaclass_PlayText_Request._TYPE_SUPPORT is None:
                _play_text.Metaclass_PlayText_Request.__import_type_support__()
            if _play_text.Metaclass_PlayText_Response._TYPE_SUPPORT is None:
                _play_text.Metaclass_PlayText_Response.__import_type_support__()


class PlayText(metaclass=Metaclass_PlayText):
    from lyre_msgs.srv._play_text import PlayText_Request as Request
    from lyre_msgs.srv._play_text import PlayText_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
