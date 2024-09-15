# generated from rosidl_generator_py/resource/_idl.py.em
# with input from param_interfaces:srv/SetControllerGain.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetControllerGain_Request(type):
    """Metaclass of message 'SetControllerGain_Request'."""

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
            module = import_type_support('param_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'param_interfaces.srv.SetControllerGain_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_controller_gain__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_controller_gain__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_controller_gain__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_controller_gain__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_controller_gain__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetControllerGain_Request(metaclass=Metaclass_SetControllerGain_Request):
    """Message class 'SetControllerGain_Request'."""

    __slots__ = [
        '_kp_d',
        '_kp_theta',
    ]

    _fields_and_field_types = {
        'kp_d': 'double',
        'kp_theta': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.kp_d = kwargs.get('kp_d', float())
        self.kp_theta = kwargs.get('kp_theta', float())

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
        if self.kp_d != other.kp_d:
            return False
        if self.kp_theta != other.kp_theta:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def kp_d(self):
        """Message field 'kp_d'."""
        return self._kp_d

    @kp_d.setter
    def kp_d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kp_d' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kp_d' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kp_d = value

    @builtins.property
    def kp_theta(self):
        """Message field 'kp_theta'."""
        return self._kp_theta

    @kp_theta.setter
    def kp_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kp_theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kp_theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kp_theta = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetControllerGain_Response(type):
    """Metaclass of message 'SetControllerGain_Response'."""

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
            module = import_type_support('param_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'param_interfaces.srv.SetControllerGain_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_controller_gain__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_controller_gain__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_controller_gain__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_controller_gain__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_controller_gain__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetControllerGain_Response(metaclass=Metaclass_SetControllerGain_Response):
    """Message class 'SetControllerGain_Response'."""

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


class Metaclass_SetControllerGain(type):
    """Metaclass of service 'SetControllerGain'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('param_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'param_interfaces.srv.SetControllerGain')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_controller_gain

            from param_interfaces.srv import _set_controller_gain
            if _set_controller_gain.Metaclass_SetControllerGain_Request._TYPE_SUPPORT is None:
                _set_controller_gain.Metaclass_SetControllerGain_Request.__import_type_support__()
            if _set_controller_gain.Metaclass_SetControllerGain_Response._TYPE_SUPPORT is None:
                _set_controller_gain.Metaclass_SetControllerGain_Response.__import_type_support__()


class SetControllerGain(metaclass=Metaclass_SetControllerGain):
    from param_interfaces.srv._set_controller_gain import SetControllerGain_Request as Request
    from param_interfaces.srv._set_controller_gain import SetControllerGain_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
