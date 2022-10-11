/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: waterPurifier.proto */

#ifndef PROTOBUF_C_waterPurifier_2eproto__INCLUDED
#define PROTOBUF_C_waterPurifier_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "schema/common/common.pb-c.h"

typedef struct _Iot__Service__WaterPurifier__WaterQuantity Iot__Service__WaterPurifier__WaterQuantity;
typedef struct _Iot__Service__WaterPurifier__Properties Iot__Service__WaterPurifier__Properties;


/* --- enums --- */

typedef enum _Iot__Service__WaterPurifier__WaterAdditiveType {
  IOT__SERVICE__WATER_PURIFIER__WATER_ADDITIVE_TYPE__NONE_TYPE = 0,
  IOT__SERVICE__WATER_PURIFIER__WATER_ADDITIVE_TYPE__SODA = 1,
  IOT__SERVICE__WATER_PURIFIER__WATER_ADDITIVE_TYPE__MINERAL = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__WATER_PURIFIER__WATER_ADDITIVE_TYPE)
} Iot__Service__WaterPurifier__WaterAdditiveType;
typedef enum _Iot__Service__WaterPurifier__OperationMode {
  IOT__SERVICE__WATER_PURIFIER__OPERATION_MODE__STOP = 0,
  IOT__SERVICE__WATER_PURIFIER__OPERATION_MODE__PAUSE = 1,
  IOT__SERVICE__WATER_PURIFIER__OPERATION_MODE__RESUME = 2,
  IOT__SERVICE__WATER_PURIFIER__OPERATION_MODE__CANCEL = 3,
  IOT__SERVICE__WATER_PURIFIER__OPERATION_MODE__START = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__WATER_PURIFIER__OPERATION_MODE)
} Iot__Service__WaterPurifier__OperationMode;
typedef enum _Iot__Service__WaterPurifier__MachineStatus {
  IOT__SERVICE__WATER_PURIFIER__MACHINE_STATUS__IDLE = 0,
  IOT__SERVICE__WATER_PURIFIER__MACHINE_STATUS__PREACTIVE = 1,
  IOT__SERVICE__WATER_PURIFIER__MACHINE_STATUS__ACTIVE = 2,
  IOT__SERVICE__WATER_PURIFIER__MACHINE_STATUS__STOPED = 3,
  IOT__SERVICE__WATER_PURIFIER__MACHINE_STATUS__ERROR = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__WATER_PURIFIER__MACHINE_STATUS)
} Iot__Service__WaterPurifier__MachineStatus;
typedef enum _Iot__Service__WaterPurifier__BubbleMode {
  IOT__SERVICE__WATER_PURIFIER__BUBBLE_MODE__CLOSE = 0,
  IOT__SERVICE__WATER_PURIFIER__BUBBLE_MODE__OPEN = 1,
  IOT__SERVICE__WATER_PURIFIER__BUBBLE_MODE__HOT_BUBBLE = 2,
  IOT__SERVICE__WATER_PURIFIER__BUBBLE_MODE__CLOD_BUBBLE = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__WATER_PURIFIER__BUBBLE_MODE)
} Iot__Service__WaterPurifier__BubbleMode;
typedef enum _Iot__Service__WaterPurifier__SterilizationPeriod {
  IOT__SERVICE__WATER_PURIFIER__STERILIZATION_PERIOD__PERIOD_NONE = 0,
  IOT__SERVICE__WATER_PURIFIER__STERILIZATION_PERIOD__PERIOD_1 = 1,
  IOT__SERVICE__WATER_PURIFIER__STERILIZATION_PERIOD__PERIOD_2 = 2,
  IOT__SERVICE__WATER_PURIFIER__STERILIZATION_PERIOD__PERIOD_3 = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__WATER_PURIFIER__STERILIZATION_PERIOD)
} Iot__Service__WaterPurifier__SterilizationPeriod;

/* --- messages --- */

struct  _Iot__Service__WaterPurifier__WaterQuantity
{
  ProtobufCMessage base;
  uint32_t quantity;
};
#define IOT__SERVICE__WATER_PURIFIER__WATER_QUANTITY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__water_purifier__water_quantity__descriptor) \
    , 0 }


