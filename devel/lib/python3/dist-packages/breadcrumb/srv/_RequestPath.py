# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from breadcrumb/RequestPathRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class RequestPathRequest(genpy.Message):
  _md5sum = "ad6f4eea34a193d38008f1d4053cce66"
  _type = "breadcrumb/RequestPathRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Calculates a path between two points
# Request:
#   start:
#     - Starting point on the grid (in meters)
#     - Z value is ignored
#     - In the grids parent frame
#   end:
#     - Ending point on the grid (in meters)
#     - Z value is ignored
#     - In the grids parent frame

geometry_msgs/Point start
geometry_msgs/Point end


================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z
"""
  __slots__ = ['start','end']
  _slot_types = ['geometry_msgs/Point','geometry_msgs/Point']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       start,end

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RequestPathRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.start is None:
        self.start = geometry_msgs.msg.Point()
      if self.end is None:
        self.end = geometry_msgs.msg.Point()
    else:
      self.start = geometry_msgs.msg.Point()
      self.end = geometry_msgs.msg.Point()

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
      buff.write(_get_struct_6d().pack(_x.start.x, _x.start.y, _x.start.z, _x.end.x, _x.end.y, _x.end.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.start is None:
        self.start = geometry_msgs.msg.Point()
      if self.end is None:
        self.end = geometry_msgs.msg.Point()
      end = 0
      _x = self
      start = end
      end += 48
      (_x.start.x, _x.start.y, _x.start.z, _x.end.x, _x.end.y, _x.end.z,) = _get_struct_6d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_6d().pack(_x.start.x, _x.start.y, _x.start.z, _x.end.x, _x.end.y, _x.end.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.start is None:
        self.start = geometry_msgs.msg.Point()
      if self.end is None:
        self.end = geometry_msgs.msg.Point()
      end = 0
      _x = self
      start = end
      end += 48
      (_x.start.x, _x.start.y, _x.start.z, _x.end.x, _x.end.y, _x.end.z,) = _get_struct_6d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6d = None
def _get_struct_6d():
    global _struct_6d
    if _struct_6d is None:
        _struct_6d = struct.Struct("<6d")
    return _struct_6d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from breadcrumb/RequestPathResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class RequestPathResponse(genpy.Message):
  _md5sum = "ce73eaa73efb05398295fe135230d380"
  _type = "breadcrumb/RequestPathResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
# Response:
#   path:
#     - List of poses returned in the grid's parent frame
#     - Oriented facing towards the next point
#     - Empty if no path was found
#   path_sparse:
#     - List of poses returned in the grid's parent frame
#     - Oriented facing towards the next point
#     - Empty if no path was found
#     - Acts the same as "path" but removes intermediate steps if they form a straight line

geometry_msgs/PoseArray path
geometry_msgs/PoseArray path_sparse


================================================================================
MSG: geometry_msgs/PoseArray
# An array of poses with a header for global reference.

Header header

Pose[] poses

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['path','path_sparse']
  _slot_types = ['geometry_msgs/PoseArray','geometry_msgs/PoseArray']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       path,path_sparse

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RequestPathResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.path is None:
        self.path = geometry_msgs.msg.PoseArray()
      if self.path_sparse is None:
        self.path_sparse = geometry_msgs.msg.PoseArray()
    else:
      self.path = geometry_msgs.msg.PoseArray()
      self.path_sparse = geometry_msgs.msg.PoseArray()

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
      buff.write(_get_struct_3I().pack(_x.path.header.seq, _x.path.header.stamp.secs, _x.path.header.stamp.nsecs))
      _x = self.path.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.path.poses)
      buff.write(_struct_I.pack(length))
      for val1 in self.path.poses:
        _v1 = val1.position
        _x = _v1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v2 = val1.orientation
        _x = _v2
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      _x = self
      buff.write(_get_struct_3I().pack(_x.path_sparse.header.seq, _x.path_sparse.header.stamp.secs, _x.path_sparse.header.stamp.nsecs))
      _x = self.path_sparse.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.path_sparse.poses)
      buff.write(_struct_I.pack(length))
      for val1 in self.path_sparse.poses:
        _v3 = val1.position
        _x = _v3
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v4 = val1.orientation
        _x = _v4
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.path is None:
        self.path = geometry_msgs.msg.PoseArray()
      if self.path_sparse is None:
        self.path_sparse = geometry_msgs.msg.PoseArray()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.path.header.seq, _x.path.header.stamp.secs, _x.path.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.path.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.path.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.path.poses = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v5 = val1.position
        _x = _v5
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v6 = val1.orientation
        _x = _v6
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.path.poses.append(val1)
      _x = self
      start = end
      end += 12
      (_x.path_sparse.header.seq, _x.path_sparse.header.stamp.secs, _x.path_sparse.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.path_sparse.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.path_sparse.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.path_sparse.poses = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v7 = val1.position
        _x = _v7
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v8 = val1.orientation
        _x = _v8
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.path_sparse.poses.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.path.header.seq, _x.path.header.stamp.secs, _x.path.header.stamp.nsecs))
      _x = self.path.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.path.poses)
      buff.write(_struct_I.pack(length))
      for val1 in self.path.poses:
        _v9 = val1.position
        _x = _v9
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v10 = val1.orientation
        _x = _v10
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      _x = self
      buff.write(_get_struct_3I().pack(_x.path_sparse.header.seq, _x.path_sparse.header.stamp.secs, _x.path_sparse.header.stamp.nsecs))
      _x = self.path_sparse.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.path_sparse.poses)
      buff.write(_struct_I.pack(length))
      for val1 in self.path_sparse.poses:
        _v11 = val1.position
        _x = _v11
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v12 = val1.orientation
        _x = _v12
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.path is None:
        self.path = geometry_msgs.msg.PoseArray()
      if self.path_sparse is None:
        self.path_sparse = geometry_msgs.msg.PoseArray()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.path.header.seq, _x.path.header.stamp.secs, _x.path.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.path.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.path.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.path.poses = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v13 = val1.position
        _x = _v13
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v14 = val1.orientation
        _x = _v14
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.path.poses.append(val1)
      _x = self
      start = end
      end += 12
      (_x.path_sparse.header.seq, _x.path_sparse.header.stamp.secs, _x.path_sparse.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.path_sparse.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.path_sparse.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.path_sparse.poses = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v15 = val1.position
        _x = _v15
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v16 = val1.orientation
        _x = _v16
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.path_sparse.poses.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
class RequestPath(object):
  _type          = 'breadcrumb/RequestPath'
  _md5sum = '01fd153fe570128ee975daa9976a93a4'
  _request_class  = RequestPathRequest
  _response_class = RequestPathResponse
