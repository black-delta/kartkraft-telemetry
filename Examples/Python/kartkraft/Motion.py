# automatically generated by the FlatBuffers compiler, do not modify

# namespace: KartKraft

import flatbuffers

# /// Motion data of local player for driving hardware motion simulators
class Motion(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsMotion(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = Motion()
        x.Init(buf, n + offset)
        return x

    # Motion
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # Motion
    def Pitch(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def Roll(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def Yaw(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def AccelerationX(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def AccelerationY(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(12))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def AccelerationZ(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(14))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def TractionLoss(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(16))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def VelocityX(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(18))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def VelocityY(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(20))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def VelocityZ(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(22))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def AngularVelocityX(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(24))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def AngularVelocityY(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(26))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def AngularVelocityZ(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(28))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def Wheels(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(30))
        if o != 0:
            x = self._tab.Vector(o)
            x += flatbuffers.number_types.UOffsetTFlags.py_type(j) * 4
            x = self._tab.Indirect(x)
            from .Wheel import Wheel
            obj = Wheel()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # Motion
    def WheelsLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(30))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # Motion
    def WorldVelocityX(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(32))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def WorldVelocityY(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(34))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

    # Motion
    def WorldVelocityZ(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(36))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float32Flags, o + self._tab.Pos)
        return 0.0

def MotionStart(builder): builder.StartObject(17)
def MotionAddPitch(builder, pitch): builder.PrependFloat32Slot(0, pitch, 0.0)
def MotionAddRoll(builder, roll): builder.PrependFloat32Slot(1, roll, 0.0)
def MotionAddYaw(builder, yaw): builder.PrependFloat32Slot(2, yaw, 0.0)
def MotionAddAccelerationX(builder, accelerationX): builder.PrependFloat32Slot(3, accelerationX, 0.0)
def MotionAddAccelerationY(builder, accelerationY): builder.PrependFloat32Slot(4, accelerationY, 0.0)
def MotionAddAccelerationZ(builder, accelerationZ): builder.PrependFloat32Slot(5, accelerationZ, 0.0)
def MotionAddTractionLoss(builder, tractionLoss): builder.PrependFloat32Slot(6, tractionLoss, 0.0)
def MotionAddVelocityX(builder, velocityX): builder.PrependFloat32Slot(7, velocityX, 0.0)
def MotionAddVelocityY(builder, velocityY): builder.PrependFloat32Slot(8, velocityY, 0.0)
def MotionAddVelocityZ(builder, velocityZ): builder.PrependFloat32Slot(9, velocityZ, 0.0)
def MotionAddAngularVelocityX(builder, angularVelocityX): builder.PrependFloat32Slot(10, angularVelocityX, 0.0)
def MotionAddAngularVelocityY(builder, angularVelocityY): builder.PrependFloat32Slot(11, angularVelocityY, 0.0)
def MotionAddAngularVelocityZ(builder, angularVelocityZ): builder.PrependFloat32Slot(12, angularVelocityZ, 0.0)
def MotionAddWheels(builder, wheels): builder.PrependUOffsetTRelativeSlot(13, flatbuffers.number_types.UOffsetTFlags.py_type(wheels), 0)
def MotionStartWheelsVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def MotionAddWorldVelocityX(builder, worldVelocityX): builder.PrependFloat32Slot(14, worldVelocityX, 0.0)
def MotionAddWorldVelocityY(builder, worldVelocityY): builder.PrependFloat32Slot(15, worldVelocityY, 0.0)
def MotionAddWorldVelocityZ(builder, worldVelocityZ): builder.PrependFloat32Slot(16, worldVelocityZ, 0.0)
def MotionEnd(builder): return builder.EndObject()