struct  _Iot__Service__WaterPurifier__Properties
{
  ProtobufCMessage base;
  protobuf_c_boolean power;
  protobuf_c_boolean wastewater;
  Iot__Service__WaterPurifier__WaterAdditiveType wateradditivetype;
  Iot__Service__WaterPurifier__OperationMode operationmode;
  Iot__Service__WaterPurifier__MachineStatus machinestatus;
  uint32_t remaintime;
  uint32_t processingpercentage;
  protobuf_c_boolean washenabled;
  Iot__Service__WaterPurifier__BubbleMode bubblemode;
  uint32_t inflowtds;
  uint32_t outflowtds;
  protobuf_c_boolean screendisplayenabled;
  protobuf_c_boolean childlockenabled;
  protobuf_c_boolean drainage;
  protobuf_c_boolean vacationmodeenabled;
  size_t n_waterquantity;
  ArrayNode **waterquantity;
  protobuf_c_boolean sterilizationenabled;
  uint32_t sterilizationleftdays;
  Iot__Service__WaterPurifier__SterilizationPeriod sterilizationperiod;
  uint32_t sterilizationpercent;
  protobuf_c_boolean waterflowstatus;
};
#define IOT__SERVICE__WATER_PURIFIER__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__water_purifier__properties__descriptor) \
    , 0, 0, IOT__SERVICE__WATER_PURIFIER__WATER_ADDITIVE_TYPE__NONE_TYPE, IOT__SERVICE__WATER_PURIFIER__OPERATION_MODE__STOP, IOT__SERVICE__WATER_PURIFIER__MACHINE_STATUS__IDLE, 0, 0, 0, IOT__SERVICE__WATER_PURIFIER__BUBBLE_MODE__CLOSE, 0, 0, 0, 0, 0, 0, 0,NULL, 0, 0, IOT__SERVICE__WATER_PURIFIER__STERILIZATION_PERIOD__PERIOD_NONE, 0, 0 }


/* Iot__Service__WaterPurifier__WaterQuantity methods */
void   iot__service__water_purifier__water_quantity__init
                     (Iot__Service__WaterPurifier__WaterQuantity         *message);
size_t iot__service__water_purifier__water_quantity__get_packed_size
                     (const Iot__Service__WaterPurifier__WaterQuantity   *message);
size_t iot__service__water_purifier__water_quantity__pack
                     (const Iot__Service__WaterPurifier__WaterQuantity   *message,
                      uint8_t             *out);
size_t iot__service__water_purifier__water_quantity__pack_to_buffer
                     (const Iot__Service__WaterPurifier__WaterQuantity   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__WaterPurifier__WaterQuantity *
       iot__service__water_purifier__water_quantity__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__water_purifier__water_quantity__free_unpacked
                     (Iot__Service__WaterPurifier__WaterQuantity *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__WaterPurifier__Properties methods */
void   iot__service__water_purifier__properties__init
                     (Iot__Service__WaterPurifier__Properties         *message);
size_t iot__service__water_purifier__properties__get_packed_size
                     (const Iot__Service__WaterPurifier__Properties   *message);
size_t iot__service__water_purifier__properties__pack
                     (const Iot__Service__WaterPurifier__Properties   *message,
                      uint8_t             *out);
size_t iot__service__water_purifier__properties__pack_to_buffer
                     (const Iot__Service__WaterPurifier__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__WaterPurifier__Properties *
       iot__service__water_purifier__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__water_purifier__properties__free_unpacked
                     (Iot__Service__WaterPurifier__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__WaterPurifier__WaterQuantity_Closure)
                 (const Iot__Service__WaterPurifier__WaterQuantity *message,
                  void *closure_data);
typedef void (*Iot__Service__WaterPurifier__Properties_Closure)
                 (const Iot__Service__WaterPurifier__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    iot__service__water_purifier__water_additive_type__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__water_purifier__operation_mode__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__water_purifier__machine_status__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__water_purifier__bubble_mode__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__water_purifier__sterilization_period__descriptor;
extern const ProtobufCMessageDescriptor iot__service__water_purifier__water_quantity__descriptor;
extern const ProtobufCMessageDescriptor iot__service__water_purifier__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_waterPurifier_2eproto__INCLUDED */