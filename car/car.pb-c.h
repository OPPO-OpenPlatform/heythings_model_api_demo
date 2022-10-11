/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: car.proto */

#ifndef PROTOBUF_C_car_2eproto__INCLUDED
#define PROTOBUF_C_car_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Iot__Service__Car__ActionInLockCar Iot__Service__Car__ActionInLockCar;
typedef struct _Iot__Service__Car__ActionOutLockCar Iot__Service__Car__ActionOutLockCar;
typedef struct _Iot__Service__Car__ActionInFindCar Iot__Service__Car__ActionInFindCar;
typedef struct _Iot__Service__Car__ActionOutFindCar Iot__Service__Car__ActionOutFindCar;
typedef struct _Iot__Service__Car__ActionInHonkCar Iot__Service__Car__ActionInHonkCar;
typedef struct _Iot__Service__Car__ActionOutHonkCar Iot__Service__Car__ActionOutHonkCar;
typedef struct _Iot__Service__Car__ActionInFlashCar Iot__Service__Car__ActionInFlashCar;
typedef struct _Iot__Service__Car__ActionOutFlashCar Iot__Service__Car__ActionOutFlashCar;
typedef struct _Iot__Service__Car__Properties Iot__Service__Car__Properties;


/* --- enums --- */


/* --- messages --- */

struct  _Iot__Service__Car__ActionInLockCar
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__CAR__ACTION_IN_LOCK_CAR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__car__action_in_lock_car__descriptor) \
     }


struct  _Iot__Service__Car__ActionOutLockCar
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__CAR__ACTION_OUT_LOCK_CAR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__car__action_out_lock_car__descriptor) \
     }


struct  _Iot__Service__Car__ActionInFindCar
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__CAR__ACTION_IN_FIND_CAR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__car__action_in_find_car__descriptor) \
     }


struct  _Iot__Service__Car__ActionOutFindCar
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__CAR__ACTION_OUT_FIND_CAR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__car__action_out_find_car__descriptor) \
     }


struct  _Iot__Service__Car__ActionInHonkCar
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__CAR__ACTION_IN_HONK_CAR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__car__action_in_honk_car__descriptor) \
     }


struct  _Iot__Service__Car__ActionOutHonkCar
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__CAR__ACTION_OUT_HONK_CAR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__car__action_out_honk_car__descriptor) \
     }


struct  _Iot__Service__Car__ActionInFlashCar
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__CAR__ACTION_IN_FLASH_CAR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__car__action_in_flash_car__descriptor) \
     }


struct  _Iot__Service__Car__ActionOutFlashCar
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__CAR__ACTION_OUT_FLASH_CAR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__car__action_out_flash_car__descriptor) \
     }


struct  _Iot__Service__Car__Properties
{
  ProtobufCMessage base;
  uint32_t remainingrange;
  uint32_t oilremainingrange;
  uint32_t elecremainingrange;
  protobuf_c_boolean windowonoff;
  protobuf_c_boolean lockstatus;
  /*
   * action lockCar(ActionInLockCar) returns (ActionOutLockCar) = 6;
   * action findCar(ActionInFindCar) returns (ActionOutFindCar) = 7;
   */
  /*
   * action honkCar(ActionInHonkCar) returns (ActionOutHonkCar) = 9;
   * action flashCar(ActionInFlashCar) returns (ActionOutFlashCar) = 10;
   */
  protobuf_c_boolean skylightonoff;
};
#define IOT__SERVICE__CAR__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__car__properties__descriptor) \
    , 0, 0, 0, 0, 0, 0 }


/* Iot__Service__Car__ActionInLockCar methods */
void   iot__service__car__action_in_lock_car__init
                     (Iot__Service__Car__ActionInLockCar         *message);
size_t iot__service__car__action_in_lock_car__get_packed_size
                     (const Iot__Service__Car__ActionInLockCar   *message);
size_t iot__service__car__action_in_lock_car__pack
                     (const Iot__Service__Car__ActionInLockCar   *message,
                      uint8_t             *out);
