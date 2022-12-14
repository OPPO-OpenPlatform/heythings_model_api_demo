/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: sf.proto */

#ifndef PROTOBUF_C_sf_2eproto__INCLUDED
#define PROTOBUF_C_sf_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Iot__Service__Sf__Properties Iot__Service__Sf__Properties;


/* --- enums --- */


/* --- messages --- */

struct  _Iot__Service__Sf__Properties
{
  ProtobufCMessage base;
  protobuf_c_boolean power;
  protobuf_c_boolean mannulautosta;
  protobuf_c_boolean faultsta;
  protobuf_c_boolean pressurediffsta;
  uint32_t vlvopening;
  uint32_t vlvfeedback;
  uint32_t freqsetting;
  uint32_t freqfeedback;
  uint32_t currenttemperature;
  uint32_t currenttemperature2;
  uint32_t targettemperature;
  uint32_t currenthumidity;
  uint32_t targethumidity;
  uint32_t currentpres1;
  uint32_t currentpres2;
  uint32_t targetpres1;
  uint32_t targetpres2;
  uint32_t minimumfreq;
  uint32_t co2;
  uint32_t targetco2;
};
#define IOT__SERVICE__SF__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__sf__properties__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }


/* Iot__Service__Sf__Properties methods */
void   iot__service__sf__properties__init
                     (Iot__Service__Sf__Properties         *message);
size_t iot__service__sf__properties__get_packed_size
                     (const Iot__Service__Sf__Properties   *message);
size_t iot__service__sf__properties__pack
                     (const Iot__Service__Sf__Properties   *message,
                      uint8_t             *out);
size_t iot__service__sf__properties__pack_to_buffer
                     (const Iot__Service__Sf__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Sf__Properties *
       iot__service__sf__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__sf__properties__free_unpacked
                     (Iot__Service__Sf__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__Sf__Properties_Closure)
                 (const Iot__Service__Sf__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor iot__service__sf__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_sf_2eproto__INCLUDED */
