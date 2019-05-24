// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FRAME_KARTKRAFT_H_
#define FLATBUFFERS_GENERATED_FRAME_KARTKRAFT_H_

#include "flatbuffers/flatbuffers.h"

namespace KartKraft {

struct Color;

struct Wheel;

struct Motion;

struct Dashboard;

struct Vehicle;

struct Session;

struct VehicleConfig;

struct TrackConfig;

struct Frame;

/// State of vehicle
enum VehicleState {
  VehicleState_Idle = 0,
  VehicleState_Pits = 1,
  VehicleState_PitGrid = 2,
  VehicleState_Outlap = 3,
  VehicleState_RollingStart = 4,
  VehicleState_FlyingStart = 5,
  VehicleState_StartGrid = 6,
  VehicleState_Racing = 7,
  VehicleState_Retired = 8,
  VehicleState_Finished = 9,
  VehicleState_MIN = VehicleState_Idle,
  VehicleState_MAX = VehicleState_Finished
};

inline const VehicleState (&EnumValuesVehicleState())[10] {
  static const VehicleState values[] = {
    VehicleState_Idle,
    VehicleState_Pits,
    VehicleState_PitGrid,
    VehicleState_Outlap,
    VehicleState_RollingStart,
    VehicleState_FlyingStart,
    VehicleState_StartGrid,
    VehicleState_Racing,
    VehicleState_Retired,
    VehicleState_Finished
  };
  return values;
}

inline const char * const *EnumNamesVehicleState() {
  static const char * const names[] = {
    "Idle",
    "Pits",
    "PitGrid",
    "Outlap",
    "RollingStart",
    "FlyingStart",
    "StartGrid",
    "Racing",
    "Retired",
    "Finished",
    nullptr
  };
  return names;
}

inline const char *EnumNameVehicleState(VehicleState e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesVehicleState()[index];
}

enum Surface {
  Surface_None = 0,
  Surface_Asphalt = 1,
  Surface_Grass = 2,
  Surface_Gravel = 3,
  Surface_Kerb = 4,
  Surface_Sand = 5,
  Surface_Tyre = 6,
  Surface_MIN = Surface_None,
  Surface_MAX = Surface_Tyre
};

inline const Surface (&EnumValuesSurface())[7] {
  static const Surface values[] = {
    Surface_None,
    Surface_Asphalt,
    Surface_Grass,
    Surface_Gravel,
    Surface_Kerb,
    Surface_Sand,
    Surface_Tyre
  };
  return values;
}

inline const char * const *EnumNamesSurface() {
  static const char * const names[] = {
    "None",
    "Asphalt",
    "Grass",
    "Gravel",
    "Kerb",
    "Sand",
    "Tyre",
    nullptr
  };
  return names;
}

inline const char *EnumNameSurface(Surface e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesSurface()[index];
}

/// Useful generic color struct 
FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(1) Color FLATBUFFERS_FINAL_CLASS {
 private:
  int8_t r_;
  int8_t g_;
  int8_t b_;

 public:
  Color() {
    memset(this, 0, sizeof(Color));
  }
  Color(int8_t _r, int8_t _g, int8_t _b)
      : r_(flatbuffers::EndianScalar(_r)),
        g_(flatbuffers::EndianScalar(_g)),
        b_(flatbuffers::EndianScalar(_b)) {
  }
  int8_t r() const {
    return flatbuffers::EndianScalar(r_);
  }
  int8_t g() const {
    return flatbuffers::EndianScalar(g_);
  }
  int8_t b() const {
    return flatbuffers::EndianScalar(b_);
  }
};
FLATBUFFERS_STRUCT_END(Color, 3);

struct Wheel FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SURFACE = 4,
    VT_SLIPANGLE = 6
  };
  Surface surface() const {
    return static_cast<Surface>(GetField<uint8_t>(VT_SURFACE, 0));
  }
  float slipAngle() const {
    return GetField<float>(VT_SLIPANGLE, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SURFACE) &&
           VerifyField<float>(verifier, VT_SLIPANGLE) &&
           verifier.EndTable();
  }
};

struct WheelBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_surface(Surface surface) {
    fbb_.AddElement<uint8_t>(Wheel::VT_SURFACE, static_cast<uint8_t>(surface), 0);
  }
  void add_slipAngle(float slipAngle) {
    fbb_.AddElement<float>(Wheel::VT_SLIPANGLE, slipAngle, 0.0f);
  }
  explicit WheelBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  WheelBuilder &operator=(const WheelBuilder &);
  flatbuffers::Offset<Wheel> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Wheel>(end);
    return o;
  }
};

