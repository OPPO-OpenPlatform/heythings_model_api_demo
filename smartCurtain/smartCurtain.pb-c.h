/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: smartCurtain.proto */

#ifndef PROTOBUF_C_smartCurtain_2eproto__INCLUDED
#define PROTOBUF_C_smartCurtain_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Iot__Service__SmartCurtain__ActionInOpen Iot__Service__SmartCurtain__ActionInOpen;
typedef struct _Iot__Service__SmartCurtain__ActionOutOpen Iot__Service__SmartCurtain__ActionOutOpen;
typedef struct _Iot__Service__SmartCurtain__ActionInClose Iot__Service__SmartCurtain__ActionInClose;
typedef struct _Iot__Service__SmartCurtain__ActionOutClose Iot__Service__SmartCurtain__ActionOutClose;
typedef struct _Iot__Service__SmartCurtain__Properties Iot__Service__SmartCurtain__Properties;


/* --- enums --- */

typedef enum _Iot__Service__SmartCurtain__OpenCloseState {
  IOT__SERVICE__SMART_CURTAIN__OPEN_CLOSE_STATE__STATE_OPEN = 0,
  IOT__SERVICE__SMART_CURTAIN__OPEN_CLOSE_STATE__STATE_CLOSE = 1,
  IOT__SERVICE__SMART_CURTAIN__OPEN_CLOSE_STATE__STATE_OPENING = 2,
  IOT__SERVICE__SMART_CURTAIN__OPEN_CLOSE_STATE__STATE_CLOSING = 3,
  IOT__SERVICE__SMART_CURTAIN__OPEN_CLOSE_STATE__STATE_STOP = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__SMART_CURTAIN__OPEN_CLOSE_STATE)
} Iot__Service__SmartCurtain__OpenCloseState;

/* --- messages --- */

struct  _Iot__Service__SmartCurtain__ActionInOpen
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__SMART_CURTAIN__ACTION_IN_OPEN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__smart_curtain__action_in_open__descriptor) \
     }


struct  _Iot__Service__SmartCurtain__ActionOutOpen
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__SMART_CURTAIN__ACTION_OUT_OPEN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__smart_curtain__action_out_open__descriptor) \
     }


struct  _Iot__Service__SmartCurtain__ActionInClose
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__SMART_CURTAIN__ACTION_IN_CLOSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__smart_curtain__action_in_close__descriptor) \
     }


struct  _Iot__Service__SmartCurtain__ActionOutClose
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__SMART_CURTAIN__ACTION_OUT_CLOSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__smart_curtain__action_out_close__descriptor) \
     }


struct  _Iot__Service__SmartCurtain__Properties
{
  ProtobufCMessage base;
  protobuf_c_boolean power;
  Iot__Service__SmartCurtain__OpenCloseState openclosestate;
  /*
   * action open(ActionInOpen) returns(ActionOutOpen) = 4;
   * action close(ActionInClose) returns(ActionOutClose) = 5;
   */
  uint32_t openlevel;
};
#define IOT__SERVICE__SMART_CURTAIN__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__smart_curtain__properties__descriptor) \
    , 0, IOT__SERVICE__SMART_CURTAIN__OPEN_CLOSE_STATE__STATE_OPEN, 0 }


/* Iot__Service__SmartCurtain__ActionInOpen methods */
void   iot__service__smart_curtain__action_in_open__init
                     (Iot__Service__SmartCurtain__ActionInOpen         *message);
size_t iot__service__smart_curtain__action_in_open__get_packed_size
                     (const Iot__Service__SmartCurtain__ActionInOpen   *message);
size_t iot__service__smart_curtain__action_in_open__pack
                     (const Iot__Service__SmartCurtain__ActionInOpen   *message,
                      uint8_t             *out);
