/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: highSpeedBlender.proto */

#ifndef PROTOBUF_C_highSpeedBlender_2eproto__INCLUDED
#define PROTOBUF_C_highSpeedBlender_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Iot__Service__HighSpeedBlender__ActionInSelfCleaning Iot__Service__HighSpeedBlender__ActionInSelfCleaning;
typedef struct _Iot__Service__HighSpeedBlender__ActionOutSelfCleaning Iot__Service__HighSpeedBlender__ActionOutSelfCleaning;
typedef struct _Iot__Service__HighSpeedBlender__AppointmentTaskCompleted Iot__Service__HighSpeedBlender__AppointmentTaskCompleted;
typedef struct _Iot__Service__HighSpeedBlender__Properties Iot__Service__HighSpeedBlender__Properties;


/* --- enums --- */

typedef enum _Iot__Service__HighSpeedBlender__HighSpeedBlenderMode {
  /*
   *搅拌
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_MODE__STIRRING = 0,
  /*
   *低糖糊
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_MODE__LOWSUGAR_PASTE = 1,
  /*
   *五谷浆
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_MODE__CEREAL_PULP = 2,
  /*
   *粥
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_MODE__PORRIDGE = 3,
  /*
   *豆浆
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_MODE__SOYBEAN_MILK = 4,
  /*
   *果蔬汁
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_MODE__FRUITVEGETABLE_JUICE = 5,
  /*
   *五谷粉
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_MODE__CEREAL_FLOUR = 6,
  /*
   *杀菌洗
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_MODE__STERILIZATIONWASHING = 7,
  /*
   *保温
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_MODE__HEATPRESERVATION = 8
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_MODE)
} Iot__Service__HighSpeedBlender__HighSpeedBlenderMode;
typedef enum _Iot__Service__HighSpeedBlender__MachineStatus {
  IOT__SERVICE__HIGH_SPEED_BLENDER__MACHINE_STATUS__IDLE = 0,
  IOT__SERVICE__HIGH_SPEED_BLENDER__MACHINE_STATUS__PREACTIVE = 1,
  IOT__SERVICE__HIGH_SPEED_BLENDER__MACHINE_STATUS__ACTIVE = 2,
  IOT__SERVICE__HIGH_SPEED_BLENDER__MACHINE_STATUS__STOPED = 3,
  IOT__SERVICE__HIGH_SPEED_BLENDER__MACHINE_STATUS__ERROR = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__HIGH_SPEED_BLENDER__MACHINE_STATUS)
} Iot__Service__HighSpeedBlender__MachineStatus;
typedef enum _Iot__Service__HighSpeedBlender__BlenderOperationMode {
  IOT__SERVICE__HIGH_SPEED_BLENDER__BLENDER_OPERATION_MODE__CANCEL = 0,
  IOT__SERVICE__HIGH_SPEED_BLENDER__BLENDER_OPERATION_MODE__SCHEDULE = 1,
  IOT__SERVICE__HIGH_SPEED_BLENDER__BLENDER_OPERATION_MODE__START = 2,
  IOT__SERVICE__HIGH_SPEED_BLENDER__BLENDER_OPERATION_MODE__PAUSE = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__HIGH_SPEED_BLENDER__BLENDER_OPERATION_MODE)
} Iot__Service__HighSpeedBlender__BlenderOperationMode;
typedef enum _Iot__Service__HighSpeedBlender__HighSpeedBlenderJobStatus {
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_JOB_STATUS__JOB_STANDBY = 0,
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_JOB_STATUS__JOB_SCHEDULE = 1,
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_JOB_STATUS__JOB_ACTIVE = 2,
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_JOB_STATUS__JOB_PRESERVATION_HEAT = 3,
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_JOB_STATUS__JOB_PAUSE = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_JOB_STATUS)
} Iot__Service__HighSpeedBlender__HighSpeedBlenderJobStatus;
typedef enum _Iot__Service__HighSpeedBlender__HighSpeedBlenderStepStatus {
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_STEP_STATUS__NONE = 0,
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_STEP_STATUS__SPEED_HOT = 1,
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_STEP_STATUS__BREAK_WALL = 2,
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_STEP_STATUS__INFUSION = 3,
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_STEP_STATUS__PITHY = 4,
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_STEP_STATUS__AROMA = 5,
  IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_STEP_STATUS__MAKING = 6
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_STEP_STATUS)
} Iot__Service__HighSpeedBlender__HighSpeedBlenderStepStatus;
typedef enum _Iot__Service__HighSpeedBlender__CupType {
  IOT__SERVICE__HIGH_SPEED_BLENDER__CUP_TYPE__DEFAULT = 0,
  /*
   *母杯（热杯）
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__CUP_TYPE__MOTHER_CUP = 1,
  /*
   *冷杯/研磨杯
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__CUP_TYPE__COLD_CUP = 2,
  /*
   *子杯（热杯）
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__CUP_TYPE__SUB_CUP = 3,
  /*
   *切丝杯（食物杯）
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__CUP_TYPE__SHREDDED_CUP = 4,
  /*
   *烹饪杯
   */
  IOT__SERVICE__HIGH_SPEED_BLENDER__CUP_TYPE__COOKING_CUP = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__HIGH_SPEED_BLENDER__CUP_TYPE)
} Iot__Service__HighSpeedBlender__CupType;

