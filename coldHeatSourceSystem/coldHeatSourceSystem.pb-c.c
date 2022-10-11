/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: coldHeatSourceSystem.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "coldHeatSourceSystem.pb-c.h"
void   iot__service__cold_heat_source_system__properties__init
                     (Iot__Service__ColdHeatSourceSystem__Properties         *message)
{
  static const Iot__Service__ColdHeatSourceSystem__Properties init_value = IOT__SERVICE__COLD_HEAT_SOURCE_SYSTEM__PROPERTIES__INIT;
  *message = init_value;
}
size_t iot__service__cold_heat_source_system__properties__get_packed_size
                     (const Iot__Service__ColdHeatSourceSystem__Properties *message)
{
  assert(message->base.descriptor == &iot__service__cold_heat_source_system__properties__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__cold_heat_source_system__properties__pack
                     (const Iot__Service__ColdHeatSourceSystem__Properties *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__cold_heat_source_system__properties__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__cold_heat_source_system__properties__pack_to_buffer
                     (const Iot__Service__ColdHeatSourceSystem__Properties *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__cold_heat_source_system__properties__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__ColdHeatSourceSystem__Properties *
       iot__service__cold_heat_source_system__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__ColdHeatSourceSystem__Properties *)
     protobuf_c_message_unpack (&iot__service__cold_heat_source_system__properties__descriptor,
                                allocator, len, data);
}
void   iot__service__cold_heat_source_system__properties__free_unpacked
                     (Iot__Service__ColdHeatSourceSystem__Properties *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__cold_heat_source_system__properties__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor iot__service__cold_heat_source_system__properties__field_descriptors[2] =
{
  {
    "power",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ColdHeatSourceSystem__Properties, power),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "coldHeatSourceMode",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ColdHeatSourceSystem__Properties, coldheatsourcemode),
    &iot__service__cold_heat_source_system__cold_heat_source_mode__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__cold_heat_source_system__properties__field_indices_by_name[] = {
  1,   /* field[1] = coldHeatSourceMode */
  0,   /* field[0] = power */
};
static const ProtobufCIntRange iot__service__cold_heat_source_system__properties__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor iot__service__cold_heat_source_system__properties__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.coldHeatSourceSystem.Properties",
  "Properties",
  "Iot__Service__ColdHeatSourceSystem__Properties",
  "iot.service.coldHeatSourceSystem",
  sizeof(Iot__Service__ColdHeatSourceSystem__Properties),
  2,
  iot__service__cold_heat_source_system__properties__field_descriptors,
  iot__service__cold_heat_source_system__properties__field_indices_by_name,
  1,  iot__service__cold_heat_source_system__properties__number_ranges,
  (ProtobufCMessageInit) iot__service__cold_heat_source_system__properties__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue iot__service__cold_heat_source_system__cold_heat_source_mode__enum_values_by_number[4] =
{
  { "NONE", "IOT__SERVICE__COLD_HEAT_SOURCE_SYSTEM__COLD_HEAT_SOURCE_MODE__NONE", 0 },
  { "ICE_MELTING", "IOT__SERVICE__COLD_HEAT_SOURCE_SYSTEM__COLD_HEAT_SOURCE_MODE__ICE_MELTING", 1 },
  { "ICE_MAKING", "IOT__SERVICE__COLD_HEAT_SOURCE_SYSTEM__COLD_HEAT_SOURCE_MODE__ICE_MAKING", 2 },
  { "COOLING", "IOT__SERVICE__COLD_HEAT_SOURCE_SYSTEM__COLD_HEAT_SOURCE_MODE__COOLING", 3 },
};
static const ProtobufCIntRange iot__service__cold_heat_source_system__cold_heat_source_mode__value_ranges[] = {
{0, 0},{0, 4}
};
static const ProtobufCEnumValueIndex iot__service__cold_heat_source_system__cold_heat_source_mode__enum_values_by_name[4] =
{
  { "COOLING", 3 },
  { "ICE_MAKING", 2 },
  { "ICE_MELTING", 1 },
  { "NONE", 0 },
};
const ProtobufCEnumDescriptor iot__service__cold_heat_source_system__cold_heat_source_mode__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "iot.service.coldHeatSourceSystem.ColdHeatSourceMode",
  "ColdHeatSourceMode",
  "Iot__Service__ColdHeatSourceSystem__ColdHeatSourceMode",
  "iot.service.coldHeatSourceSystem",
  4,
  iot__service__cold_heat_source_system__cold_heat_source_mode__enum_values_by_number,
  4,
  iot__service__cold_heat_source_system__cold_heat_source_mode__enum_values_by_name,
  1,
  iot__service__cold_heat_source_system__cold_heat_source_mode__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};