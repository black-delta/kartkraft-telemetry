// automatically generated by the FlatBuffers compiler, do not modify

package KartKraft;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
/**
 * Dash data for displaying state of current local/followed player
 */
public final class Dashboard extends Table {
  public static Dashboard getRootAsDashboard(ByteBuffer _bb) { return getRootAsDashboard(_bb, new Dashboard()); }
  public static Dashboard getRootAsDashboard(ByteBuffer _bb, Dashboard obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; }
  public Dashboard __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public byte version() { int o = __offset(4); return o != 0 ? bb.get(o + bb_pos) : 1; }
  public float speed() { int o = __offset(6); return o != 0 ? bb.getFloat(o + bb_pos) : 0.0f; }
  public float rpm() { int o = __offset(8); return o != 0 ? bb.getFloat(o + bb_pos) : 0.0f; }
  public float steer() { int o = __offset(10); return o != 0 ? bb.getFloat(o + bb_pos) : 0.0f; }
  public float throttle() { int o = __offset(12); return o != 0 ? bb.getFloat(o + bb_pos) : 0.0f; }
  public float brake() { int o = __offset(14); return o != 0 ? bb.getFloat(o + bb_pos) : 0.0f; }
  public byte gear() { int o = __offset(16); return o != 0 ? bb.get(o + bb_pos) : 0; }
  public byte pos() { int o = __offset(18); return o != 0 ? bb.get(o + bb_pos) : 0; }
  public float bestLap() { int o = __offset(20); return o != 0 ? bb.getFloat(o + bb_pos) : 0.0f; }

  public static int createDashboard(FlatBufferBuilder builder,
      byte version,
      float speed,
      float rpm,
      float steer,
      float throttle,
      float brake,
      byte gear,
      byte pos,
      float bestLap) {
    builder.startObject(9);
    Dashboard.addBestLap(builder, bestLap);
    Dashboard.addBrake(builder, brake);
    Dashboard.addThrottle(builder, throttle);
    Dashboard.addSteer(builder, steer);
    Dashboard.addRpm(builder, rpm);
    Dashboard.addSpeed(builder, speed);
    Dashboard.addPos(builder, pos);
    Dashboard.addGear(builder, gear);
    Dashboard.addVersion(builder, version);
    return Dashboard.endDashboard(builder);
  }

  public static void startDashboard(FlatBufferBuilder builder) { builder.startObject(9); }
  public static void addVersion(FlatBufferBuilder builder, byte version) { builder.addByte(0, version, 1); }
  public static void addSpeed(FlatBufferBuilder builder, float speed) { builder.addFloat(1, speed, 0.0f); }
  public static void addRpm(FlatBufferBuilder builder, float rpm) { builder.addFloat(2, rpm, 0.0f); }
  public static void addSteer(FlatBufferBuilder builder, float steer) { builder.addFloat(3, steer, 0.0f); }
  public static void addThrottle(FlatBufferBuilder builder, float throttle) { builder.addFloat(4, throttle, 0.0f); }
  public static void addBrake(FlatBufferBuilder builder, float brake) { builder.addFloat(5, brake, 0.0f); }
  public static void addGear(FlatBufferBuilder builder, byte gear) { builder.addByte(6, gear, 0); }
  public static void addPos(FlatBufferBuilder builder, byte pos) { builder.addByte(7, pos, 0); }
  public static void addBestLap(FlatBufferBuilder builder, float bestLap) { builder.addFloat(8, bestLap, 0.0f); }
  public static int endDashboard(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
}