inline flatbuffers::Offset<Wheel> CreateWheel(
    flatbuffers::FlatBufferBuilder &_fbb,
    Surface surface = Surface_None,
    float slipAngle = 0.0f) {
  WheelBuilder builder_(_fbb);
  builder_.add_slipAngle(slipAngle);
  builder_.add_surface(surface);
  return builder_.Finish();
}

/// Motion data of local player for driving hardware motion simulators
struct Motion FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_PITCH = 4,
    VT_ROLL = 6,
    VT_YAW = 8,
    VT_ACCELERATIONX = 10,
    VT_ACCELERATIONY = 12,
    VT_ACCELERATIONZ = 14,
    VT_TRACTIONLOSS = 16,
    VT_VELOCITYX = 18,
    VT_VELOCITYY = 20,
    VT_VELOCITYZ = 22,
    VT_ANGULARVELOCITYX = 24,
    VT_ANGULARVELOCITYY = 26,
    VT_ANGULARVELOCITYZ = 28,
    VT_WHEELS = 30,
    VT_WORLDVELOCITYX = 32,
    VT_WORLDVELOCITYY = 34,
    VT_WORLDVELOCITYZ = 36
  };
  float pitch() const {
    return GetField<float>(VT_PITCH, 0.0f);
  }
  float roll() const {
    return GetField<float>(VT_ROLL, 0.0f);
  }
  float yaw() const {
    return GetField<float>(VT_YAW, 0.0f);
  }
  float accelerationX() const {
    return GetField<float>(VT_ACCELERATIONX, 0.0f);
  }
  float accelerationY() const {
    return GetField<float>(VT_ACCELERATIONY, 0.0f);
  }
  float accelerationZ() const {
    return GetField<float>(VT_ACCELERATIONZ, 0.0f);
  }
  float tractionLoss() const {
    return GetField<float>(VT_TRACTIONLOSS, 0.0f);
  }
  float velocityX() const {
    return GetField<float>(VT_VELOCITYX, 0.0f);
  }
  float velocityY() const {
    return GetField<float>(VT_VELOCITYY, 0.0f);
  }
  float velocityZ() const {
    return GetField<float>(VT_VELOCITYZ, 0.0f);
  }
  float angularVelocityX() const {
    return GetField<float>(VT_ANGULARVELOCITYX, 0.0f);
  }
  float angularVelocityY() const {
    return GetField<float>(VT_ANGULARVELOCITYY, 0.0f);
  }
  float angularVelocityZ() const {
    return GetField<float>(VT_ANGULARVELOCITYZ, 0.0f);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Wheel>> *wheels() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Wheel>> *>(VT_WHEELS);
  }
  float worldVelocityX() const {
    return GetField<float>(VT_WORLDVELOCITYX, 0.0f);
  }
  float worldVelocityY() const {
    return GetField<float>(VT_WORLDVELOCITYY, 0.0f);
  }
  float worldVelocityZ() const {
    return GetField<float>(VT_WORLDVELOCITYZ, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_PITCH) &&
           VerifyField<float>(verifier, VT_ROLL) &&
           VerifyField<float>(verifier, VT_YAW) &&
           VerifyField<float>(verifier, VT_ACCELERATIONX) &&
           VerifyField<float>(verifier, VT_ACCELERATIONY) &&
           VerifyField<float>(verifier, VT_ACCELERATIONZ) &&
           VerifyField<float>(verifier, VT_TRACTIONLOSS) &&
           VerifyField<float>(verifier, VT_VELOCITYX) &&
           VerifyField<float>(verifier, VT_VELOCITYY) &&
           VerifyField<float>(verifier, VT_VELOCITYZ) &&
           VerifyField<float>(verifier, VT_ANGULARVELOCITYX) &&
           VerifyField<float>(verifier, VT_ANGULARVELOCITYY) &&
           VerifyField<float>(verifier, VT_ANGULARVELOCITYZ) &&
           VerifyOffset(verifier, VT_WHEELS) &&
           verifier.VerifyVector(wheels()) &&
           verifier.VerifyVectorOfTables(wheels()) &&
           VerifyField<float>(verifier, VT_WORLDVELOCITYX) &&
           VerifyField<float>(verifier, VT_WORLDVELOCITYY) &&
           VerifyField<float>(verifier, VT_WORLDVELOCITYZ) &&
           verifier.EndTable();
  }
};

