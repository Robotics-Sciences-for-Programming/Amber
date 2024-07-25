# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amber_b1_interfaces:srv/Mode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Mode_Request(type):
    """Metaclass of message 'Mode_Request'."""

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
            module = import_type_support('amber_b1_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'amber_b1_interfaces.srv.Mode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mode__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Mode_Request(metaclass=Metaclass_Mode_Request):
    """Message class 'Mode_Request'."""

    __slots__ = [
        '_mode',
        '_joint_no',
        '_zero_position',
        '_gripper_control',
        '_gripper_mode',
        '_gripper_force',
        '_restart',
        '_motor_state',
    ]

    _fields_and_field_types = {
        'mode': 'int64',
        'joint_no': 'int64',
        'zero_position': 'int64',
        'gripper_control': 'int32',
        'gripper_mode': 'int32',
        'gripper_force': 'int32',
        'restart': 'int32',
        'motor_state': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', int())
        self.joint_no = kwargs.get('joint_no', int())
        self.zero_position = kwargs.get('zero_position', int())
        self.gripper_control = kwargs.get('gripper_control', int())
        self.gripper_mode = kwargs.get('gripper_mode', int())
        self.gripper_force = kwargs.get('gripper_force', int())
        self.restart = kwargs.get('restart', int())
        self.motor_state = kwargs.get('motor_state', int())

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
        if self.mode != other.mode:
            return False
        if self.joint_no != other.joint_no:
            return False
        if self.zero_position != other.zero_position:
            return False
        if self.gripper_control != other.gripper_control:
            return False
        if self.gripper_mode != other.gripper_mode:
            return False
        if self.gripper_force != other.gripper_force:
            return False
        if self.restart != other.restart:
            return False
        if self.motor_state != other.motor_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'mode' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._mode = value

    @property
    def joint_no(self):
        """Message field 'joint_no'."""
        return self._joint_no

    @joint_no.setter
    def joint_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'joint_no' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'joint_no' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._joint_no = value

    @property
    def zero_position(self):
        """Message field 'zero_position'."""
        return self._zero_position

    @zero_position.setter
    def zero_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'zero_position' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'zero_position' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._zero_position = value

    @property
    def gripper_control(self):
        """Message field 'gripper_control'."""
        return self._gripper_control

    @gripper_control.setter
    def gripper_control(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_control' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gripper_control' field must be an integer in [-2147483648, 2147483647]"
        self._gripper_control = value

    @property
    def gripper_mode(self):
        """Message field 'gripper_mode'."""
        return self._gripper_mode

    @gripper_mode.setter
    def gripper_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gripper_mode' field must be an integer in [-2147483648, 2147483647]"
        self._gripper_mode = value

    @property
    def gripper_force(self):
        """Message field 'gripper_force'."""
        return self._gripper_force

    @gripper_force.setter
    def gripper_force(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_force' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gripper_force' field must be an integer in [-2147483648, 2147483647]"
        self._gripper_force = value

    @property
    def restart(self):
        """Message field 'restart'."""
        return self._restart

    @restart.setter
    def restart(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'restart' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'restart' field must be an integer in [-2147483648, 2147483647]"
        self._restart = value

    @property
    def motor_state(self):
        """Message field 'motor_state'."""
        return self._motor_state

    @motor_state.setter
    def motor_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor_state' field must be an integer in [-2147483648, 2147483647]"
        self._motor_state = value


# Import statements for member types

# Member 'motor_state'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Mode_Response(type):
    """Metaclass of message 'Mode_Response'."""

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
            module = import_type_support('amber_b1_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'amber_b1_interfaces.srv.Mode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mode__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Mode_Response(metaclass=Metaclass_Mode_Response):
    """Message class 'Mode_Response'."""

    __slots__ = [
        '_ack',
        '_motor_state',
    ]

    _fields_and_field_types = {
        'ack': 'int64',
        'motor_state': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ack = kwargs.get('ack', int())
        self.motor_state = array.array('B', kwargs.get('motor_state', []))

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
        if self.ack != other.ack:
            return False
        if self.motor_state != other.motor_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ack(self):
        """Message field 'ack'."""
        return self._ack

    @ack.setter
    def ack(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ack' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'ack' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._ack = value

    @property
    def motor_state(self):
        """Message field 'motor_state'."""
        return self._motor_state

    @motor_state.setter
    def motor_state(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'motor_state' array.array() must have the type code of 'B'"
            self._motor_state = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'motor_state' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._motor_state = array.array('B', value)


class Metaclass_Mode(type):
    """Metaclass of service 'Mode'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('amber_b1_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'amber_b1_interfaces.srv.Mode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__mode

            from amber_b1_interfaces.srv import _mode
            if _mode.Metaclass_Mode_Request._TYPE_SUPPORT is None:
                _mode.Metaclass_Mode_Request.__import_type_support__()
            if _mode.Metaclass_Mode_Response._TYPE_SUPPORT is None:
                _mode.Metaclass_Mode_Response.__import_type_support__()


class Mode(metaclass=Metaclass_Mode):
    from amber_b1_interfaces.srv._mode import Mode_Request as Request
    from amber_b1_interfaces.srv._mode import Mode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
