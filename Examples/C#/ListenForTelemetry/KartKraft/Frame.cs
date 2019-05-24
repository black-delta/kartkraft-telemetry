// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace KartKraft
{

using global::System;
using global::FlatBuffers;

/// Root object from which all data can be extracted. You must check if motion, dash etc exist before using as not every packet will include all data.
public struct Frame : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static Frame GetRootAsFrame(ByteBuffer _bb) { return GetRootAsFrame(_bb, new Frame()); }
  public static Frame GetRootAsFrame(ByteBuffer _bb, Frame obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public static bool FrameBufferHasIdentifier(ByteBuffer _bb) { return Table.__has_identifier(_bb, "KKFB"); }
  public void __init(int _i, ByteBuffer _bb) { __p.bb_pos = _i; __p.bb = _bb; }
  public Frame __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public float Timestamp { get { int o = __p.__offset(4); return o != 0 ? __p.bb.GetFloat(o + __p.bb_pos) : (float)0.0f; } }
  public Motion? Motion { get { int o = __p.__offset(6); return o != 0 ? (Motion?)(new Motion()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public Dashboard? Dash { get { int o = __p.__offset(8); return o != 0 ? (Dashboard?)(new Dashboard()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public Session? Session { get { int o = __p.__offset(10); return o != 0 ? (Session?)(new Session()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public VehicleConfig? VehicleConfig { get { int o = __p.__offset(12); return o != 0 ? (VehicleConfig?)(new VehicleConfig()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }
  public TrackConfig? TrackConfig { get { int o = __p.__offset(14); return o != 0 ? (TrackConfig?)(new TrackConfig()).__assign(__p.__indirect(o + __p.bb_pos), __p.bb) : null; } }

  public static Offset<Frame> CreateFrame(FlatBufferBuilder builder,
      float timestamp = 0.0f,
      Offset<Motion> motionOffset = default(Offset<Motion>),
      Offset<Dashboard> dashOffset = default(Offset<Dashboard>),
      Offset<Session> sessionOffset = default(Offset<Session>),
      Offset<VehicleConfig> vehicleConfigOffset = default(Offset<VehicleConfig>),
      Offset<TrackConfig> trackConfigOffset = default(Offset<TrackConfig>)) {
    builder.StartObject(6);
    Frame.AddTrackConfig(builder, trackConfigOffset);
    Frame.AddVehicleConfig(builder, vehicleConfigOffset);
    Frame.AddSession(builder, sessionOffset);
    Frame.AddDash(builder, dashOffset);
    Frame.AddMotion(builder, motionOffset);
    Frame.AddTimestamp(builder, timestamp);
    return Frame.EndFrame(builder);
  }

  public static void StartFrame(FlatBufferBuilder builder) { builder.StartObject(6); }
  public static void AddTimestamp(FlatBufferBuilder builder, float timestamp) { builder.AddFloat(0, timestamp, 0.0f); }
  public static void AddMotion(FlatBufferBuilder builder, Offset<Motion> motionOffset) { builder.AddOffset(1, motionOffset.Value, 0); }
  public static void AddDash(FlatBufferBuilder builder, Offset<Dashboard> dashOffset) { builder.AddOffset(2, dashOffset.Value, 0); }
  public static void AddSession(FlatBufferBuilder builder, Offset<Session> sessionOffset) { builder.AddOffset(3, sessionOffset.Value, 0); }
  public static void AddVehicleConfig(FlatBufferBuilder builder, Offset<VehicleConfig> vehicleConfigOffset) { builder.AddOffset(4, vehicleConfigOffset.Value, 0); }
  public static void AddTrackConfig(FlatBufferBuilder builder, Offset<TrackConfig> trackConfigOffset) { builder.AddOffset(5, trackConfigOffset.Value, 0); }
  public static Offset<Frame> EndFrame(FlatBufferBuilder builder) {
    int o = builder.EndObject();
    return new Offset<Frame>(o);
  }
  public static void FinishFrameBuffer(FlatBufferBuilder builder, Offset<Frame> offset) { builder.Finish(offset.Value, "KKFB"); }
  public static void FinishSizePrefixedFrameBuffer(FlatBufferBuilder builder, Offset<Frame> offset) { builder.FinishSizePrefixed(offset.Value, "KKFB"); }
};


}
