"""autogenerated by genpy from drrobot_clinicrobot/p2pCmd.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class p2pCmd(genpy.Message):
  _md5sum = "1c12145f741c94dc887f31111234d185"
  _type = "drrobot_clinicrobot/p2pCmd"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# P2P go message

float32 TargetX
float32 TargetY
float32 TargetDir    #in degrees
float32 ForwardSpeed
uint8 CAEnable       # 0 is collision avoidance disabled, 1 is enabled
uint8 ReverseDrive   # 0 is reverse drive disabled, 1 is enabled


"""
  __slots__ = ['TargetX','TargetY','TargetDir','ForwardSpeed','CAEnable','ReverseDrive']
  _slot_types = ['float32','float32','float32','float32','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       TargetX,TargetY,TargetDir,ForwardSpeed,CAEnable,ReverseDrive

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(p2pCmd, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.TargetX is None:
        self.TargetX = 0.
      if self.TargetY is None:
        self.TargetY = 0.
      if self.TargetDir is None:
        self.TargetDir = 0.
      if self.ForwardSpeed is None:
        self.ForwardSpeed = 0.
      if self.CAEnable is None:
        self.CAEnable = 0
      if self.ReverseDrive is None:
        self.ReverseDrive = 0
    else:
      self.TargetX = 0.
      self.TargetY = 0.
      self.TargetDir = 0.
      self.ForwardSpeed = 0.
      self.CAEnable = 0
      self.ReverseDrive = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_4f2B.pack(_x.TargetX, _x.TargetY, _x.TargetDir, _x.ForwardSpeed, _x.CAEnable, _x.ReverseDrive))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 18
      (_x.TargetX, _x.TargetY, _x.TargetDir, _x.ForwardSpeed, _x.CAEnable, _x.ReverseDrive,) = _struct_4f2B.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_4f2B.pack(_x.TargetX, _x.TargetY, _x.TargetDir, _x.ForwardSpeed, _x.CAEnable, _x.ReverseDrive))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 18
      (_x.TargetX, _x.TargetY, _x.TargetDir, _x.ForwardSpeed, _x.CAEnable, _x.ReverseDrive,) = _struct_4f2B.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4f2B = struct.Struct("<4f2B")
