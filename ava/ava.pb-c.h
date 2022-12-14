/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ava.proto */

#ifndef PROTOBUF_C_ava_2eproto__INCLUDED
#define PROTOBUF_C_ava_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Iot__Service__Ava__ActionInStartAva Iot__Service__Ava__ActionInStartAva;
typedef struct _Iot__Service__Ava__ActionOutStartAva Iot__Service__Ava__ActionOutStartAva;
typedef struct _Iot__Service__Ava__ActionInStopAva Iot__Service__Ava__ActionInStopAva;
typedef struct _Iot__Service__Ava__ActionOutStopAva Iot__Service__Ava__ActionOutStopAva;
typedef struct _Iot__Service__Ava__Properties Iot__Service__Ava__Properties;


/* --- enums --- */


/* --- messages --- */

struct  _Iot__Service__Ava__ActionInStartAva
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__AVA__ACTION_IN_START_AVA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__ava__action_in_start_ava__descriptor) \
     }


struct  _Iot__Service__Ava__ActionOutStartAva
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__AVA__ACTION_OUT_START_AVA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__ava__action_out_start_ava__descriptor) \
     }


struct  _Iot__Service__Ava__ActionInStopAva
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__AVA__ACTION_IN_STOP_AVA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__ava__action_in_stop_ava__descriptor) \
     }


struct  _Iot__Service__Ava__ActionOutStopAva
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__AVA__ACTION_OUT_STOP_AVA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__ava__action_out_stop_ava__descriptor) \
     }


struct  _Iot__Service__Ava__Properties
{
  ProtobufCMessage base;
  protobuf_c_boolean power;
  /*
   * action startAva(ActionInStartAva) returns (ActionOutStartAva) = 3;
   * action stopAva(ActionInStopAva) returns (ActionOutStopAva) = 4;
   */
  protobuf_c_boolean alarmstate;
};
#define IOT__SERVICE__AVA__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__ava__properties__descriptor) \
    , 0, 0 }


/* Iot__Service__Ava__ActionInStartAva methods */
void   iot__service__ava__action_in_start_ava__init
                     (Iot__Service__Ava__ActionInStartAva         *message);
size_t iot__service__ava__action_in_start_ava__get_packed_size
                     (const Iot__Service__Ava__ActionInStartAva   *message);
size_t iot__service__ava__action_in_start_ava__pack
                     (const Iot__Service__Ava__ActionInStartAva   *message,
                      uint8_t             *out);
size_t iot__service__ava__action_in_start_ava__pack_to_buffer
                     (const Iot__Service__Ava__ActionInStartAva   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Ava__ActionInStartAva *
       iot__service__ava__action_in_start_ava__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__ava__action_in_start_ava__free_unpacked
                     (Iot__Service__Ava__ActionInStartAva *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Ava__ActionOutStartAva methods */
void   iot__service__ava__action_out_start_ava__init
                     (Iot__Service__Ava__ActionOutStartAva         *message);
size_t iot__service__ava__action_out_start_ava__get_packed_size
                     (const Iot__Service__Ava__ActionOutStartAva   *message);
size_t iot__service__ava__action_out_start_ava__pack
                     (const Iot__Service__Ava__ActionOutStartAva   *message,
                      uint8_t             *out);
size_t iot__service__ava__action_out_start_ava__pack_to_buffer
                     (const Iot__Service__Ava__ActionOutStartAva   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Ava__ActionOutStartAva *
       iot__service__ava__action_out_start_ava__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__ava__action_out_start_ava__free_unpacked
                     (Iot__Service__Ava__ActionOutStartAva *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Ava__ActionInStopAva methods */
void   iot__service__ava__action_in_stop_ava__init
                     (Iot__Service__Ava__ActionInStopAva         *message);
size_t iot__service__ava__action_in_stop_ava__get_packed_size
                     (const Iot__Service__Ava__ActionInStopAva   *message);
size_t iot__service__ava__action_in_stop_ava__pack
                     (const Iot__Service__Ava__ActionInStopAva   *message,
                      uint8_t             *out);
size_t iot__service__ava__action_in_stop_ava__pack_to_buffer
                     (const Iot__Service__Ava__ActionInStopAva   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Ava__ActionInStopAva *
       iot__service__ava__action_in_stop_ava__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__ava__action_in_stop_ava__free_unpacked
                     (Iot__Service__Ava__ActionInStopAva *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Ava__ActionOutStopAva methods */
void   iot__service__ava__action_out_stop_ava__init
                     (Iot__Service__Ava__ActionOutStopAva         *message);
size_t iot__service__ava__action_out_stop_ava__get_packed_size
                     (const Iot__Service__Ava__ActionOutStopAva   *message);
size_t iot__service__ava__action_out_stop_ava__pack
                     (const Iot__Service__Ava__ActionOutStopAva   *message,
                      uint8_t             *out);
size_t iot__service__ava__action_out_stop_ava__pack_to_buffer
                     (const Iot__Service__Ava__ActionOutStopAva   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Ava__ActionOutStopAva *
       iot__service__ava__action_out_stop_ava__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__ava__action_out_stop_ava__free_unpacked
                     (Iot__Service__Ava__ActionOutStopAva *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Ava__Properties methods */
void   iot__service__ava__properties__init
                     (Iot__Service__Ava__Properties         *message);
size_t iot__service__ava__properties__get_packed_size
                     (const Iot__Service__Ava__Properties   *message);
size_t iot__service__ava__properties__pack
                     (const Iot__Service__Ava__Properties   *message,
                      uint8_t             *out);
size_t iot__service__ava__properties__pack_to_buffer
                     (const Iot__Service__Ava__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Ava__Properties *
       iot__service__ava__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__ava__properties__free_unpacked
                     (Iot__Service__Ava__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__Ava__ActionInStartAva_Closure)
                 (const Iot__Service__Ava__ActionInStartAva *message,
                  void *closure_data);
typedef void (*Iot__Service__Ava__ActionOutStartAva_Closure)
                 (const Iot__Service__Ava__ActionOutStartAva *message,
                  void *closure_data);
typedef void (*Iot__Service__Ava__ActionInStopAva_Closure)
                 (const Iot__Service__Ava__ActionInStopAva *message,
                  void *closure_data);
typedef void (*Iot__Service__Ava__ActionOutStopAva_Closure)
                 (const Iot__Service__Ava__ActionOutStopAva *message,
                  void *closure_data);
typedef void (*Iot__Service__Ava__Properties_Closure)
                 (const Iot__Service__Ava__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor iot__service__ava__action_in_start_ava__descriptor;
extern const ProtobufCMessageDescriptor iot__service__ava__action_out_start_ava__descriptor;
extern const ProtobufCMessageDescriptor iot__service__ava__action_in_stop_ava__descriptor;
extern const ProtobufCMessageDescriptor iot__service__ava__action_out_stop_ava__descriptor;
extern const ProtobufCMessageDescriptor iot__service__ava__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ava_2eproto__INCLUDED */
