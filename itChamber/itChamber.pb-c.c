/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: itChamber.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "itChamber.pb-c.h"
void   iot__service__it_chamber__properties__init
                     (Iot__Service__ItChamber__Properties         *message)
{
  static const Iot__Service__ItChamber__Properties init_value = IOT__SERVICE__IT_CHAMBER__PROPERTIES__INIT;
  *message = init_value;
}
size_t iot__service__it_chamber__properties__get_packed_size
                     (const Iot__Service__ItChamber__Properties *message)
{
  assert(message->base.descriptor == &iot__service__it_chamber__properties__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__it_chamber__properties__pack
                     (const Iot__Service__ItChamber__Properties *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__it_chamber__properties__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__it_chamber__properties__pack_to_buffer
                     (const Iot__Service__ItChamber__Properties *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__it_chamber__properties__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__ItChamber__Properties *
       iot__service__it_chamber__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__ItChamber__Properties *)
     protobuf_c_message_unpack (&iot__service__it_chamber__properties__descriptor,
                                allocator, len, data);
}
void   iot__service__it_chamber__properties__free_unpacked
                     (Iot__Service__ItChamber__Properties *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__it_chamber__properties__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor iot__service__it_chamber__properties__field_descriptors[5] =
{
  {
    "power",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ItChamber__Properties, power),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "devLable",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ItChamber__Properties, devlable),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "currentTemperature",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ItChamber__Properties, currenttemperature),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "targetTemperature",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ItChamber__Properties, targettemperature),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "itChamberLevel",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ItChamber__Properties, itchamberlevel),
    &iot__service__it_chamber__it_chamber_level__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__it_chamber__properties__field_indices_by_name[] = {
  2,   /* field[2] = currentTemperature */
  1,   /* field[1] = devLable */
  4,   /* field[4] = itChamberLevel */
  0,   /* field[0] = power */
  3,   /* field[3] = targetTemperature */
};
static const ProtobufCIntRange iot__service__it_chamber__properties__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor iot__service__it_chamber__properties__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.itChamber.Properties",
  "Properties",
  "Iot__Service__ItChamber__Properties",
  "iot.service.itChamber",
  sizeof(Iot__Service__ItChamber__Properties),
  5,
  iot__service__it_chamber__properties__field_descriptors,
  iot__service__it_chamber__properties__field_indices_by_name,
  1,  iot__service__it_chamber__properties__number_ranges,
  (ProtobufCMessageInit) iot__service__it_chamber__properties__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue iot__service__it_chamber__it_chamber_level__enum_values_by_number[7] =
{
  { "SOFT_FREEZING", "IOT__SERVICE__IT_CHAMBER__IT_CHAMBER_LEVEL__SOFT_FREEZING", 0 },
  { "ZERO_PRESERVATION", "IOT__SERVICE__IT_CHAMBER__IT_CHAMBER_LEVEL__ZERO_PRESERVATION", 1 },
  { "COLE_DRINK", "IOT__SERVICE__IT_CHAMBER__IT_CHAMBER_LEVEL__COLE_DRINK", 2 },
  { "FRUIT", "IOT__SERVICE__IT_CHAMBER__IT_CHAMBER_LEVEL__FRUIT", 3 },
  { "SLIGHT_FREEZING", "IOT__SERVICE__IT_CHAMBER__IT_CHAMBER_LEVEL__SLIGHT_FREEZING", 4 },
  { "DRY_AREA", "IOT__SERVICE__IT_CHAMBER__IT_CHAMBER_LEVEL__DRY_AREA", 5 },
  { "ICE_TEMP", "IOT__SERVICE__IT_CHAMBER__IT_CHAMBER_LEVEL__ICE_TEMP", 6 },
};
static const ProtobufCIntRange iot__service__it_chamber__it_chamber_level__value_ranges[] = {
{0, 0},{0, 7}
};
static const ProtobufCEnumValueIndex iot__service__it_chamber__it_chamber_level__enum_values_by_name[7] =
{
  { "COLE_DRINK", 2 },
  { "DRY_AREA", 5 },
  { "FRUIT", 3 },
  { "ICE_TEMP", 6 },
  { "SLIGHT_FREEZING", 4 },
  { "SOFT_FREEZING", 0 },
  { "ZERO_PRESERVATION", 1 },
};
const ProtobufCEnumDescriptor iot__service__it_chamber__it_chamber_level__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "iot.service.itChamber.ItChamberLevel",
  "ItChamberLevel",
  "Iot__Service__ItChamber__ItChamberLevel",
  "iot.service.itChamber",
  7,
  iot__service__it_chamber__it_chamber_level__enum_values_by_number,
  7,
  iot__service__it_chamber__it_chamber_level__enum_values_by_name,
  1,
  iot__service__it_chamber__it_chamber_level__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};