struct MotionBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_pitch(float pitch) {
    fbb_.AddElement<float>(Motion::VT_PITCH, pitch, 0.0f);
  }
  void add_roll(float roll) {
    fbb_.AddElement<float>(Motion::VT_ROLL, roll, 0.0f);
  }
  void add_yaw(float yaw) {
    fbb_.AddElement<float>(Motion::VT_YAW, yaw, 0.0f);
  }
  void add_accelerationX(float accelerationX) {
    fbb_.AddElement<float>(Motion::VT_ACCELERATIONX, accelerationX, 0.0f);
  }
  void add_accelerationY(float accelerationY) {
    fbb_.AddElement<float>(Motion::VT_ACCELERATIONY, accelerationY, 0.0f);
  }
  void add_accelerationZ(float accelerationZ) {
    fbb_.AddElement<float>(Motion::VT_ACCELERATIONZ, accelerationZ, 0.0f);
  }
  void add_tractionLoss(float tractionLoss) {
    fbb_.AddElement<float>(Motion::VT_TRACTIONLOSS, tractionLoss, 0.0f);
  }
  void add_velocityX(float velocityX) {
    fbb_.AddElement<float>(Motion::VT_VELOCITYX, velocityX, 0.0f);
  }
  void add_velocityY(float velocityY) {
    fbb_.AddElement<float>(Motion::VT_VELOCITYY, velocityY, 0.0f);
  }
  void add_velocityZ(float velocityZ) {
    fbb_.AddElement<float>(Motion::VT_VELOCITYZ, velocityZ, 0.0f);
  }
  void add_angularVelocityX(float angularVelocityX) {
    fbb_.AddElement<float>(Motion::VT_ANGULARVELOCITYX, angularVelocityX, 0.0f);
  }
  void add_angularVelocityY(float angularVelocityY) {
    fbb_.AddElement<float>(Motion::VT_ANGULARVELOCITYY, angularVelocityY, 0.0f);
  }
  void add_angularVelocityZ(float angularVelocityZ) {
    fbb_.AddElement<float>(Motion::VT_ANGULARVELOCITYZ, angularVelocityZ, 0.0f);
  }
  void add_wheels(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Wheel>>> wheels) {
    fbb_.AddOffset(Motion::VT_WHEELS, wheels);
  }
  void add_worldVelocityX(float worldVelocityX) {
    fbb_.AddElement<float>(Motion::VT_WORLDVELOCITYX, worldVelocityX, 0.0f);
  }
  void add_worldVelocityY(float worldVelocityY) {
    fbb_.AddElement<float>(Motion::VT_WORLDVELOCITYY, worldVelocityY, 0.0f);
  }
  void add_worldVelocityZ(float worldVelocityZ) {
    fbb_.AddElement<float>(Motion::VT_WORLDVELOCITYZ, worldVelocityZ, 0.0f);
  }
  explicit MotionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  MotionBuilder &operator=(const MotionBuilder &);
  flatbuffers::Offset<Motion> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Motion>(end);
    return o;
  }
};

inline flatbuffers::Offset<Motion> CreateMotion(
    flatbuffers::FlatBufferBuilder &_fbb,
    float pitch = 0.0f,
    float roll = 0.0f,
    float yaw = 0.0f,
    float accelerationX = 0.0f,
    float accelerationY = 0.0f,
    float accelerationZ = 0.0f,
    float tractionLoss = 0.0f,
    float velocityX = 0.0f,
    float velocityY = 0.0f,
    float velocityZ = 0.0f,
    float angularVelocityX = 0.0f,
    float angularVelocityY = 0.0f,
    float angularVelocityZ = 0.0f,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Wheel>>> wheels = 0,
    float worldVelocityX = 0.0f,
    float worldVelocityY = 0.0f,
    float worldVelocityZ = 0.0f) {
  MotionBuilder builder_(_fbb);
  builder_.add_worldVelocityZ(worldVelocityZ);
  builder_.add_worldVelocityY(worldVelocityY);
  builder_.add_worldVelocityX(worldVelocityX);
  builder_.add_wheels(wheels);
  builder_.add_angularVelocityZ(angularVelocityZ);
  builder_.add_angularVelocityY(angularVelocityY);
  builder_.add_angularVelocityX(angularVelocityX);
  builder_.add_velocityZ(velocityZ);
  builder_.add_velocityY(velocityY);
  builder_.add_velocityX(velocityX);
  builder_.add_tractionLoss(tractionLoss);
  builder_.add_accelerationZ(accelerationZ);
  builder_.add_accelerationY(accelerationY);
  builder_.add_accelerationX(accelerationX);
  builder_.add_yaw(yaw);
  builder_.add_roll(roll);
  builder_.add_pitch(pitch);
  return builder_.Finish();
}