size_t iot__service__car__action_in_lock_car__pack_to_buffer
                     (const Iot__Service__Car__ActionInLockCar   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Car__ActionInLockCar *
       iot__service__car__action_in_lock_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__car__action_in_lock_car__free_unpacked
                     (Iot__Service__Car__ActionInLockCar *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Car__ActionOutLockCar methods */
void   iot__service__car__action_out_lock_car__init
                     (Iot__Service__Car__ActionOutLockCar         *message);
size_t iot__service__car__action_out_lock_car__get_packed_size
                     (const Iot__Service__Car__ActionOutLockCar   *message);
size_t iot__service__car__action_out_lock_car__pack
                     (const Iot__Service__Car__ActionOutLockCar   *message,
                      uint8_t             *out);
size_t iot__service__car__action_out_lock_car__pack_to_buffer
                     (const Iot__Service__Car__ActionOutLockCar   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Car__ActionOutLockCar *
       iot__service__car__action_out_lock_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__car__action_out_lock_car__free_unpacked
                     (Iot__Service__Car__ActionOutLockCar *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Car__ActionInFindCar methods */
void   iot__service__car__action_in_find_car__init
                     (Iot__Service__Car__ActionInFindCar         *message);
size_t iot__service__car__action_in_find_car__get_packed_size
                     (const Iot__Service__Car__ActionInFindCar   *message);
size_t iot__service__car__action_in_find_car__pack
                     (const Iot__Service__Car__ActionInFindCar   *message,
                      uint8_t             *out);
size_t iot__service__car__action_in_find_car__pack_to_buffer
                     (const Iot__Service__Car__ActionInFindCar   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Car__ActionInFindCar *
       iot__service__car__action_in_find_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__car__action_in_find_car__free_unpacked
                     (Iot__Service__Car__ActionInFindCar *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Car__ActionOutFindCar methods */
void   iot__service__car__action_out_find_car__init
                     (Iot__Service__Car__ActionOutFindCar         *message);
size_t iot__service__car__action_out_find_car__get_packed_size
                     (const Iot__Service__Car__ActionOutFindCar   *message);
size_t iot__service__car__action_out_find_car__pack
                     (const Iot__Service__Car__ActionOutFindCar   *message,
                      uint8_t             *out);
size_t iot__service__car__action_out_find_car__pack_to_buffer
                     (const Iot__Service__Car__ActionOutFindCar   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Car__ActionOutFindCar *
       iot__service__car__action_out_find_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__car__action_out_find_car__free_unpacked
                     (Iot__Service__Car__ActionOutFindCar *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Car__ActionInHonkCar methods */
void   iot__service__car__action_in_honk_car__init
                     (Iot__Service__Car__ActionInHonkCar         *message);
size_t iot__service__car__action_in_honk_car__get_packed_size
                     (const Iot__Service__Car__ActionInHonkCar   *message);
size_t iot__service__car__action_in_honk_car__pack
                     (const Iot__Service__Car__ActionInHonkCar   *message,
                      uint8_t             *out);
size_t iot__service__car__action_in_honk_car__pack_to_buffer
                     (const Iot__Service__Car__ActionInHonkCar   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Car__ActionInHonkCar *
       iot__service__car__action_in_honk_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__car__action_in_honk_car__free_unpacked
                     (Iot__Service__Car__ActionInHonkCar *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Car__ActionOutHonkCar methods */
void   iot__service__car__action_out_honk_car__init
                     (Iot__Service__Car__ActionOutHonkCar         *message);
size_t iot__service__car__action_out_honk_car__get_packed_size
                     (const Iot__Service__Car__ActionOutHonkCar   *message);
size_t iot__service__car__action_out_honk_car__pack
                     (const Iot__Service__Car__ActionOutHonkCar   *message,
                      uint8_t             *out);
size_t iot__service__car__action_out_honk_car__pack_to_buffer
                     (const Iot__Service__Car__ActionOutHonkCar   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Car__ActionOutHonkCar *
       iot__service__car__action_out_honk_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__car__action_out_honk_car__free_unpacked
                     (Iot__Service__Car__ActionOutHonkCar *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Car__ActionInFlashCar methods */
void   iot__service__car__action_in_flash_car__init
                     (Iot__Service__Car__ActionInFlashCar         *message);
size_t iot__service__car__action_in_flash_car__get_packed_size
                     (const Iot__Service__Car__ActionInFlashCar   *message);
size_t iot__service__car__action_in_flash_car__pack
                     (const Iot__Service__Car__ActionInFlashCar   *message,
                      uint8_t             *out);
size_t iot__service__car__action_in_flash_car__pack_to_buffer
                     (const Iot__Service__Car__ActionInFlashCar   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Car__ActionInFlashCar *
       iot__service__car__action_in_flash_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__car__action_in_flash_car__free_unpacked
                     (Iot__Service__Car__ActionInFlashCar *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Car__ActionOutFlashCar methods */
void   iot__service__car__action_out_flash_car__init
                     (Iot__Service__Car__ActionOutFlashCar         *message);
size_t iot__service__car__action_out_flash_car__get_packed_size
                     (const Iot__Service__Car__ActionOutFlashCar   *message);
size_t iot__service__car__action_out_flash_car__pack
                     (const Iot__Service__Car__ActionOutFlashCar   *message,
                      uint8_t             *out);
size_t iot__service__car__action_out_flash_car__pack_to_buffer
                     (const Iot__Service__Car__ActionOutFlashCar   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Car__ActionOutFlashCar *
       iot__service__car__action_out_flash_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__car__action_out_flash_car__free_unpacked
                     (Iot__Service__Car__ActionOutFlashCar *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Car__Properties methods */
void   iot__service__car__properties__init
                     (Iot__Service__Car__Properties         *message);
size_t iot__service__car__properties__get_packed_size
                     (const Iot__Service__Car__Properties   *message);
size_t iot__service__car__properties__pack
                     (const Iot__Service__Car__Properties   *message,
                      uint8_t             *out);
size_t iot__service__car__properties__pack_to_buffer
                     (const Iot__Service__Car__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Car__Properties *
       iot__service__car__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__car__properties__free_unpacked
                     (Iot__Service__Car__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__Car__ActionInLockCar_Closure)
                 (const Iot__Service__Car__ActionInLockCar *message,
                  void *closure_data);
typedef void (*Iot__Service__Car__ActionOutLockCar_Closure)
                 (const Iot__Service__Car__ActionOutLockCar *message,
                  void *closure_data);
typedef void (*Iot__Service__Car__ActionInFindCar_Closure)
                 (const Iot__Service__Car__ActionInFindCar *message,
                  void *closure_data);
typedef void (*Iot__Service__Car__ActionOutFindCar_Closure)
                 (const Iot__Service__Car__ActionOutFindCar *message,
                  void *closure_data);
typedef void (*Iot__Service__Car__ActionInHonkCar_Closure)
                 (const Iot__Service__Car__ActionInHonkCar *message,
                  void *closure_data);
typedef void (*Iot__Service__Car__ActionOutHonkCar_Closure)
                 (const Iot__Service__Car__ActionOutHonkCar *message,
                  void *closure_data);
typedef void (*Iot__Service__Car__ActionInFlashCar_Closure)
                 (const Iot__Service__Car__ActionInFlashCar *message,
                  void *closure_data);
typedef void (*Iot__Service__Car__ActionOutFlashCar_Closure)
                 (const Iot__Service__Car__ActionOutFlashCar *message,
                  void *closure_data);
typedef void (*Iot__Service__Car__Properties_Closure)
                 (const Iot__Service__Car__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor iot__service__car__action_in_lock_car__descriptor;
extern const ProtobufCMessageDescriptor iot__service__car__action_out_lock_car__descriptor;
extern const ProtobufCMessageDescriptor iot__service__car__action_in_find_car__descriptor;
extern const ProtobufCMessageDescriptor iot__service__car__action_out_find_car__descriptor;
extern const ProtobufCMessageDescriptor iot__service__car__action_in_honk_car__descriptor;
extern const ProtobufCMessageDescriptor iot__service__car__action_out_honk_car__descriptor;
extern const ProtobufCMessageDescriptor iot__service__car__action_in_flash_car__descriptor;
extern const ProtobufCMessageDescriptor iot__service__car__action_out_flash_car__descriptor;
extern const ProtobufCMessageDescriptor iot__service__car__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_car_2eproto__INCLUDED */
