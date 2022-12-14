/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: devCountDown.proto */

#ifndef PROTOBUF_C_devCountDown_2eproto__INCLUDED
#define PROTOBUF_C_devCountDown_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "schema/common/common.pb-c.h"

typedef struct _Iot__Service__DevCountDown__Config Iot__Service__DevCountDown__Config;
typedef struct _Iot__Service__DevCountDown__CountDown Iot__Service__DevCountDown__CountDown;
typedef struct _Iot__Service__DevCountDown__Properties Iot__Service__DevCountDown__Properties;


/* --- enums --- */


/* --- messages --- */

struct  _Iot__Service__DevCountDown__Config
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
#define IOT__SERVICE__DEV_COUNT_DOWN__CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_count_down__config__descriptor) \
    , 0, 0,NULL, {0,NULL} }


struct  _Iot__Service__DevCountDown__CountDown
{
  ProtobufCMessage base;
  protobuf_c_boolean status;
  char *name;
  uint32_t timeleft;
  size_t n_config;
  Iot__Service__DevCountDown__Config **config;
  uint32_t settingtime;
};
#define IOT__SERVICE__DEV_COUNT_DOWN__COUNT_DOWN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_count_down__count_down__descriptor) \
    , 0, (char *)protobuf_c_empty_string, 0, 0,NULL, 0 }


struct  _Iot__Service__DevCountDown__Properties
{
  ProtobufCMessage base;
  size_t n_countdown;
  ArrayNode **countdown;
};
#define IOT__SERVICE__DEV_COUNT_DOWN__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_count_down__properties__descriptor) \
    , 0,NULL }


/* Iot__Service__DevCountDown__Config methods */
void   iot__service__dev_count_down__config__init
                     (Iot__Service__DevCountDown__Config         *message);
size_t iot__service__dev_count_down__config__get_packed_size
                     (const Iot__Service__DevCountDown__Config   *message);
size_t iot__service__dev_count_down__config__pack
                     (const Iot__Service__DevCountDown__Config   *message,
                      uint8_t             *out);
size_t iot__service__dev_count_down__config__pack_to_buffer
                     (const Iot__Service__DevCountDown__Config   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevCountDown__Config *
       iot__service__dev_count_down__config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_count_down__config__free_unpacked
                     (Iot__Service__DevCountDown__Config *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__DevCountDown__CountDown methods */
void   iot__service__dev_count_down__count_down__init
                     (Iot__Service__DevCountDown__CountDown         *message);
size_t iot__service__dev_count_down__count_down__get_packed_size
                     (const Iot__Service__DevCountDown__CountDown   *message);
size_t iot__service__dev_count_down__count_down__pack
                     (const Iot__Service__DevCountDown__CountDown   *message,
                      uint8_t             *out);
size_t iot__service__dev_count_down__count_down__pack_to_buffer
                     (const Iot__Service__DevCountDown__CountDown   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevCountDown__CountDown *
       iot__service__dev_count_down__count_down__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_count_down__count_down__free_unpacked
                     (Iot__Service__DevCountDown__CountDown *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__DevCountDown__Properties methods */
void   iot__service__dev_count_down__properties__init
                     (Iot__Service__DevCountDown__Properties         *message);
size_t iot__service__dev_count_down__properties__get_packed_size
                     (const Iot__Service__DevCountDown__Properties   *message);
size_t iot__service__dev_count_down__properties__pack
                     (const Iot__Service__DevCountDown__Properties   *message,
                      uint8_t             *out);
size_t iot__service__dev_count_down__properties__pack_to_buffer
                     (const Iot__Service__DevCountDown__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevCountDown__Properties *
       iot__service__dev_count_down__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_count_down__properties__free_unpacked
                     (Iot__Service__DevCountDown__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__DevCountDown__Config_Closure)
                 (const Iot__Service__DevCountDown__Config *message,
                  void *closure_data);
typedef void (*Iot__Service__DevCountDown__CountDown_Closure)
                 (const Iot__Service__DevCountDown__CountDown *message,
                  void *closure_data);
typedef void (*Iot__Service__DevCountDown__Properties_Closure)
                 (const Iot__Service__DevCountDown__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor iot__service__dev_count_down__config__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_count_down__count_down__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_count_down__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_devCountDown_2eproto__INCLUDED */