inline flatbuffers::Offset<Motion> CreateMotionDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    float pitch = 0.0f,
    float roll = 0.0f,
    float yaw = 0.0f,
    float accelerationX = 0.0f,
    float accelerationY = 0.0f,
    float accelerationZ = 0.0f,
    float tractionLoss = 0.0f,
    float velocityX = 0.0f,
    float velocityY = 0.0f,
    float velocityZ = 0.0f,
    float angularVelocityX = 0.0f,
    float angularVelocityY = 0.0f,
    float angularVelocityZ = 0.0f,
    const std::vector<flatbuffers::Offset<Wheel>> *wheels = nullptr,
    float worldVelocityX = 0.0f,
    float worldVelocityY = 0.0f,
    float worldVelocityZ = 0.0f) {
  return KartKraft::CreateMotion(
      _fbb,
      pitch,
      roll,
      yaw,
      accelerationX,
      accelerationY,
      accelerationZ,
      tractionLoss,
      velocityX,
      velocityY,
      velocityZ,
      angularVelocityX,
      angularVelocityY,
      angularVelocityZ,
      wheels ? _fbb.CreateVector<flatbuffers::Offset<Wheel>>(*wheels) : 0,
      worldVelocityX,
      worldVelocityY,
      worldVelocityZ);
}

/// Dash data for displaying state of current local/followed player
struct Dashboard FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SPEED = 4,
    VT_RPM = 6,
    VT_STEER = 8,
    VT_THROTTLE = 10,
    VT_BRAKE = 12,
    VT_GEAR = 14,
    VT_POS = 16,
    VT_BESTLAP = 18,
    VT_CURRENTLAP = 20,
    VT_LASTLAP = 22,
    VT_LAPCOUNT = 24,
    VT_SECTORCOUNT = 26
  };
  float speed() const {
    return GetField<float>(VT_SPEED, 0.0f);
  }
  float rpm() const {
    return GetField<float>(VT_RPM, 0.0f);
  }
  float steer() const {
    return GetField<float>(VT_STEER, 0.0f);
  }
  float throttle() const {
    return GetField<float>(VT_THROTTLE, 0.0f);
  }
  float brake() const {
    return GetField<float>(VT_BRAKE, 0.0f);
  }
  int8_t gear() const {
    return GetField<int8_t>(VT_GEAR, 0);
  }
  int8_t pos() const {
    return GetField<int8_t>(VT_POS, 0);
  }
  float bestLap() const {
    return GetField<float>(VT_BESTLAP, 0.0f);
  }
  float currentLap() const {
    return GetField<float>(VT_CURRENTLAP, 0.0f);
  }
  float lastLap() const {
    return GetField<float>(VT_LASTLAP, 0.0f);
  }
  uint16_t lapCount() const {
    return GetField<uint16_t>(VT_LAPCOUNT, 0);
  }
  uint16_t sectorCount() const {
    return GetField<uint16_t>(VT_SECTORCOUNT, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_SPEED) &&
           VerifyField<float>(verifier, VT_RPM) &&
           VerifyField<float>(verifier, VT_STEER) &&
           VerifyField<float>(verifier, VT_THROTTLE) &&
           VerifyField<float>(verifier, VT_BRAKE) &&
           VerifyField<int8_t>(verifier, VT_GEAR) &&
           VerifyField<int8_t>(verifier, VT_POS) &&
           VerifyField<float>(verifier, VT_BESTLAP) &&
           VerifyField<float>(verifier, VT_CURRENTLAP) &&
           VerifyField<float>(verifier, VT_LASTLAP) &&
           VerifyField<uint16_t>(verifier, VT_LAPCOUNT) &&
           VerifyField<uint16_t>(verifier, VT_SECTORCOUNT) &&
           verifier.EndTable();
  }
};