/* --- messages --- */

struct  _Iot__Service__HighSpeedBlender__ActionInSelfCleaning
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__HIGH_SPEED_BLENDER__ACTION_IN_SELF_CLEANING__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__high_speed_blender__action_in_self_cleaning__descriptor) \
     }


struct  _Iot__Service__HighSpeedBlender__ActionOutSelfCleaning
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__HIGH_SPEED_BLENDER__ACTION_OUT_SELF_CLEANING__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__high_speed_blender__action_out_self_cleaning__descriptor) \
     }


struct  _Iot__Service__HighSpeedBlender__AppointmentTaskCompleted
{
  ProtobufCMessage base;
  protobuf_c_boolean status;
  char *name;
  uint32_t hour;
  uint32_t min;
  uint32_t sec;
};
#define IOT__SERVICE__HIGH_SPEED_BLENDER__APPOINTMENT_TASK_COMPLETED__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__high_speed_blender__appointment_task_completed__descriptor) \
    , 0, (char *)protobuf_c_empty_string, 0, 0, 0 }


struct  _Iot__Service__HighSpeedBlender__Properties
{
  ProtobufCMessage base;
  protobuf_c_boolean power;
  Iot__Service__HighSpeedBlender__HighSpeedBlenderMode highspeedblendermode;
  uint32_t processingspeed;
  protobuf_c_boolean vacuumstorageenabled;
  protobuf_c_boolean vacuumgrindenabled;
  protobuf_c_boolean vacuumfruitenabled;
  Iot__Service__HighSpeedBlender__MachineStatus machinestatus;
  Iot__Service__HighSpeedBlender__BlenderOperationMode blenderoperationmode;
  /*
   * action selfCleaning(ActionInSelfCleaning) returns (ActionOutSelfCleaning) = 9;
   */
  Iot__Service__HighSpeedBlender__HighSpeedBlenderJobStatus highspeedblenderjobstatus;
  protobuf_c_boolean heatpreservationmode;
  uint32_t targettemperature;
  uint32_t currenttemperature;
  Iot__Service__HighSpeedBlender__AppointmentTaskCompleted *appointmenttaskcompleted;
  uint32_t operationtime;
  uint32_t heatpreservationtime;
  uint32_t remaintime;
  Iot__Service__HighSpeedBlender__HighSpeedBlenderStepStatus highspeedblenderstepstatus;
  protobuf_c_boolean contactstatus;
  uint32_t preservingheatduration;
  uint32_t appointmentremaintime;
  uint32_t runningduration;
  protobuf_c_boolean timedisplay;
  protobuf_c_boolean horseracelampdisplay;
  Iot__Service__HighSpeedBlender__CupType cuptype;
};
#define IOT__SERVICE__HIGH_SPEED_BLENDER__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__high_speed_blender__properties__descriptor) \
    , 0, IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_MODE__STIRRING, 0, 0, 0, 0, IOT__SERVICE__HIGH_SPEED_BLENDER__MACHINE_STATUS__IDLE, IOT__SERVICE__HIGH_SPEED_BLENDER__BLENDER_OPERATION_MODE__CANCEL, IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_JOB_STATUS__JOB_STANDBY, 0, 0, 0, NULL, 0, 0, 0, IOT__SERVICE__HIGH_SPEED_BLENDER__HIGH_SPEED_BLENDER_STEP_STATUS__NONE, 0, 0, 0, 0, 0, 0, IOT__SERVICE__HIGH_SPEED_BLENDER__CUP_TYPE__DEFAULT }


/* Iot__Service__HighSpeedBlender__ActionInSelfCleaning methods */
void   iot__service__high_speed_blender__action_in_self_cleaning__init
                     (Iot__Service__HighSpeedBlender__ActionInSelfCleaning         *message);
size_t iot__service__high_speed_blender__action_in_self_cleaning__get_packed_size
                     (const Iot__Service__HighSpeedBlender__ActionInSelfCleaning   *message);
size_t iot__service__high_speed_blender__action_in_self_cleaning__pack
                     (const Iot__Service__HighSpeedBlender__ActionInSelfCleaning   *message,
                      uint8_t             *out);
