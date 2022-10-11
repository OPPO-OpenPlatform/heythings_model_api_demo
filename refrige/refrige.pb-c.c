/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: refrige.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "refrige.pb-c.h"
void   iot__service__refrige__event_open_alarm__init
                     (Iot__Service__Refrige__EventOpenAlarm         *message)
{
  static const Iot__Service__Refrige__EventOpenAlarm init_value = IOT__SERVICE__REFRIGE__EVENT_OPEN_ALARM__INIT;
  *message = init_value;
}
size_t iot__service__refrige__event_open_alarm__get_packed_size
                     (const Iot__Service__Refrige__EventOpenAlarm *message)
{
  assert(message->base.descriptor == &iot__service__refrige__event_open_alarm__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__refrige__event_open_alarm__pack
                     (const Iot__Service__Refrige__EventOpenAlarm *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__refrige__event_open_alarm__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__refrige__event_open_alarm__pack_to_buffer
                     (const Iot__Service__Refrige__EventOpenAlarm *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__refrige__event_open_alarm__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__Refrige__EventOpenAlarm *
       iot__service__refrige__event_open_alarm__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__Refrige__EventOpenAlarm *)
     protobuf_c_message_unpack (&iot__service__refrige__event_open_alarm__descriptor,
                                allocator, len, data);
}
void   iot__service__refrige__event_open_alarm__free_unpacked
                     (Iot__Service__Refrige__EventOpenAlarm *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__refrige__event_open_alarm__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__refrige__properties__init
                     (Iot__Service__Refrige__Properties         *message)
{
  static const Iot__Service__Refrige__Properties init_value = IOT__SERVICE__REFRIGE__PROPERTIES__INIT;
  *message = init_value;
}
size_t iot__service__refrige__properties__get_packed_size
                     (const Iot__Service__Refrige__Properties *message)
{
  assert(message->base.descriptor == &iot__service__refrige__properties__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__refrige__properties__pack
                     (const Iot__Service__Refrige__Properties *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__refrige__properties__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__refrige__properties__pack_to_buffer
                     (const Iot__Service__Refrige__Properties *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__refrige__properties__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__Refrige__Properties *
       iot__service__refrige__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__Refrige__Properties *)
     protobuf_c_message_unpack (&iot__service__refrige__properties__descriptor,
                                allocator, len, data);
}
void   iot__service__refrige__properties__free_unpacked
                     (Iot__Service__Refrige__Properties *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__refrige__properties__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
#define iot__service__refrige__event_open_alarm__field_descriptors NULL
#define iot__service__refrige__event_open_alarm__field_indices_by_name NULL
#define iot__service__refrige__event_open_alarm__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__refrige__event_open_alarm__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.refrige.EventOpenAlarm",
  "EventOpenAlarm",
  "Iot__Service__Refrige__EventOpenAlarm",
  "iot.service.refrige",
  sizeof(Iot__Service__Refrige__EventOpenAlarm),
  0,
  iot__service__refrige__event_open_alarm__field_descriptors,
  iot__service__refrige__event_open_alarm__field_indices_by_name,
  0,  iot__service__refrige__event_open_alarm__number_ranges,
  (ProtobufCMessageInit) iot__service__refrige__event_open_alarm__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__refrige__properties__field_descriptors[5] =
{
  {
    "power",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Refrige__Properties, power),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "vacationModeEnabled",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Refrige__Properties, vacationmodeenabled),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "smartMode",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Refrige__Properties, smartmode),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "eco",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Refrige__Properties, eco),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "offPeakPowerConsumption",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Refrige__Properties, offpeakpowerconsumption),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__refrige__properties__field_indices_by_name[] = {
  3,   /* field[3] = eco */
  4,   /* field[4] = offPeakPowerConsumption */
  0,   /* field[0] = power */
  2,   /* field[2] = smartMode */
  1,   /* field[1] = vacationModeEnabled */
};
static const ProtobufCIntRange iot__service__refrige__properties__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 6, 4 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor iot__service__refrige__properties__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.refrige.Properties",
  "Properties",
  "Iot__Service__Refrige__Properties",
  "iot.service.refrige",
  sizeof(Iot__Service__Refrige__Properties),
  5,
  iot__service__refrige__properties__field_descriptors,
  iot__service__refrige__properties__field_indices_by_name,
  2,  iot__service__refrige__properties__number_ranges,
  (ProtobufCMessageInit) iot__service__refrige__properties__init,
  NULL,NULL,NULL    /* reserved[123] */
};
