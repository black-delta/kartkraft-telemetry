// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace KartKraft
{

using global::System;
using global::FlatBuffers;

/// Dash data for displaying state of current local/followed player
public struct Dashboard : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static Dashboard GetRootAsDashboard(ByteBuffer _bb) { return GetRootAsDashboard(_bb, new Dashboard()); }
  public static Dashboard GetRootAsDashboard(ByteBuffer _bb, Dashboard obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p.bb_pos = _i; __p.bb = _bb; }
  public Dashboard __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public float Speed { get { int o = __p.__offset(4); return o != 0 ? __p.bb.GetFloat(o + __p.bb_pos) : (float)0.0f; } }
  public float Rpm { get { int o = __p.__offset(6); return o != 0 ? __p.bb.GetFloat(o + __p.bb_pos) : (float)0.0f; } }
  public float Steer { get { int o = __p.__offset(8); return o != 0 ? __p.bb.GetFloat(o + __p.bb_pos) : (float)0.0f; } }
  public float Throttle { get { int o = __p.__offset(10); return o != 0 ? __p.bb.GetFloat(o + __p.bb_pos) : (float)0.0f; } }
  public float Brake { get { int o = __p.__offset(12); return o != 0 ? __p.bb.GetFloat(o + __p.bb_pos) : (float)0.0f; } }
  public sbyte Gear { get { int o = __p.__offset(14); return o != 0 ? __p.bb.GetSbyte(o + __p.bb_pos) : (sbyte)0; } }
  public sbyte Pos { get { int o = __p.__offset(16); return o != 0 ? __p.bb.GetSbyte(o + __p.bb_pos) : (sbyte)0; } }
  public float BestLap { get { int o = __p.__offset(18); return o != 0 ? __p.bb.GetFloat(o + __p.bb_pos) : (float)0.0f; } }
  public float CurrentLap { get { int o = __p.__offset(20); return o != 0 ? __p.bb.GetFloat(o + __p.bb_pos) : (float)0.0f; } }
  public float LastLap { get { int o = __p.__offset(22); return o != 0 ? __p.bb.GetFloat(o + __p.bb_pos) : (float)0.0f; } }
  public ushort LapCount { get { int o = __p.__offset(24); return o != 0 ? __p.bb.GetUshort(o + __p.bb_pos) : (ushort)0; } }

  public static Offset<Dashboard> CreateDashboard(FlatBufferBuilder builder,
      float speed = 0.0f,
      float rpm = 0.0f,
      float steer = 0.0f,
      float throttle = 0.0f,
      float brake = 0.0f,
      sbyte gear = 0,
      sbyte pos = 0,
      float bestLap = 0.0f,
      float currentLap = 0.0f,
      float lastLap = 0.0f,
      ushort lapCount = 0) {
    builder.StartObject(11);
    Dashboard.AddLastLap(builder, lastLap);
    Dashboard.AddCurrentLap(builder, currentLap);
    Dashboard.AddBestLap(builder, bestLap);
    Dashboard.AddBrake(builder, brake);
    Dashboard.AddThrottle(builder, throttle);
    Dashboard.AddSteer(builder, steer);
    Dashboard.AddRpm(builder, rpm);
    Dashboard.AddSpeed(builder, speed);
    Dashboard.AddLapCount(builder, lapCount);
    Dashboard.AddPos(builder, pos);
    Dashboard.AddGear(builder, gear);
    return Dashboard.EndDashboard(builder);
  }

  public static void StartDashboard(FlatBufferBuilder builder) { builder.StartObject(11); }
  public static void AddSpeed(FlatBufferBuilder builder, float speed) { builder.AddFloat(0, speed, 0.0f); }
  public static void AddRpm(FlatBufferBuilder builder, float rpm) { builder.AddFloat(1, rpm, 0.0f); }
  public static void AddSteer(FlatBufferBuilder builder, float steer) { builder.AddFloat(2, steer, 0.0f); }
  public static void AddThrottle(FlatBufferBuilder builder, float throttle) { builder.AddFloat(3, throttle, 0.0f); }
  public static void AddBrake(FlatBufferBuilder builder, float brake) { builder.AddFloat(4, brake, 0.0f); }
  public static void AddGear(FlatBufferBuilder builder, sbyte gear) { builder.AddSbyte(5, gear, 0); }
  public static void AddPos(FlatBufferBuilder builder, sbyte pos) { builder.AddSbyte(6, pos, 0); }
  public static void AddBestLap(FlatBufferBuilder builder, float bestLap) { builder.AddFloat(7, bestLap, 0.0f); }
  public static void AddCurrentLap(FlatBufferBuilder builder, float currentLap) { builder.AddFloat(8, currentLap, 0.0f); }
  public static void AddLastLap(FlatBufferBuilder builder, float lastLap) { builder.AddFloat(9, lastLap, 0.0f); }
  public static void AddLapCount(FlatBufferBuilder builder, ushort lapCount) { builder.AddUshort(10, lapCount, 0); }
  public static Offset<Dashboard> EndDashboard(FlatBufferBuilder builder) {
    int o = builder.EndObject();
    return new Offset<Dashboard>(o);
  }
};


}
