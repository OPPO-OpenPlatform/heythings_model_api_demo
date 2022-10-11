/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: waterSensor.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "waterSensor.pb-c.h"
void   iot__service__water_sensor__event_water_detected__init
                     (Iot__Service__WaterSensor__EventWaterDetected         *message)
{
  static const Iot__Service__WaterSensor__EventWaterDetected init_value = IOT__SERVICE__WATER_SENSOR__EVENT_WATER_DETECTED__INIT;
  *message = init_value;
}
size_t iot__service__water_sensor__event_water_detected__get_packed_size
                     (const Iot__Service__WaterSensor__EventWaterDetected *message)
{
  assert(message->base.descriptor == &iot__service__water_sensor__event_water_detected__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__water_sensor__event_water_detected__pack
                     (const Iot__Service__WaterSensor__EventWaterDetected *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__water_sensor__event_water_detected__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__water_sensor__event_water_detected__pack_to_buffer
                     (const Iot__Service__WaterSensor__EventWaterDetected *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__water_sensor__event_water_detected__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__WaterSensor__EventWaterDetected *
       iot__service__water_sensor__event_water_detected__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__WaterSensor__EventWaterDetected *)
     protobuf_c_message_unpack (&iot__service__water_sensor__event_water_detected__descriptor,
                                allocator, len, data);
}
void   iot__service__water_sensor__event_water_detected__free_unpacked
                     (Iot__Service__WaterSensor__EventWaterDetected *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__water_sensor__event_water_detected__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__water_sensor__event_no_water__init
                     (Iot__Service__WaterSensor__EventNoWater         *message)
{
  static const Iot__Service__WaterSensor__EventNoWater init_value = IOT__SERVICE__WATER_SENSOR__EVENT_NO_WATER__INIT;
  *message = init_value;
}
size_t iot__service__water_sensor__event_no_water__get_packed_size
                     (const Iot__Service__WaterSensor__EventNoWater *message)
{
  assert(message->base.descriptor == &iot__service__water_sensor__event_no_water__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__water_sensor__event_no_water__pack
                     (const Iot__Service__WaterSensor__EventNoWater *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__water_sensor__event_no_water__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__water_sensor__event_no_water__pack_to_buffer
                     (const Iot__Service__WaterSensor__EventNoWater *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__water_sensor__event_no_water__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__WaterSensor__EventNoWater *
       iot__service__water_sensor__event_no_water__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__WaterSensor__EventNoWater *)
     protobuf_c_message_unpack (&iot__service__water_sensor__event_no_water__descriptor,
                                allocator, len, data);
}
void   iot__service__water_sensor__event_no_water__free_unpacked
                     (Iot__Service__WaterSensor__EventNoWater *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__water_sensor__event_no_water__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__water_sensor__properties__init
                     (Iot__Service__WaterSensor__Properties         *message)
{
  static const Iot__Service__WaterSensor__Properties init_value = IOT__SERVICE__WATER_SENSOR__PROPERTIES__INIT;
  *message = init_value;
}
size_t iot__service__water_sensor__properties__get_packed_size
                     (const Iot__Service__WaterSensor__Properties *message)
{
  assert(message->base.descriptor == &iot__service__water_sensor__properties__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__water_sensor__properties__pack
                     (const Iot__Service__WaterSensor__Properties *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__water_sensor__properties__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__water_sensor__properties__pack_to_buffer
                     (const Iot__Service__WaterSensor__Properties *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__water_sensor__properties__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__WaterSensor__Properties *
       iot__service__water_sensor__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__WaterSensor__Properties *)
     protobuf_c_message_unpack (&iot__service__water_sensor__properties__descriptor,
                                allocator, len, data);
}
void   iot__service__water_sensor__properties__free_unpacked
                     (Iot__Service__WaterSensor__Properties *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__water_sensor__properties__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
#define iot__service__water_sensor__event_water_detected__field_descriptors NULL
#define iot__service__water_sensor__event_water_detected__field_indices_by_name NULL
#define iot__service__water_sensor__event_water_detected__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__water_sensor__event_water_detected__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.waterSensor.EventWaterDetected",
  "EventWaterDetected",
  "Iot__Service__WaterSensor__EventWaterDetected",
  "iot.service.waterSensor",
  sizeof(Iot__Service__WaterSensor__EventWaterDetected),
  0,
  iot__service__water_sensor__event_water_detected__field_descriptors,
  iot__service__water_sensor__event_water_detected__field_indices_by_name,
  0,  iot__service__water_sensor__event_water_detected__number_ranges,
  (ProtobufCMessageInit) iot__service__water_sensor__event_water_detected__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define iot__service__water_sensor__event_no_water__field_descriptors NULL
#define iot__service__water_sensor__event_no_water__field_indices_by_name NULL
#define iot__service__water_sensor__event_no_water__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__water_sensor__event_no_water__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.waterSensor.EventNoWater",
  "EventNoWater",
  "Iot__Service__WaterSensor__EventNoWater",
  "iot.service.waterSensor",
  sizeof(Iot__Service__WaterSensor__EventNoWater),
  0,
  iot__service__water_sensor__event_no_water__field_descriptors,
  iot__service__water_sensor__event_no_water__field_indices_by_name,
  0,  iot__service__water_sensor__event_no_water__number_ranges,
  (ProtobufCMessageInit) iot__service__water_sensor__event_no_water__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__water_sensor__properties__field_descriptors[1] =
{
  {
    "alarmState",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__WaterSensor__Properties, alarmstate),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__water_sensor__properties__field_indices_by_name[] = {
  0,   /* field[0] = alarmState */
};
static const ProtobufCIntRange iot__service__water_sensor__properties__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor iot__service__water_sensor__properties__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.waterSensor.Properties",
  "Properties",
  "Iot__Service__WaterSensor__Properties",
  "iot.service.waterSensor",
  sizeof(Iot__Service__WaterSensor__Properties),
  1,
  iot__service__water_sensor__properties__field_descriptors,
  iot__service__water_sensor__properties__field_indices_by_name,
  1,  iot__service__water_sensor__properties__number_ranges,
  (ProtobufCMessageInit) iot__service__water_sensor__properties__init,
  NULL,NULL,NULL    /* reserved[123] */
};