size_t iot__service__smart_curtain__action_in_open__pack_to_buffer
                     (const Iot__Service__SmartCurtain__ActionInOpen   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SmartCurtain__ActionInOpen *
       iot__service__smart_curtain__action_in_open__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__smart_curtain__action_in_open__free_unpacked
                     (Iot__Service__SmartCurtain__ActionInOpen *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__SmartCurtain__ActionOutOpen methods */
void   iot__service__smart_curtain__action_out_open__init
                     (Iot__Service__SmartCurtain__ActionOutOpen         *message);
size_t iot__service__smart_curtain__action_out_open__get_packed_size
                     (const Iot__Service__SmartCurtain__ActionOutOpen   *message);
size_t iot__service__smart_curtain__action_out_open__pack
                     (const Iot__Service__SmartCurtain__ActionOutOpen   *message,
                      uint8_t             *out);
size_t iot__service__smart_curtain__action_out_open__pack_to_buffer
                     (const Iot__Service__SmartCurtain__ActionOutOpen   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SmartCurtain__ActionOutOpen *
       iot__service__smart_curtain__action_out_open__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__smart_curtain__action_out_open__free_unpacked
                     (Iot__Service__SmartCurtain__ActionOutOpen *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__SmartCurtain__ActionInClose methods */
void   iot__service__smart_curtain__action_in_close__init
                     (Iot__Service__SmartCurtain__ActionInClose         *message);
size_t iot__service__smart_curtain__action_in_close__get_packed_size
                     (const Iot__Service__SmartCurtain__ActionInClose   *message);
size_t iot__service__smart_curtain__action_in_close__pack
                     (const Iot__Service__SmartCurtain__ActionInClose   *message,
                      uint8_t             *out);
size_t iot__service__smart_curtain__action_in_close__pack_to_buffer
                     (const Iot__Service__SmartCurtain__ActionInClose   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SmartCurtain__ActionInClose *
       iot__service__smart_curtain__action_in_close__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__smart_curtain__action_in_close__free_unpacked
                     (Iot__Service__SmartCurtain__ActionInClose *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__SmartCurtain__ActionOutClose methods */
void   iot__service__smart_curtain__action_out_close__init
                     (Iot__Service__SmartCurtain__ActionOutClose         *message);
size_t iot__service__smart_curtain__action_out_close__get_packed_size
                     (const Iot__Service__SmartCurtain__ActionOutClose   *message);
size_t iot__service__smart_curtain__action_out_close__pack
                     (const Iot__Service__SmartCurtain__ActionOutClose   *message,
                      uint8_t             *out);
size_t iot__service__smart_curtain__action_out_close__pack_to_buffer
                     (const Iot__Service__SmartCurtain__ActionOutClose   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SmartCurtain__ActionOutClose *
       iot__service__smart_curtain__action_out_close__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__smart_curtain__action_out_close__free_unpacked
                     (Iot__Service__SmartCurtain__ActionOutClose *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__SmartCurtain__Properties methods */
void   iot__service__smart_curtain__properties__init
                     (Iot__Service__SmartCurtain__Properties         *message);
size_t iot__service__smart_curtain__properties__get_packed_size
                     (const Iot__Service__SmartCurtain__Properties   *message);
size_t iot__service__smart_curtain__properties__pack
                     (const Iot__Service__SmartCurtain__Properties   *message,
                      uint8_t             *out);
size_t iot__service__smart_curtain__properties__pack_to_buffer
                     (const Iot__Service__SmartCurtain__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SmartCurtain__Properties *
       iot__service__smart_curtain__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__smart_curtain__properties__free_unpacked
                     (Iot__Service__SmartCurtain__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__SmartCurtain__ActionInOpen_Closure)
                 (const Iot__Service__SmartCurtain__ActionInOpen *message,
                  void *closure_data);
typedef void (*Iot__Service__SmartCurtain__ActionOutOpen_Closure)
                 (const Iot__Service__SmartCurtain__ActionOutOpen *message,
                  void *closure_data);
typedef void (*Iot__Service__SmartCurtain__ActionInClose_Closure)
                 (const Iot__Service__SmartCurtain__ActionInClose *message,
                  void *closure_data);
typedef void (*Iot__Service__SmartCurtain__ActionOutClose_Closure)
                 (const Iot__Service__SmartCurtain__ActionOutClose *message,
                  void *closure_data);
typedef void (*Iot__Service__SmartCurtain__Properties_Closure)
                 (const Iot__Service__SmartCurtain__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    iot__service__smart_curtain__open_close_state__descriptor;
extern const ProtobufCMessageDescriptor iot__service__smart_curtain__action_in_open__descriptor;
extern const ProtobufCMessageDescriptor iot__service__smart_curtain__action_out_open__descriptor;
extern const ProtobufCMessageDescriptor iot__service__smart_curtain__action_in_close__descriptor;
extern const ProtobufCMessageDescriptor iot__service__smart_curtain__action_out_close__descriptor;
extern const ProtobufCMessageDescriptor iot__service__smart_curtain__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_smartCurtain_2eproto__INCLUDED */