size_t iot__service__high_speed_blender__action_in_self_cleaning__pack_to_buffer
                     (const Iot__Service__HighSpeedBlender__ActionInSelfCleaning   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__HighSpeedBlender__ActionInSelfCleaning *
       iot__service__high_speed_blender__action_in_self_cleaning__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__high_speed_blender__action_in_self_cleaning__free_unpacked
                     (Iot__Service__HighSpeedBlender__ActionInSelfCleaning *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__HighSpeedBlender__ActionOutSelfCleaning methods */
void   iot__service__high_speed_blender__action_out_self_cleaning__init
                     (Iot__Service__HighSpeedBlender__ActionOutSelfCleaning         *message);
size_t iot__service__high_speed_blender__action_out_self_cleaning__get_packed_size
                     (const Iot__Service__HighSpeedBlender__ActionOutSelfCleaning   *message);
size_t iot__service__high_speed_blender__action_out_self_cleaning__pack
                     (const Iot__Service__HighSpeedBlender__ActionOutSelfCleaning   *message,
                      uint8_t             *out);
size_t iot__service__high_speed_blender__action_out_self_cleaning__pack_to_buffer
                     (const Iot__Service__HighSpeedBlender__ActionOutSelfCleaning   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__HighSpeedBlender__ActionOutSelfCleaning *
       iot__service__high_speed_blender__action_out_self_cleaning__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__high_speed_blender__action_out_self_cleaning__free_unpacked
                     (Iot__Service__HighSpeedBlender__ActionOutSelfCleaning *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__HighSpeedBlender__AppointmentTaskCompleted methods */
void   iot__service__high_speed_blender__appointment_task_completed__init
                     (Iot__Service__HighSpeedBlender__AppointmentTaskCompleted         *message);
size_t iot__service__high_speed_blender__appointment_task_completed__get_packed_size
                     (const Iot__Service__HighSpeedBlender__AppointmentTaskCompleted   *message);
size_t iot__service__high_speed_blender__appointment_task_completed__pack
                     (const Iot__Service__HighSpeedBlender__AppointmentTaskCompleted   *message,
                      uint8_t             *out);
size_t iot__service__high_speed_blender__appointment_task_completed__pack_to_buffer
                     (const Iot__Service__HighSpeedBlender__AppointmentTaskCompleted   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__HighSpeedBlender__AppointmentTaskCompleted *
       iot__service__high_speed_blender__appointment_task_completed__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__high_speed_blender__appointment_task_completed__free_unpacked
                     (Iot__Service__HighSpeedBlender__AppointmentTaskCompleted *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__HighSpeedBlender__Properties methods */
void   iot__service__high_speed_blender__properties__init
                     (Iot__Service__HighSpeedBlender__Properties         *message);
size_t iot__service__high_speed_blender__properties__get_packed_size
                     (const Iot__Service__HighSpeedBlender__Properties   *message);
size_t iot__service__high_speed_blender__properties__pack
                     (const Iot__Service__HighSpeedBlender__Properties   *message,
                      uint8_t             *out);
size_t iot__service__high_speed_blender__properties__pack_to_buffer
                     (const Iot__Service__HighSpeedBlender__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__HighSpeedBlender__Properties *
       iot__service__high_speed_blender__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__high_speed_blender__properties__free_unpacked
                     (Iot__Service__HighSpeedBlender__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__HighSpeedBlender__ActionInSelfCleaning_Closure)
                 (const Iot__Service__HighSpeedBlender__ActionInSelfCleaning *message,
                  void *closure_data);
typedef void (*Iot__Service__HighSpeedBlender__ActionOutSelfCleaning_Closure)
                 (const Iot__Service__HighSpeedBlender__ActionOutSelfCleaning *message,
                  void *closure_data);
typedef void (*Iot__Service__HighSpeedBlender__AppointmentTaskCompleted_Closure)
                 (const Iot__Service__HighSpeedBlender__AppointmentTaskCompleted *message,
                  void *closure_data);
typedef void (*Iot__Service__HighSpeedBlender__Properties_Closure)
                 (const Iot__Service__HighSpeedBlender__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    iot__service__high_speed_blender__high_speed_blender_mode__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__high_speed_blender__machine_status__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__high_speed_blender__blender_operation_mode__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__high_speed_blender__high_speed_blender_job_status__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__high_speed_blender__high_speed_blender_step_status__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__high_speed_blender__cup_type__descriptor;
extern const ProtobufCMessageDescriptor iot__service__high_speed_blender__action_in_self_cleaning__descriptor;
extern const ProtobufCMessageDescriptor iot__service__high_speed_blender__action_out_self_cleaning__descriptor;
extern const ProtobufCMessageDescriptor iot__service__high_speed_blender__appointment_task_completed__descriptor;
extern const ProtobufCMessageDescriptor iot__service__high_speed_blender__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_highSpeedBlender_2eproto__INCLUDED */