struct DashboardBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_speed(float speed) {
    fbb_.AddElement<float>(Dashboard::VT_SPEED, speed, 0.0f);
  }
  void add_rpm(float rpm) {
    fbb_.AddElement<float>(Dashboard::VT_RPM, rpm, 0.0f);
  }
  void add_steer(float steer) {
    fbb_.AddElement<float>(Dashboard::VT_STEER, steer, 0.0f);
  }
  void add_throttle(float throttle) {
    fbb_.AddElement<float>(Dashboard::VT_THROTTLE, throttle, 0.0f);
  }
  void add_brake(float brake) {
    fbb_.AddElement<float>(Dashboard::VT_BRAKE, brake, 0.0f);
  }
  void add_gear(int8_t gear) {
    fbb_.AddElement<int8_t>(Dashboard::VT_GEAR, gear, 0);
  }
  void add_pos(int8_t pos) {
    fbb_.AddElement<int8_t>(Dashboard::VT_POS, pos, 0);
  }
  void add_bestLap(float bestLap) {
    fbb_.AddElement<float>(Dashboard::VT_BESTLAP, bestLap, 0.0f);
  }
  void add_currentLap(float currentLap) {
    fbb_.AddElement<float>(Dashboard::VT_CURRENTLAP, currentLap, 0.0f);
  }
  void add_lastLap(float lastLap) {
    fbb_.AddElement<float>(Dashboard::VT_LASTLAP, lastLap, 0.0f);
  }
  void add_lapCount(uint16_t lapCount) {
    fbb_.AddElement<uint16_t>(Dashboard::VT_LAPCOUNT, lapCount, 0);
  }
  void add_sectorCount(uint16_t sectorCount) {
    fbb_.AddElement<uint16_t>(Dashboard::VT_SECTORCOUNT, sectorCount, 0);
  }
  explicit DashboardBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  DashboardBuilder &operator=(const DashboardBuilder &);
  flatbuffers::Offset<Dashboard> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Dashboard>(end);
    return o;
  }
};

inline flatbuffers::Offset<Dashboard> CreateDashboard(
    flatbuffers::FlatBufferBuilder &_fbb,
    float speed = 0.0f,
    float rpm = 0.0f,
    float steer = 0.0f,
    float throttle = 0.0f,
    float brake = 0.0f,
    int8_t gear = 0,
    int8_t pos = 0,
    float bestLap = 0.0f,
    float currentLap = 0.0f,
    float lastLap = 0.0f,
    uint16_t lapCount = 0,
    uint16_t sectorCount = 0) {
  DashboardBuilder builder_(_fbb);
  builder_.add_lastLap(lastLap);
  builder_.add_currentLap(currentLap);
  builder_.add_bestLap(bestLap);
  builder_.add_brake(brake);
  builder_.add_throttle(throttle);
  builder_.add_steer(steer);
  builder_.add_rpm(rpm);
  builder_.add_speed(speed);
  builder_.add_sectorCount(sectorCount);
  builder_.add_lapCount(lapCount);
  builder_.add_pos(pos);
  builder_.add_gear(gear);
  return builder_.Finish();
}

/// Basic vehicle data for live timing. e.g. trackmap
struct Vehicle FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_STATE = 4,
    VT_POSX = 6,
    VT_POSY = 8,
    VT_POSZ = 10,
    VT_YAW = 12,
    VT_SESSIONPOS = 14,
    VT_COLOR = 16,
    VT_NORMALISEDTRACKPOS = 18
  };
  VehicleState state() const {
    return static_cast<VehicleState>(GetField<uint8_t>(VT_STATE, 0));
  }
  float posX() const {
    return GetField<float>(VT_POSX, 0.0f);
  }
  float posY() const {
    return GetField<float>(VT_POSY, 0.0f);
  }
  float posZ() const {
    return GetField<float>(VT_POSZ, 0.0f);
  }
  float yaw() const {
    return GetField<float>(VT_YAW, 0.0f);
  }
  int32_t sessionPos() const {
    return GetField<int32_t>(VT_SESSIONPOS, 0);
  }
  const Color *color() const {
    return GetStruct<const Color *>(VT_COLOR);
  }
  float normalisedTrackPos() const {
    return GetField<float>(VT_NORMALISEDTRACKPOS, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_STATE) &&
           VerifyField<float>(verifier, VT_POSX) &&
           VerifyField<float>(verifier, VT_POSY) &&
           VerifyField<float>(verifier, VT_POSZ) &&
           VerifyField<float>(verifier, VT_YAW) &&
           VerifyField<int32_t>(verifier, VT_SESSIONPOS) &&
           VerifyField<Color>(verifier, VT_COLOR) &&
           VerifyField<float>(verifier, VT_NORMALISEDTRACKPOS) &&
           verifier.EndTable();
  }
};

