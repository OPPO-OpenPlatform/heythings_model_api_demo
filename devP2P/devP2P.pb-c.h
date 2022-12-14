/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: devP2P.proto */

#ifndef PROTOBUF_C_devP2P_2eproto__INCLUDED
#define PROTOBUF_C_devP2P_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Iot__Service__DevP2P__ActionInSetStreamInfo Iot__Service__DevP2P__ActionInSetStreamInfo;
typedef struct _Iot__Service__DevP2P__ActionInSetStreamInfo__Cs2Info Iot__Service__DevP2P__ActionInSetStreamInfo__Cs2Info;
typedef struct _Iot__Service__DevP2P__ActionOutSetStreamInfo Iot__Service__DevP2P__ActionOutSetStreamInfo;
typedef struct _Iot__Service__DevP2P__Properties Iot__Service__DevP2P__Properties;


/* --- enums --- */

typedef enum _Iot__Service__DevP2P__EnumVendor {
  /*
   *cs2-network尚云互联
   */
  IOT__SERVICE__DEV_P2_P__ENUM_VENDOR__CS2_NETWORK = 0
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__DEV_P2_P__ENUM_VENDOR)
} Iot__Service__DevP2P__EnumVendor;

/* --- messages --- */

struct  _Iot__Service__DevP2P__ActionInSetStreamInfo__Cs2Info
{
  ProtobufCMessage base;
  ProtobufCBinaryData p2pdid;
  ProtobufCBinaryData license;
  ProtobufCBinaryData initstring;
  ProtobufCBinaryData crckey;
};
#define IOT__SERVICE__DEV_P2_P__ACTION_IN_SET_STREAM_INFO__CS2_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_p2p__action_in_set_stream_info__cs2_info__descriptor) \
    , {0,NULL}, {0,NULL}, {0,NULL}, {0,NULL} }


typedef enum {
  IOT__SERVICE__DEV_P2_P__ACTION_IN_SET_STREAM_INFO__VENDOR_INFO__NOT_SET = 0,
  IOT__SERVICE__DEV_P2_P__ACTION_IN_SET_STREAM_INFO__VENDOR_INFO_CS2_INFO = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__DEV_P2_P__ACTION_IN_SET_STREAM_INFO__VENDOR_INFO)
} Iot__Service__DevP2P__ActionInSetStreamInfo__VendorInfoCase;

struct  _Iot__Service__DevP2P__ActionInSetStreamInfo
{
  ProtobufCMessage base;
  Iot__Service__DevP2P__ActionInSetStreamInfo__VendorInfoCase vendor_info_case;
  union {
    Iot__Service__DevP2P__ActionInSetStreamInfo__Cs2Info *cs2info;
  };
};
#define IOT__SERVICE__DEV_P2_P__ACTION_IN_SET_STREAM_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_p2p__action_in_set_stream_info__descriptor) \
    , IOT__SERVICE__DEV_P2_P__ACTION_IN_SET_STREAM_INFO__VENDOR_INFO__NOT_SET, {0} }


struct  _Iot__Service__DevP2P__ActionOutSetStreamInfo
{
  ProtobufCMessage base;
  /*
   *0-success, 1-vendor not support
   */
  uint32_t code;
};
#define IOT__SERVICE__DEV_P2_P__ACTION_OUT_SET_STREAM_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_p2p__action_out_set_stream_info__descriptor) \
    , 0 }


struct  _Iot__Service__DevP2P__Properties
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__DEV_P2_P__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_p2p__properties__descriptor) \
     }


/* Iot__Service__DevP2P__ActionInSetStreamInfo__Cs2Info methods */
void   iot__service__dev_p2p__action_in_set_stream_info__cs2_info__init
                     (Iot__Service__DevP2P__ActionInSetStreamInfo__Cs2Info         *message);
/* Iot__Service__DevP2P__ActionInSetStreamInfo methods */
void   iot__service__dev_p2p__action_in_set_stream_info__init
                     (Iot__Service__DevP2P__ActionInSetStreamInfo         *message);
size_t iot__service__dev_p2p__action_in_set_stream_info__get_packed_size
                     (const Iot__Service__DevP2P__ActionInSetStreamInfo   *message);
size_t iot__service__dev_p2p__action_in_set_stream_info__pack
                     (const Iot__Service__DevP2P__ActionInSetStreamInfo   *message,
                      uint8_t             *out);
size_t iot__service__dev_p2p__action_in_set_stream_info__pack_to_buffer
                     (const Iot__Service__DevP2P__ActionInSetStreamInfo   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevP2P__ActionInSetStreamInfo *
       iot__service__dev_p2p__action_in_set_stream_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_p2p__action_in_set_stream_info__free_unpacked
                     (Iot__Service__DevP2P__ActionInSetStreamInfo *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__DevP2P__ActionOutSetStreamInfo methods */
void   iot__service__dev_p2p__action_out_set_stream_info__init
                     (Iot__Service__DevP2P__ActionOutSetStreamInfo         *message);
size_t iot__service__dev_p2p__action_out_set_stream_info__get_packed_size
                     (const Iot__Service__DevP2P__ActionOutSetStreamInfo   *message);
size_t iot__service__dev_p2p__action_out_set_stream_info__pack
                     (const Iot__Service__DevP2P__ActionOutSetStreamInfo   *message,
                      uint8_t             *out);
size_t iot__service__dev_p2p__action_out_set_stream_info__pack_to_buffer
                     (const Iot__Service__DevP2P__ActionOutSetStreamInfo   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevP2P__ActionOutSetStreamInfo *
       iot__service__dev_p2p__action_out_set_stream_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_p2p__action_out_set_stream_info__free_unpacked
                     (Iot__Service__DevP2P__ActionOutSetStreamInfo *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__DevP2P__Properties methods */
void   iot__service__dev_p2p__properties__init
                     (Iot__Service__DevP2P__Properties         *message);
size_t iot__service__dev_p2p__properties__get_packed_size
                     (const Iot__Service__DevP2P__Properties   *message);
size_t iot__service__dev_p2p__properties__pack
                     (const Iot__Service__DevP2P__Properties   *message,
                      uint8_t             *out);
size_t iot__service__dev_p2p__properties__pack_to_buffer
                     (const Iot__Service__DevP2P__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevP2P__Properties *
       iot__service__dev_p2p__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_p2p__properties__free_unpacked
                     (Iot__Service__DevP2P__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__DevP2P__ActionInSetStreamInfo__Cs2Info_Closure)
                 (const Iot__Service__DevP2P__ActionInSetStreamInfo__Cs2Info *message,
                  void *closure_data);
typedef void (*Iot__Service__DevP2P__ActionInSetStreamInfo_Closure)
                 (const Iot__Service__DevP2P__ActionInSetStreamInfo *message,
                  void *closure_data);
typedef void (*Iot__Service__DevP2P__ActionOutSetStreamInfo_Closure)
                 (const Iot__Service__DevP2P__ActionOutSetStreamInfo *message,
                  void *closure_data);
typedef void (*Iot__Service__DevP2P__Properties_Closure)
                 (const Iot__Service__DevP2P__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    iot__service__dev_p2p__enum_vendor__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_p2p__action_in_set_stream_info__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_p2p__action_in_set_stream_info__cs2_info__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_p2p__action_out_set_stream_info__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_p2p__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_devP2P_2eproto__INCLUDED */
