/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: iceStorageTank.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "iceStorageTank.pb-c.h"
void   iot__service__ice_storage_tank__properties__init
                     (Iot__Service__IceStorageTank__Properties         *message)
{
  static const Iot__Service__IceStorageTank__Properties init_value = IOT__SERVICE__ICE_STORAGE_TANK__PROPERTIES__INIT;
  *message = init_value;
}
size_t iot__service__ice_storage_tank__properties__get_packed_size
                     (const Iot__Service__IceStorageTank__Properties *message)
{
  assert(message->base.descriptor == &iot__service__ice_storage_tank__properties__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__ice_storage_tank__properties__pack
                     (const Iot__Service__IceStorageTank__Properties *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__ice_storage_tank__properties__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__ice_storage_tank__properties__pack_to_buffer
                     (const Iot__Service__IceStorageTank__Properties *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__ice_storage_tank__properties__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__IceStorageTank__Properties *
       iot__service__ice_storage_tank__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__IceStorageTank__Properties *)
     protobuf_c_message_unpack (&iot__service__ice_storage_tank__properties__descriptor,
                                allocator, len, data);
}
void   iot__service__ice_storage_tank__properties__free_unpacked
                     (Iot__Service__IceStorageTank__Properties *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__ice_storage_tank__properties__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor iot__service__ice_storage_tank__properties__field_descriptors[8] =
{
  {
    "power",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__IceStorageTank__Properties, power),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "iceStorageRate",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__IceStorageTank__Properties, icestoragerate),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "iceThickness",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__IceStorageTank__Properties, icethickness),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "iceStorageCapacity",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__IceStorageTank__Properties, icestoragecapacity),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "supplyWaterTemp",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__IceStorageTank__Properties, supplywatertemp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "currentTemperature",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__IceStorageTank__Properties, currenttemperature),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "targetTemperature",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__IceStorageTank__Properties, targettemperature),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "currentPres1",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__IceStorageTank__Properties, currentpres1),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__ice_storage_tank__properties__field_indices_by_name[] = {
  7,   /* field[7] = currentPres1 */
  5,   /* field[5] = currentTemperature */
  3,   /* field[3] = iceStorageCapacity */
  1,   /* field[1] = iceStorageRate */
  2,   /* field[2] = iceThickness */
  0,   /* field[0] = power */
  4,   /* field[4] = supplyWaterTemp */
  6,   /* field[6] = targetTemperature */
};
static const ProtobufCIntRange iot__service__ice_storage_tank__properties__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor iot__service__ice_storage_tank__properties__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.iceStorageTank.Properties",
  "Properties",
  "Iot__Service__IceStorageTank__Properties",
  "iot.service.iceStorageTank",
  sizeof(Iot__Service__IceStorageTank__Properties),
  8,
  iot__service__ice_storage_tank__properties__field_descriptors,
  iot__service__ice_storage_tank__properties__field_indices_by_name,
  1,  iot__service__ice_storage_tank__properties__number_ranges,
  (ProtobufCMessageInit) iot__service__ice_storage_tank__properties__init,
  NULL,NULL,NULL    /* reserved[123] */
};
