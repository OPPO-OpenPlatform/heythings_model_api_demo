/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: cwTower.proto */

#ifndef PROTOBUF_C_cwTower_2eproto__INCLUDED
#define PROTOBUF_C_cwTower_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Iot__Service__CwTower__Properties Iot__Service__CwTower__Properties;


/* --- enums --- */


/* --- messages --- */

struct  _Iot__Service__CwTower__Properties
{
  ProtobufCMessage base;
  protobuf_c_boolean power;
  protobuf_c_boolean mannulautosta;
  protobuf_c_boolean faultsta;
  protobuf_c_boolean hlsta;
  protobuf_c_boolean llsta;
  uint32_t windspeed;
  uint32_t freqsetting;
  uint32_t freqfeedback;
  protobuf_c_boolean vibrationsta;
};
#define IOT__SERVICE__CW_TOWER__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__cw_tower__properties__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0 }


/* Iot__Service__CwTower__Properties methods */
void   iot__service__cw_tower__properties__init
                     (Iot__Service__CwTower__Properties         *message);
size_t iot__service__cw_tower__properties__get_packed_size
                     (const Iot__Service__CwTower__Properties   *message);
size_t iot__service__cw_tower__properties__pack
                     (const Iot__Service__CwTower__Properties   *message,
                      uint8_t             *out);
size_t iot__service__cw_tower__properties__pack_to_buffer
                     (const Iot__Service__CwTower__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__CwTower__Properties *
       iot__service__cw_tower__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__cw_tower__properties__free_unpacked
                     (Iot__Service__CwTower__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__CwTower__Properties_Closure)
                 (const Iot__Service__CwTower__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor iot__service__cw_tower__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_cwTower_2eproto__INCLUDED */