struct VehicleBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_state(VehicleState state) {
    fbb_.AddElement<uint8_t>(Vehicle::VT_STATE, static_cast<uint8_t>(state), 0);
  }
  void add_posX(float posX) {
    fbb_.AddElement<float>(Vehicle::VT_POSX, posX, 0.0f);
  }
  void add_posY(float posY) {
    fbb_.AddElement<float>(Vehicle::VT_POSY, posY, 0.0f);
  }
  void add_posZ(float posZ) {
    fbb_.AddElement<float>(Vehicle::VT_POSZ, posZ, 0.0f);
  }
  void add_yaw(float yaw) {
    fbb_.AddElement<float>(Vehicle::VT_YAW, yaw, 0.0f);
  }
  void add_sessionPos(int32_t sessionPos) {
    fbb_.AddElement<int32_t>(Vehicle::VT_SESSIONPOS, sessionPos, 0);
  }
  void add_color(const Color *color) {
    fbb_.AddStruct(Vehicle::VT_COLOR, color);
  }
  void add_normalisedTrackPos(float normalisedTrackPos) {
    fbb_.AddElement<float>(Vehicle::VT_NORMALISEDTRACKPOS, normalisedTrackPos, 0.0f);
  }
  explicit VehicleBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  VehicleBuilder &operator=(const VehicleBuilder &);
  flatbuffers::Offset<Vehicle> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Vehicle>(end);
    return o;
  }
};

inline flatbuffers::Offset<Vehicle> CreateVehicle(
    flatbuffers::FlatBufferBuilder &_fbb,
    VehicleState state = VehicleState_Idle,
    float posX = 0.0f,
    float posY = 0.0f,
    float posZ = 0.0f,
    float yaw = 0.0f,
    int32_t sessionPos = 0,
    const Color *color = 0,
    float normalisedTrackPos = 0.0f) {
  VehicleBuilder builder_(_fbb);
  builder_.add_normalisedTrackPos(normalisedTrackPos);
  builder_.add_color(color);
  builder_.add_sessionPos(sessionPos);
  builder_.add_yaw(yaw);
  builder_.add_posZ(posZ);
  builder_.add_posY(posY);
  builder_.add_posX(posX);
  builder_.add_state(state);
  return builder_.Finish();
}

/// Session data
struct Session FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_TOTALTIME = 4,
    VT_TIMELEFT = 6,
    VT_TOTALLAPS = 8,
    VT_VEHICLES = 10
  };
  int32_t totalTime() const {
    return GetField<int32_t>(VT_TOTALTIME, 0);
  }
  int32_t timeLeft() const {
    return GetField<int32_t>(VT_TIMELEFT, 0);
  }
  int32_t totalLaps() const {
    return GetField<int32_t>(VT_TOTALLAPS, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Vehicle>> *vehicles() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Vehicle>> *>(VT_VEHICLES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_TOTALTIME) &&
           VerifyField<int32_t>(verifier, VT_TIMELEFT) &&
           VerifyField<int32_t>(verifier, VT_TOTALLAPS) &&
           VerifyOffset(verifier, VT_VEHICLES) &&
           verifier.VerifyVector(vehicles()) &&
           verifier.VerifyVectorOfTables(vehicles()) &&
           verifier.EndTable();
  }
};

struct SessionBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_totalTime(int32_t totalTime) {
    fbb_.AddElement<int32_t>(Session::VT_TOTALTIME, totalTime, 0);
  }
  void add_timeLeft(int32_t timeLeft) {
    fbb_.AddElement<int32_t>(Session::VT_TIMELEFT, timeLeft, 0);
  }
  void add_totalLaps(int32_t totalLaps) {
    fbb_.AddElement<int32_t>(Session::VT_TOTALLAPS, totalLaps, 0);
  }
  void add_vehicles(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Vehicle>>> vehicles) {
    fbb_.AddOffset(Session::VT_VEHICLES, vehicles);
  }
  explicit SessionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SessionBuilder &operator=(const SessionBuilder &);
  flatbuffers::Offset<Session> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Session>(end);
    return o;
  }
};

