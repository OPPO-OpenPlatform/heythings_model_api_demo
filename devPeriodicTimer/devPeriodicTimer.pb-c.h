/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: devPeriodicTimer.proto */

#ifndef PROTOBUF_C_devPeriodicTimer_2eproto__INCLUDED
#define PROTOBUF_C_devPeriodicTimer_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "schema/common/common.pb-c.h"

typedef struct _Iot__Service__DevPeriodicTimer__Config Iot__Service__DevPeriodicTimer__Config;
typedef struct _Iot__Service__DevPeriodicTimer__PeriodicTimer Iot__Service__DevPeriodicTimer__PeriodicTimer;
typedef struct _Iot__Service__DevPeriodicTimer__ActionInPeriodicTimerExecute Iot__Service__DevPeriodicTimer__ActionInPeriodicTimerExecute;
typedef struct _Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute;
typedef struct _Iot__Service__DevPeriodicTimer__Properties Iot__Service__DevPeriodicTimer__Properties;


/* --- enums --- */

typedef enum _Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute__Code {
  IOT__SERVICE__DEV_PERIODIC_TIMER__ACTION_OUT_PERIODIC_TIMER_EXECUTE__CODE__SUCCESS = 0,
  IOT__SERVICE__DEV_PERIODIC_TIMER__ACTION_OUT_PERIODIC_TIMER_EXECUTE__CODE__FAIL = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__DEV_PERIODIC_TIMER__ACTION_OUT_PERIODIC_TIMER_EXECUTE__CODE)
} Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute__Code;

/* --- messages --- */

struct  _Iot__Service__DevPeriodicTimer__Config
{
  ProtobufCMessage base;
  uint32_t siid;
  size_t n_iid;
  uint32_t *iid;
  /*
   *由siid对应的服务模型进行解析
   */
  ProtobufCBinaryData data;
};
#define IOT__SERVICE__DEV_PERIODIC_TIMER__CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_periodic_timer__config__descriptor) \
    , 0, 0,NULL, {0,NULL} }


struct  _Iot__Service__DevPeriodicTimer__PeriodicTimer
{
  ProtobufCMessage base;
  protobuf_c_boolean status;
  char *name;
  /*
   *bit0-bit6 correspond Monday-Sunday, bit is set meaning enable
   */
  uint32_t repeat;
  uint32_t hour;
  uint32_t min;
  uint32_t sec;
  size_t n_config;
  Iot__Service__DevPeriodicTimer__Config **config;
  /*
   *unit：s 设置的时间戳，1、单次任务设备可以判断是否过期 2、数组排序可使用
   */
  uint64_t settingtime;
};
#define IOT__SERVICE__DEV_PERIODIC_TIMER__PERIODIC_TIMER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_periodic_timer__periodic_timer__descriptor) \
    , 0, (char *)protobuf_c_empty_string, 0, 0, 0, 0, 0,NULL, 0 }


struct  _Iot__Service__DevPeriodicTimer__ActionInPeriodicTimerExecute
{
  ProtobufCMessage base;
  size_t n_config;
  Iot__Service__DevPeriodicTimer__Config **config;
};
#define IOT__SERVICE__DEV_PERIODIC_TIMER__ACTION_IN_PERIODIC_TIMER_EXECUTE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_periodic_timer__action_in_periodic_timer_execute__descriptor) \
    , 0,NULL }


struct  _Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute
{
  ProtobufCMessage base;
  Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute__Code code;
};
#define IOT__SERVICE__DEV_PERIODIC_TIMER__ACTION_OUT_PERIODIC_TIMER_EXECUTE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_periodic_timer__action_out_periodic_timer_execute__descriptor) \
    , IOT__SERVICE__DEV_PERIODIC_TIMER__ACTION_OUT_PERIODIC_TIMER_EXECUTE__CODE__SUCCESS }


struct  _Iot__Service__DevPeriodicTimer__Properties
{
  ProtobufCMessage base;
  /*
   * action periodicTimerExecute(ActionInPeriodicTimerExecute) returns (ActionOutPeriodicTimerExecute) = 2; //周期定时执行,云端周期定时调用该方法下行通知设备执行
   */
  size_t n_periodictimer;
  ArrayNode **periodictimer;
};
#define IOT__SERVICE__DEV_PERIODIC_TIMER__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_periodic_timer__properties__descriptor) \
    , 0,NULL }


/* Iot__Service__DevPeriodicTimer__Config methods */
void   iot__service__dev_periodic_timer__config__init
                     (Iot__Service__DevPeriodicTimer__Config         *message);
size_t iot__service__dev_periodic_timer__config__get_packed_size
                     (const Iot__Service__DevPeriodicTimer__Config   *message);
size_t iot__service__dev_periodic_timer__config__pack
                     (const Iot__Service__DevPeriodicTimer__Config   *message,
                      uint8_t             *out);
