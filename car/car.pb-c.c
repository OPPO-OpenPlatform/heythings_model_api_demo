/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: car.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "car.pb-c.h"
void   iot__service__car__action_in_lock_car__init
                     (Iot__Service__Car__ActionInLockCar         *message)
{
  static const Iot__Service__Car__ActionInLockCar init_value = IOT__SERVICE__CAR__ACTION_IN_LOCK_CAR__INIT;
  *message = init_value;
}
size_t iot__service__car__action_in_lock_car__get_packed_size
                     (const Iot__Service__Car__ActionInLockCar *message)
{
  assert(message->base.descriptor == &iot__service__car__action_in_lock_car__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__car__action_in_lock_car__pack
                     (const Iot__Service__Car__ActionInLockCar *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__car__action_in_lock_car__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__car__action_in_lock_car__pack_to_buffer
                     (const Iot__Service__Car__ActionInLockCar *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__car__action_in_lock_car__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__Car__ActionInLockCar *
       iot__service__car__action_in_lock_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__Car__ActionInLockCar *)
     protobuf_c_message_unpack (&iot__service__car__action_in_lock_car__descriptor,
                                allocator, len, data);
}
void   iot__service__car__action_in_lock_car__free_unpacked
                     (Iot__Service__Car__ActionInLockCar *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__car__action_in_lock_car__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__car__action_out_lock_car__init
                     (Iot__Service__Car__ActionOutLockCar         *message)
{
  static const Iot__Service__Car__ActionOutLockCar init_value = IOT__SERVICE__CAR__ACTION_OUT_LOCK_CAR__INIT;
  *message = init_value;
}
size_t iot__service__car__action_out_lock_car__get_packed_size
                     (const Iot__Service__Car__ActionOutLockCar *message)
{
  assert(message->base.descriptor == &iot__service__car__action_out_lock_car__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__car__action_out_lock_car__pack
                     (const Iot__Service__Car__ActionOutLockCar *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__car__action_out_lock_car__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__car__action_out_lock_car__pack_to_buffer
                     (const Iot__Service__Car__ActionOutLockCar *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__car__action_out_lock_car__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__Car__ActionOutLockCar *
       iot__service__car__action_out_lock_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__Car__ActionOutLockCar *)
     protobuf_c_message_unpack (&iot__service__car__action_out_lock_car__descriptor,
                                allocator, len, data);
}
void   iot__service__car__action_out_lock_car__free_unpacked
                     (Iot__Service__Car__ActionOutLockCar *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__car__action_out_lock_car__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__car__action_in_find_car__init
                     (Iot__Service__Car__ActionInFindCar         *message)
{
  static const Iot__Service__Car__ActionInFindCar init_value = IOT__SERVICE__CAR__ACTION_IN_FIND_CAR__INIT;
  *message = init_value;
}
size_t iot__service__car__action_in_find_car__get_packed_size
                     (const Iot__Service__Car__ActionInFindCar *message)
{
  assert(message->base.descriptor == &iot__service__car__action_in_find_car__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__car__action_in_find_car__pack
                     (const Iot__Service__Car__ActionInFindCar *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__car__action_in_find_car__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__car__action_in_find_car__pack_to_buffer
                     (const Iot__Service__Car__ActionInFindCar *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__car__action_in_find_car__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__Car__ActionInFindCar *
       iot__service__car__action_in_find_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__Car__ActionInFindCar *)
     protobuf_c_message_unpack (&iot__service__car__action_in_find_car__descriptor,
                                allocator, len, data);
}
void   iot__service__car__action_in_find_car__free_unpacked
                     (Iot__Service__Car__ActionInFindCar *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__car__action_in_find_car__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__car__action_out_find_car__init
                     (Iot__Service__Car__ActionOutFindCar         *message)
{
  static const Iot__Service__Car__ActionOutFindCar init_value = IOT__SERVICE__CAR__ACTION_OUT_FIND_CAR__INIT;
  *message = init_value;
}
size_t iot__service__car__action_out_find_car__get_packed_size
                     (const Iot__Service__Car__ActionOutFindCar *message)
{
  assert(message->base.descriptor == &iot__service__car__action_out_find_car__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__car__action_out_find_car__pack
                     (const Iot__Service__Car__ActionOutFindCar *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__car__action_out_find_car__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__car__action_out_find_car__pack_to_buffer
                     (const Iot__Service__Car__ActionOutFindCar *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__car__action_out_find_car__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__Car__ActionOutFindCar *
       iot__service__car__action_out_find_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__Car__ActionOutFindCar *)
     protobuf_c_message_unpack (&iot__service__car__action_out_find_car__descriptor,
                                allocator, len, data);
}
void   iot__service__car__action_out_find_car__free_unpacked
                     (Iot__Service__Car__ActionOutFindCar *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__car__action_out_find_car__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__car__action_in_honk_car__init
                     (Iot__Service__Car__ActionInHonkCar         *message)
{
  static const Iot__Service__Car__ActionInHonkCar init_value = IOT__SERVICE__CAR__ACTION_IN_HONK_CAR__INIT;
  *message = init_value;
}
size_t iot__service__car__action_in_honk_car__get_packed_size
                     (const Iot__Service__Car__ActionInHonkCar *message)
{
  assert(message->base.descriptor == &iot__service__car__action_in_honk_car__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__car__action_in_honk_car__pack
                     (const Iot__Service__Car__ActionInHonkCar *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__car__action_in_honk_car__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__car__action_in_honk_car__pack_to_buffer
                     (const Iot__Service__Car__ActionInHonkCar *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__car__action_in_honk_car__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__Car__ActionInHonkCar *
       iot__service__car__action_in_honk_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__Car__ActionInHonkCar *)
     protobuf_c_message_unpack (&iot__service__car__action_in_honk_car__descriptor,
                                allocator, len, data);
}
void   iot__service__car__action_in_honk_car__free_unpacked
                     (Iot__Service__Car__ActionInHonkCar *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__car__action_in_honk_car__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__car__action_out_honk_car__init
                     (Iot__Service__Car__ActionOutHonkCar         *message)
{
  static const Iot__Service__Car__ActionOutHonkCar init_value = IOT__SERVICE__CAR__ACTION_OUT_HONK_CAR__INIT;
  *message = init_value;
}
size_t iot__service__car__action_out_honk_car__get_packed_size
                     (const Iot__Service__Car__ActionOutHonkCar *message)
{
  assert(message->base.descriptor == &iot__service__car__action_out_honk_car__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__car__action_out_honk_car__pack
                     (const Iot__Service__Car__ActionOutHonkCar *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__car__action_out_honk_car__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__car__action_out_honk_car__pack_to_buffer
                     (const Iot__Service__Car__ActionOutHonkCar *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__car__action_out_honk_car__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__Car__ActionOutHonkCar *
       iot__service__car__action_out_honk_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__Car__ActionOutHonkCar *)
     protobuf_c_message_unpack (&iot__service__car__action_out_honk_car__descriptor,
                                allocator, len, data);
}
void   iot__service__car__action_out_honk_car__free_unpacked
                     (Iot__Service__Car__ActionOutHonkCar *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__car__action_out_honk_car__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__car__action_in_flash_car__init
                     (Iot__Service__Car__ActionInFlashCar         *message)
{
  static const Iot__Service__Car__ActionInFlashCar init_value = IOT__SERVICE__CAR__ACTION_IN_FLASH_CAR__INIT;
  *message = init_value;
}
size_t iot__service__car__action_in_flash_car__get_packed_size
                     (const Iot__Service__Car__ActionInFlashCar *message)
{
  assert(message->base.descriptor == &iot__service__car__action_in_flash_car__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__car__action_in_flash_car__pack
                     (const Iot__Service__Car__ActionInFlashCar *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__car__action_in_flash_car__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__car__action_in_flash_car__pack_to_buffer
                     (const Iot__Service__Car__ActionInFlashCar *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__car__action_in_flash_car__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__Car__ActionInFlashCar *
       iot__service__car__action_in_flash_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__Car__ActionInFlashCar *)
     protobuf_c_message_unpack (&iot__service__car__action_in_flash_car__descriptor,
                                allocator, len, data);
}
void   iot__service__car__action_in_flash_car__free_unpacked
                     (Iot__Service__Car__ActionInFlashCar *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__car__action_in_flash_car__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__car__action_out_flash_car__init
                     (Iot__Service__Car__ActionOutFlashCar         *message)
{
  static const Iot__Service__Car__ActionOutFlashCar init_value = IOT__SERVICE__CAR__ACTION_OUT_FLASH_CAR__INIT;
  *message = init_value;
}
size_t iot__service__car__action_out_flash_car__get_packed_size
                     (const Iot__Service__Car__ActionOutFlashCar *message)
{
  assert(message->base.descriptor == &iot__service__car__action_out_flash_car__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__car__action_out_flash_car__pack
                     (const Iot__Service__Car__ActionOutFlashCar *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__car__action_out_flash_car__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__car__action_out_flash_car__pack_to_buffer
                     (const Iot__Service__Car__ActionOutFlashCar *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__car__action_out_flash_car__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__Car__ActionOutFlashCar *
       iot__service__car__action_out_flash_car__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__Car__ActionOutFlashCar *)
     protobuf_c_message_unpack (&iot__service__car__action_out_flash_car__descriptor,
                                allocator, len, data);
}
void   iot__service__car__action_out_flash_car__free_unpacked
                     (Iot__Service__Car__ActionOutFlashCar *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__car__action_out_flash_car__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__car__properties__init
                     (Iot__Service__Car__Properties         *message)
{
  static const Iot__Service__Car__Properties init_value = IOT__SERVICE__CAR__PROPERTIES__INIT;
  *message = init_value;
}
size_t iot__service__car__properties__get_packed_size
                     (const Iot__Service__Car__Properties *message)
{
  assert(message->base.descriptor == &iot__service__car__properties__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__car__properties__pack
                     (const Iot__Service__Car__Properties *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__car__properties__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__car__properties__pack_to_buffer
                     (const Iot__Service__Car__Properties *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__car__properties__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__Car__Properties *
       iot__service__car__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__Car__Properties *)
     protobuf_c_message_unpack (&iot__service__car__properties__descriptor,
                                allocator, len, data);
}
void   iot__service__car__properties__free_unpacked
                     (Iot__Service__Car__Properties *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__car__properties__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
#define iot__service__car__action_in_lock_car__field_descriptors NULL
#define iot__service__car__action_in_lock_car__field_indices_by_name NULL
#define iot__service__car__action_in_lock_car__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__car__action_in_lock_car__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.car.ActionInLockCar",
  "ActionInLockCar",
  "Iot__Service__Car__ActionInLockCar",
  "iot.service.car",
  sizeof(Iot__Service__Car__ActionInLockCar),
  0,
  iot__service__car__action_in_lock_car__field_descriptors,
  iot__service__car__action_in_lock_car__field_indices_by_name,
  0,  iot__service__car__action_in_lock_car__number_ranges,
  (ProtobufCMessageInit) iot__service__car__action_in_lock_car__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define iot__service__car__action_out_lock_car__field_descriptors NULL
#define iot__service__car__action_out_lock_car__field_indices_by_name NULL
#define iot__service__car__action_out_lock_car__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__car__action_out_lock_car__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.car.ActionOutLockCar",
  "ActionOutLockCar",
  "Iot__Service__Car__ActionOutLockCar",
  "iot.service.car",
  sizeof(Iot__Service__Car__ActionOutLockCar),
  0,
  iot__service__car__action_out_lock_car__field_descriptors,
  iot__service__car__action_out_lock_car__field_indices_by_name,
  0,  iot__service__car__action_out_lock_car__number_ranges,
  (ProtobufCMessageInit) iot__service__car__action_out_lock_car__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define iot__service__car__action_in_find_car__field_descriptors NULL
#define iot__service__car__action_in_find_car__field_indices_by_name NULL
#define iot__service__car__action_in_find_car__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__car__action_in_find_car__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.car.ActionInFindCar",
  "ActionInFindCar",
  "Iot__Service__Car__ActionInFindCar",
  "iot.service.car",
  sizeof(Iot__Service__Car__ActionInFindCar),
  0,
  iot__service__car__action_in_find_car__field_descriptors,
  iot__service__car__action_in_find_car__field_indices_by_name,
  0,  iot__service__car__action_in_find_car__number_ranges,
  (ProtobufCMessageInit) iot__service__car__action_in_find_car__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define iot__service__car__action_out_find_car__field_descriptors NULL
#define iot__service__car__action_out_find_car__field_indices_by_name NULL
#define iot__service__car__action_out_find_car__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__car__action_out_find_car__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.car.ActionOutFindCar",
  "ActionOutFindCar",
  "Iot__Service__Car__ActionOutFindCar",
  "iot.service.car",
  sizeof(Iot__Service__Car__ActionOutFindCar),
  0,
  iot__service__car__action_out_find_car__field_descriptors,
  iot__service__car__action_out_find_car__field_indices_by_name,
  0,  iot__service__car__action_out_find_car__number_ranges,
  (ProtobufCMessageInit) iot__service__car__action_out_find_car__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define iot__service__car__action_in_honk_car__field_descriptors NULL
#define iot__service__car__action_in_honk_car__field_indices_by_name NULL
#define iot__service__car__action_in_honk_car__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__car__action_in_honk_car__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.car.ActionInHonkCar",
  "ActionInHonkCar",
  "Iot__Service__Car__ActionInHonkCar",
  "iot.service.car",
  sizeof(Iot__Service__Car__ActionInHonkCar),
  0,
  iot__service__car__action_in_honk_car__field_descriptors,
  iot__service__car__action_in_honk_car__field_indices_by_name,
  0,  iot__service__car__action_in_honk_car__number_ranges,
  (ProtobufCMessageInit) iot__service__car__action_in_honk_car__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define iot__service__car__action_out_honk_car__field_descriptors NULL
#define iot__service__car__action_out_honk_car__field_indices_by_name NULL
#define iot__service__car__action_out_honk_car__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__car__action_out_honk_car__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.car.ActionOutHonkCar",
  "ActionOutHonkCar",
  "Iot__Service__Car__ActionOutHonkCar",
  "iot.service.car",
  sizeof(Iot__Service__Car__ActionOutHonkCar),
  0,
  iot__service__car__action_out_honk_car__field_descriptors,
  iot__service__car__action_out_honk_car__field_indices_by_name,
  0,  iot__service__car__action_out_honk_car__number_ranges,
  (ProtobufCMessageInit) iot__service__car__action_out_honk_car__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define iot__service__car__action_in_flash_car__field_descriptors NULL
#define iot__service__car__action_in_flash_car__field_indices_by_name NULL
#define iot__service__car__action_in_flash_car__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__car__action_in_flash_car__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.car.ActionInFlashCar",
  "ActionInFlashCar",
  "Iot__Service__Car__ActionInFlashCar",
  "iot.service.car",
  sizeof(Iot__Service__Car__ActionInFlashCar),
  0,
  iot__service__car__action_in_flash_car__field_descriptors,
  iot__service__car__action_in_flash_car__field_indices_by_name,
  0,  iot__service__car__action_in_flash_car__number_ranges,
  (ProtobufCMessageInit) iot__service__car__action_in_flash_car__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define iot__service__car__action_out_flash_car__field_descriptors NULL
#define iot__service__car__action_out_flash_car__field_indices_by_name NULL
#define iot__service__car__action_out_flash_car__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__car__action_out_flash_car__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.car.ActionOutFlashCar",
  "ActionOutFlashCar",
  "Iot__Service__Car__ActionOutFlashCar",
  "iot.service.car",
  sizeof(Iot__Service__Car__ActionOutFlashCar),
  0,
  iot__service__car__action_out_flash_car__field_descriptors,
  iot__service__car__action_out_flash_car__field_indices_by_name,
  0,  iot__service__car__action_out_flash_car__number_ranges,
  (ProtobufCMessageInit) iot__service__car__action_out_flash_car__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__car__properties__field_descriptors[6] =
{
  {
    "remainingRange",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Car__Properties, remainingrange),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "oilRemainingRange",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Car__Properties, oilremainingrange),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "elecRemainingRange",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Car__Properties, elecremainingrange),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "windowOnOff",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Car__Properties, windowonoff),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "lockStatus",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Car__Properties, lockstatus),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "skylightOnOff",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Car__Properties, skylightonoff),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__car__properties__field_indices_by_name[] = {
  2,   /* field[2] = elecRemainingRange */
  4,   /* field[4] = lockStatus */
  1,   /* field[1] = oilRemainingRange */
  0,   /* field[0] = remainingRange */
  5,   /* field[5] = skylightOnOff */
  3,   /* field[3] = windowOnOff */
};
static const ProtobufCIntRange iot__service__car__properties__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 8, 5 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor iot__service__car__properties__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.car.Properties",
  "Properties",
  "Iot__Service__Car__Properties",
  "iot.service.car",
  sizeof(Iot__Service__Car__Properties),
  6,
  iot__service__car__properties__field_descriptors,
  iot__service__car__properties__field_indices_by_name,
  2,  iot__service__car__properties__number_ranges,
  (ProtobufCMessageInit) iot__service__car__properties__init,
  NULL,NULL,NULL    /* reserved[123] */
};