inline flatbuffers::Offset<Session> CreateSession(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t totalTime = 0,
    int32_t timeLeft = 0,
    int32_t totalLaps = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Vehicle>>> vehicles = 0) {
  SessionBuilder builder_(_fbb);
  builder_.add_vehicles(vehicles);
  builder_.add_totalLaps(totalLaps);
  builder_.add_timeLeft(timeLeft);
  builder_.add_totalTime(totalTime);
  return builder_.Finish();
}

inline flatbuffers::Offset<Session> CreateSessionDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t totalTime = 0,
    int32_t timeLeft = 0,
    int32_t totalLaps = 0,
    const std::vector<flatbuffers::Offset<Vehicle>> *vehicles = nullptr) {
  return KartKraft::CreateSession(
      _fbb,
      totalTime,
      timeLeft,
      totalLaps,
      vehicles ? _fbb.CreateVector<flatbuffers::Offset<Vehicle>>(*vehicles) : 0);
}

/// Data associated with a vehicle which doesn't change dynamically during a race. e.g. class, num gears, driver name etc
struct VehicleConfig FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_RPMLIMIT = 4,
    VT_RPMMAX = 6,
    VT_GEARMAX = 8
  };
  float rpmLimit() const {
    return GetField<float>(VT_RPMLIMIT, 0.0f);
  }
  float rpmMax() const {
    return GetField<float>(VT_RPMMAX, 0.0f);
  }
  int8_t gearMax() const {
    return GetField<int8_t>(VT_GEARMAX, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_RPMLIMIT) &&
           VerifyField<float>(verifier, VT_RPMMAX) &&
           VerifyField<int8_t>(verifier, VT_GEARMAX) &&
           verifier.EndTable();
  }
};

struct VehicleConfigBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_rpmLimit(float rpmLimit) {
    fbb_.AddElement<float>(VehicleConfig::VT_RPMLIMIT, rpmLimit, 0.0f);
  }
  void add_rpmMax(float rpmMax) {
    fbb_.AddElement<float>(VehicleConfig::VT_RPMMAX, rpmMax, 0.0f);
  }
  void add_gearMax(int8_t gearMax) {
    fbb_.AddElement<int8_t>(VehicleConfig::VT_GEARMAX, gearMax, 0);
  }
  explicit VehicleConfigBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  VehicleConfigBuilder &operator=(const VehicleConfigBuilder &);
  flatbuffers::Offset<VehicleConfig> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<VehicleConfig>(end);
    return o;
  }
};

inline flatbuffers::Offset<VehicleConfig> CreateVehicleConfig(
    flatbuffers::FlatBufferBuilder &_fbb,
    float rpmLimit = 0.0f,
    float rpmMax = 0.0f,
    int8_t gearMax = 0) {
  VehicleConfigBuilder builder_(_fbb);
  builder_.add_rpmMax(rpmMax);
  builder_.add_rpmLimit(rpmLimit);
  builder_.add_gearMax(gearMax);
  return builder_.Finish();
}

struct TrackConfig FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_NAME = 4,
    VT_NUMSECTORS = 6
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  uint8_t numSectors() const {
    return GetField<uint8_t>(VT_NUMSECTORS, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<uint8_t>(verifier, VT_NUMSECTORS) &&
           verifier.EndTable();
  }
};

struct TrackConfigBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(TrackConfig::VT_NAME, name);
  }
  void add_numSectors(uint8_t numSectors) {
    fbb_.AddElement<uint8_t>(TrackConfig::VT_NUMSECTORS, numSectors, 0);
  }
  explicit TrackConfigBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TrackConfigBuilder &operator=(const TrackConfigBuilder &);
  flatbuffers::Offset<TrackConfig> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TrackConfig>(end);
    return o;
  }
};

inline flatbuffers::Offset<TrackConfig> CreateTrackConfig(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    uint8_t numSectors = 0) {
  TrackConfigBuilder builder_(_fbb);
  builder_.add_name(name);
  builder_.add_numSectors(numSectors);
  return builder_.Finish();
}

inline flatbuffers::Offset<TrackConfig> CreateTrackConfigDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    uint8_t numSectors = 0) {
  return KartKraft::CreateTrackConfig(
      _fbb,
      name ? _fbb.CreateString(name) : 0,
      numSectors);
}