size_t iot__service__dev_periodic_timer__config__pack_to_buffer
                     (const Iot__Service__DevPeriodicTimer__Config   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevPeriodicTimer__Config *
       iot__service__dev_periodic_timer__config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_periodic_timer__config__free_unpacked
                     (Iot__Service__DevPeriodicTimer__Config *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__DevPeriodicTimer__PeriodicTimer methods */
void   iot__service__dev_periodic_timer__periodic_timer__init
                     (Iot__Service__DevPeriodicTimer__PeriodicTimer         *message);
size_t iot__service__dev_periodic_timer__periodic_timer__get_packed_size
                     (const Iot__Service__DevPeriodicTimer__PeriodicTimer   *message);
size_t iot__service__dev_periodic_timer__periodic_timer__pack
                     (const Iot__Service__DevPeriodicTimer__PeriodicTimer   *message,
                      uint8_t             *out);
size_t iot__service__dev_periodic_timer__periodic_timer__pack_to_buffer
                     (const Iot__Service__DevPeriodicTimer__PeriodicTimer   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevPeriodicTimer__PeriodicTimer *
       iot__service__dev_periodic_timer__periodic_timer__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_periodic_timer__periodic_timer__free_unpacked
                     (Iot__Service__DevPeriodicTimer__PeriodicTimer *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__DevPeriodicTimer__ActionInPeriodicTimerExecute methods */
void   iot__service__dev_periodic_timer__action_in_periodic_timer_execute__init
                     (Iot__Service__DevPeriodicTimer__ActionInPeriodicTimerExecute         *message);
size_t iot__service__dev_periodic_timer__action_in_periodic_timer_execute__get_packed_size
                     (const Iot__Service__DevPeriodicTimer__ActionInPeriodicTimerExecute   *message);
size_t iot__service__dev_periodic_timer__action_in_periodic_timer_execute__pack
                     (const Iot__Service__DevPeriodicTimer__ActionInPeriodicTimerExecute   *message,
                      uint8_t             *out);
size_t iot__service__dev_periodic_timer__action_in_periodic_timer_execute__pack_to_buffer
                     (const Iot__Service__DevPeriodicTimer__ActionInPeriodicTimerExecute   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevPeriodicTimer__ActionInPeriodicTimerExecute *
       iot__service__dev_periodic_timer__action_in_periodic_timer_execute__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_periodic_timer__action_in_periodic_timer_execute__free_unpacked
                     (Iot__Service__DevPeriodicTimer__ActionInPeriodicTimerExecute *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute methods */
void   iot__service__dev_periodic_timer__action_out_periodic_timer_execute__init
                     (Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute         *message);
size_t iot__service__dev_periodic_timer__action_out_periodic_timer_execute__get_packed_size
                     (const Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute   *message);
size_t iot__service__dev_periodic_timer__action_out_periodic_timer_execute__pack
                     (const Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute   *message,
                      uint8_t             *out);
size_t iot__service__dev_periodic_timer__action_out_periodic_timer_execute__pack_to_buffer
                     (const Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute *
       iot__service__dev_periodic_timer__action_out_periodic_timer_execute__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_periodic_timer__action_out_periodic_timer_execute__free_unpacked
                     (Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__DevPeriodicTimer__Properties methods */
void   iot__service__dev_periodic_timer__properties__init
                     (Iot__Service__DevPeriodicTimer__Properties         *message);
size_t iot__service__dev_periodic_timer__properties__get_packed_size
                     (const Iot__Service__DevPeriodicTimer__Properties   *message);
size_t iot__service__dev_periodic_timer__properties__pack
                     (const Iot__Service__DevPeriodicTimer__Properties   *message,
                      uint8_t             *out);
size_t iot__service__dev_periodic_timer__properties__pack_to_buffer
                     (const Iot__Service__DevPeriodicTimer__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevPeriodicTimer__Properties *
       iot__service__dev_periodic_timer__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_periodic_timer__properties__free_unpacked
                     (Iot__Service__DevPeriodicTimer__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__DevPeriodicTimer__Config_Closure)
                 (const Iot__Service__DevPeriodicTimer__Config *message,
                  void *closure_data);
typedef void (*Iot__Service__DevPeriodicTimer__PeriodicTimer_Closure)
                 (const Iot__Service__DevPeriodicTimer__PeriodicTimer *message,
                  void *closure_data);
typedef void (*Iot__Service__DevPeriodicTimer__ActionInPeriodicTimerExecute_Closure)
                 (const Iot__Service__DevPeriodicTimer__ActionInPeriodicTimerExecute *message,
                  void *closure_data);
typedef void (*Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute_Closure)
                 (const Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute *message,
                  void *closure_data);
typedef void (*Iot__Service__DevPeriodicTimer__Properties_Closure)
                 (const Iot__Service__DevPeriodicTimer__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor iot__service__dev_periodic_timer__config__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_periodic_timer__periodic_timer__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_periodic_timer__action_in_periodic_timer_execute__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_periodic_timer__action_out_periodic_timer_execute__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__dev_periodic_timer__action_out_periodic_timer_execute__code__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_periodic_timer__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_devPeriodicTimer_2eproto__INCLUDED */