/// Root object from which all data can be extracted. You must check if motion, dash etc exist before using as not every packet will include all data.
struct Frame FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_TIMESTAMP = 4,
    VT_MOTION = 6,
    VT_DASH = 8,
    VT_SESSION = 10,
    VT_VEHICLECONFIG = 12,
    VT_TRACKCONFIG = 14
  };
  float timestamp() const {
    return GetField<float>(VT_TIMESTAMP, 0.0f);
  }
  const Motion *motion() const {
    return GetPointer<const Motion *>(VT_MOTION);
  }
  const Dashboard *dash() const {
    return GetPointer<const Dashboard *>(VT_DASH);
  }
  const Session *session() const {
    return GetPointer<const Session *>(VT_SESSION);
  }
  const VehicleConfig *vehicleConfig() const {
    return GetPointer<const VehicleConfig *>(VT_VEHICLECONFIG);
  }
  const TrackConfig *trackConfig() const {
    return GetPointer<const TrackConfig *>(VT_TRACKCONFIG);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_TIMESTAMP) &&
           VerifyOffset(verifier, VT_MOTION) &&
           verifier.VerifyTable(motion()) &&
           VerifyOffset(verifier, VT_DASH) &&
           verifier.VerifyTable(dash()) &&
           VerifyOffset(verifier, VT_SESSION) &&
           verifier.VerifyTable(session()) &&
           VerifyOffset(verifier, VT_VEHICLECONFIG) &&
           verifier.VerifyTable(vehicleConfig()) &&
           VerifyOffset(verifier, VT_TRACKCONFIG) &&
           verifier.VerifyTable(trackConfig()) &&
           verifier.EndTable();
  }
};

struct FrameBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_timestamp(float timestamp) {
    fbb_.AddElement<float>(Frame::VT_TIMESTAMP, timestamp, 0.0f);
  }
  void add_motion(flatbuffers::Offset<Motion> motion) {
    fbb_.AddOffset(Frame::VT_MOTION, motion);
  }
  void add_dash(flatbuffers::Offset<Dashboard> dash) {
    fbb_.AddOffset(Frame::VT_DASH, dash);
  }
  void add_session(flatbuffers::Offset<Session> session) {
    fbb_.AddOffset(Frame::VT_SESSION, session);
  }
  void add_vehicleConfig(flatbuffers::Offset<VehicleConfig> vehicleConfig) {
    fbb_.AddOffset(Frame::VT_VEHICLECONFIG, vehicleConfig);
  }
  void add_trackConfig(flatbuffers::Offset<TrackConfig> trackConfig) {
    fbb_.AddOffset(Frame::VT_TRACKCONFIG, trackConfig);
  }
  explicit FrameBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FrameBuilder &operator=(const FrameBuilder &);
  flatbuffers::Offset<Frame> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Frame>(end);
    return o;
  }
};

inline flatbuffers::Offset<Frame> CreateFrame(
    flatbuffers::FlatBufferBuilder &_fbb,
    float timestamp = 0.0f,
    flatbuffers::Offset<Motion> motion = 0,
    flatbuffers::Offset<Dashboard> dash = 0,
    flatbuffers::Offset<Session> session = 0,
    flatbuffers::Offset<VehicleConfig> vehicleConfig = 0,
    flatbuffers::Offset<TrackConfig> trackConfig = 0) {
  FrameBuilder builder_(_fbb);
  builder_.add_trackConfig(trackConfig);
  builder_.add_vehicleConfig(vehicleConfig);
  builder_.add_session(session);
  builder_.add_dash(dash);
  builder_.add_motion(motion);
  builder_.add_timestamp(timestamp);
  return builder_.Finish();
}

inline const KartKraft::Frame *GetFrame(const void *buf) {
  return flatbuffers::GetRoot<KartKraft::Frame>(buf);
}

inline const KartKraft::Frame *GetSizePrefixedFrame(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<KartKraft::Frame>(buf);
}

inline const char *FrameIdentifier() {
  return "KKFB";
}

inline bool FrameBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, FrameIdentifier());
}

inline bool VerifyFrameBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<KartKraft::Frame>(FrameIdentifier());
}

inline bool VerifySizePrefixedFrameBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<KartKraft::Frame>(FrameIdentifier());
}

inline void FinishFrameBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<KartKraft::Frame> root) {
  fbb.Finish(root, FrameIdentifier());
}

inline void FinishSizePrefixedFrameBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<KartKraft::Frame> root) {
  fbb.FinishSizePrefixed(root, FrameIdentifier());
}

}  // namespace KartKraft

#endif  // FLATBUFFERS_GENERATED_FRAME_KARTKRAFT_H_
