/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: electricCooker.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "electricCooker.pb-c.h"
void   iot__service__electric_cooker__event_open_alarm__init
                     (Iot__Service__ElectricCooker__EventOpenAlarm         *message)
{
  static const Iot__Service__ElectricCooker__EventOpenAlarm init_value = IOT__SERVICE__ELECTRIC_COOKER__EVENT_OPEN_ALARM__INIT;
  *message = init_value;
}
size_t iot__service__electric_cooker__event_open_alarm__get_packed_size
                     (const Iot__Service__ElectricCooker__EventOpenAlarm *message)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__event_open_alarm__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__electric_cooker__event_open_alarm__pack
                     (const Iot__Service__ElectricCooker__EventOpenAlarm *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__event_open_alarm__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__electric_cooker__event_open_alarm__pack_to_buffer
                     (const Iot__Service__ElectricCooker__EventOpenAlarm *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__event_open_alarm__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__ElectricCooker__EventOpenAlarm *
       iot__service__electric_cooker__event_open_alarm__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__ElectricCooker__EventOpenAlarm *)
     protobuf_c_message_unpack (&iot__service__electric_cooker__event_open_alarm__descriptor,
                                allocator, len, data);
}
void   iot__service__electric_cooker__event_open_alarm__free_unpacked
                     (Iot__Service__ElectricCooker__EventOpenAlarm *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__electric_cooker__event_open_alarm__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__electric_cooker__appointment_task_completed__init
                     (Iot__Service__ElectricCooker__AppointmentTaskCompleted         *message)
{
  static const Iot__Service__ElectricCooker__AppointmentTaskCompleted init_value = IOT__SERVICE__ELECTRIC_COOKER__APPOINTMENT_TASK_COMPLETED__INIT;
  *message = init_value;
}
size_t iot__service__electric_cooker__appointment_task_completed__get_packed_size
                     (const Iot__Service__ElectricCooker__AppointmentTaskCompleted *message)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__appointment_task_completed__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__electric_cooker__appointment_task_completed__pack
                     (const Iot__Service__ElectricCooker__AppointmentTaskCompleted *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__appointment_task_completed__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__electric_cooker__appointment_task_completed__pack_to_buffer
                     (const Iot__Service__ElectricCooker__AppointmentTaskCompleted *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__appointment_task_completed__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__ElectricCooker__AppointmentTaskCompleted *
       iot__service__electric_cooker__appointment_task_completed__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__ElectricCooker__AppointmentTaskCompleted *)
     protobuf_c_message_unpack (&iot__service__electric_cooker__appointment_task_completed__descriptor,
                                allocator, len, data);
}
void   iot__service__electric_cooker__appointment_task_completed__free_unpacked
                     (Iot__Service__ElectricCooker__AppointmentTaskCompleted *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__electric_cooker__appointment_task_completed__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__electric_cooker__event_cooking_end__init
                     (Iot__Service__ElectricCooker__EventCookingEnd         *message)
{
  static const Iot__Service__ElectricCooker__EventCookingEnd init_value = IOT__SERVICE__ELECTRIC_COOKER__EVENT_COOKING_END__INIT;
  *message = init_value;
}
size_t iot__service__electric_cooker__event_cooking_end__get_packed_size
                     (const Iot__Service__ElectricCooker__EventCookingEnd *message)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__event_cooking_end__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__electric_cooker__event_cooking_end__pack
                     (const Iot__Service__ElectricCooker__EventCookingEnd *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__event_cooking_end__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__electric_cooker__event_cooking_end__pack_to_buffer
                     (const Iot__Service__ElectricCooker__EventCookingEnd *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__event_cooking_end__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__ElectricCooker__EventCookingEnd *
       iot__service__electric_cooker__event_cooking_end__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__ElectricCooker__EventCookingEnd *)
     protobuf_c_message_unpack (&iot__service__electric_cooker__event_cooking_end__descriptor,
                                allocator, len, data);
}
void   iot__service__electric_cooker__event_cooking_end__free_unpacked
                     (Iot__Service__ElectricCooker__EventCookingEnd *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__electric_cooker__event_cooking_end__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__electric_cooker__event_dry_braised__init
                     (Iot__Service__ElectricCooker__EventDryBraised         *message)
{
  static const Iot__Service__ElectricCooker__EventDryBraised init_value = IOT__SERVICE__ELECTRIC_COOKER__EVENT_DRY_BRAISED__INIT;
  *message = init_value;
}
size_t iot__service__electric_cooker__event_dry_braised__get_packed_size
                     (const Iot__Service__ElectricCooker__EventDryBraised *message)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__event_dry_braised__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__electric_cooker__event_dry_braised__pack
                     (const Iot__Service__ElectricCooker__EventDryBraised *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__event_dry_braised__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__electric_cooker__event_dry_braised__pack_to_buffer
                     (const Iot__Service__ElectricCooker__EventDryBraised *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__event_dry_braised__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__ElectricCooker__EventDryBraised *
       iot__service__electric_cooker__event_dry_braised__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__ElectricCooker__EventDryBraised *)
     protobuf_c_message_unpack (&iot__service__electric_cooker__event_dry_braised__descriptor,
                                allocator, len, data);
}
void   iot__service__electric_cooker__event_dry_braised__free_unpacked
                     (Iot__Service__ElectricCooker__EventDryBraised *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__electric_cooker__event_dry_braised__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__electric_cooker__properties__init
                     (Iot__Service__ElectricCooker__Properties         *message)
{
  static const Iot__Service__ElectricCooker__Properties init_value = IOT__SERVICE__ELECTRIC_COOKER__PROPERTIES__INIT;
  *message = init_value;
}
size_t iot__service__electric_cooker__properties__get_packed_size
                     (const Iot__Service__ElectricCooker__Properties *message)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__properties__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__electric_cooker__properties__pack
                     (const Iot__Service__ElectricCooker__Properties *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__properties__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__electric_cooker__properties__pack_to_buffer
                     (const Iot__Service__ElectricCooker__Properties *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__electric_cooker__properties__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__ElectricCooker__Properties *
       iot__service__electric_cooker__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__ElectricCooker__Properties *)
     protobuf_c_message_unpack (&iot__service__electric_cooker__properties__descriptor,
                                allocator, len, data);
}
void   iot__service__electric_cooker__properties__free_unpacked
                     (Iot__Service__ElectricCooker__Properties *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__electric_cooker__properties__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
#define iot__service__electric_cooker__event_open_alarm__field_descriptors NULL
#define iot__service__electric_cooker__event_open_alarm__field_indices_by_name NULL
#define iot__service__electric_cooker__event_open_alarm__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__electric_cooker__event_open_alarm__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.electricCooker.EventOpenAlarm",
  "EventOpenAlarm",
  "Iot__Service__ElectricCooker__EventOpenAlarm",
  "iot.service.electricCooker",
  sizeof(Iot__Service__ElectricCooker__EventOpenAlarm),
  0,
  iot__service__electric_cooker__event_open_alarm__field_descriptors,
  iot__service__electric_cooker__event_open_alarm__field_indices_by_name,
  0,  iot__service__electric_cooker__event_open_alarm__number_ranges,
  (ProtobufCMessageInit) iot__service__electric_cooker__event_open_alarm__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__electric_cooker__appointment_task_completed__field_descriptors[5] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__AppointmentTaskCompleted, status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "name",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__AppointmentTaskCompleted, name),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "hour",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__AppointmentTaskCompleted, hour),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "min",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__AppointmentTaskCompleted, min),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sec",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__AppointmentTaskCompleted, sec),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__electric_cooker__appointment_task_completed__field_indices_by_name[] = {
  2,   /* field[2] = hour */
  3,   /* field[3] = min */
  1,   /* field[1] = name */
  4,   /* field[4] = sec */
  0,   /* field[0] = status */
};
static const ProtobufCIntRange iot__service__electric_cooker__appointment_task_completed__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor iot__service__electric_cooker__appointment_task_completed__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.electricCooker.AppointmentTaskCompleted",
  "AppointmentTaskCompleted",
  "Iot__Service__ElectricCooker__AppointmentTaskCompleted",
  "iot.service.electricCooker",
  sizeof(Iot__Service__ElectricCooker__AppointmentTaskCompleted),
  5,
  iot__service__electric_cooker__appointment_task_completed__field_descriptors,
  iot__service__electric_cooker__appointment_task_completed__field_indices_by_name,
  1,  iot__service__electric_cooker__appointment_task_completed__number_ranges,
  (ProtobufCMessageInit) iot__service__electric_cooker__appointment_task_completed__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define iot__service__electric_cooker__event_cooking_end__field_descriptors NULL
#define iot__service__electric_cooker__event_cooking_end__field_indices_by_name NULL
#define iot__service__electric_cooker__event_cooking_end__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__electric_cooker__event_cooking_end__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.electricCooker.EventCookingEnd",
  "EventCookingEnd",
  "Iot__Service__ElectricCooker__EventCookingEnd",
  "iot.service.electricCooker",
  sizeof(Iot__Service__ElectricCooker__EventCookingEnd),
  0,
  iot__service__electric_cooker__event_cooking_end__field_descriptors,
  iot__service__electric_cooker__event_cooking_end__field_indices_by_name,
  0,  iot__service__electric_cooker__event_cooking_end__number_ranges,
  (ProtobufCMessageInit) iot__service__electric_cooker__event_cooking_end__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define iot__service__electric_cooker__event_dry_braised__field_descriptors NULL
#define iot__service__electric_cooker__event_dry_braised__field_indices_by_name NULL
#define iot__service__electric_cooker__event_dry_braised__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__electric_cooker__event_dry_braised__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.electricCooker.EventDryBraised",
  "EventDryBraised",
  "Iot__Service__ElectricCooker__EventDryBraised",
  "iot.service.electricCooker",
  sizeof(Iot__Service__ElectricCooker__EventDryBraised),
  0,
  iot__service__electric_cooker__event_dry_braised__field_descriptors,
  iot__service__electric_cooker__event_dry_braised__field_indices_by_name,
  0,  iot__service__electric_cooker__event_dry_braised__number_ranges,
  (ProtobufCMessageInit) iot__service__electric_cooker__event_dry_braised__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__electric_cooker__properties__field_descriptors[10] =
{
  {
    "power",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__Properties, power),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "electricCookerMode",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__Properties, electriccookermode),
    &iot__service__electric_cooker__electric_cooker_mode__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "remainTime",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__Properties, remaintime),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "preservingHeatDuration",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__Properties, preservingheatduration),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "heatPreservationTime",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__Properties, heatpreservationtime),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "taste",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__Properties, taste),
    &iot__service__electric_cooker__taste__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rice",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__Properties, rice),
    &iot__service__electric_cooker__rice__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "extraTimeForCooking",
    9,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__Properties, extratimeforcooking),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cookerOperationMode",
    10,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__Properties, cookeroperationmode),
    &iot__service__electric_cooker__cooker_operation_mode__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "appointmentTaskCompleted",
    11,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__ElectricCooker__Properties, appointmenttaskcompleted),
    &iot__service__electric_cooker__appointment_task_completed__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__electric_cooker__properties__field_indices_by_name[] = {
  9,   /* field[9] = appointmentTaskCompleted */
  8,   /* field[8] = cookerOperationMode */
  1,   /* field[1] = electricCookerMode */
  7,   /* field[7] = extraTimeForCooking */
  4,   /* field[4] = heatPreservationTime */
  0,   /* field[0] = power */
  3,   /* field[3] = preservingHeatDuration */
  2,   /* field[2] = remainTime */
  6,   /* field[6] = rice */
  5,   /* field[5] = taste */
};
static const ProtobufCIntRange iot__service__electric_cooker__properties__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 9, 7 },
  { 0, 10 }
};
const ProtobufCMessageDescriptor iot__service__electric_cooker__properties__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.electricCooker.Properties",
  "Properties",
  "Iot__Service__ElectricCooker__Properties",
  "iot.service.electricCooker",
  sizeof(Iot__Service__ElectricCooker__Properties),
  10,
  iot__service__electric_cooker__properties__field_descriptors,
  iot__service__electric_cooker__properties__field_indices_by_name,
  2,  iot__service__electric_cooker__properties__number_ranges,
  (ProtobufCMessageInit) iot__service__electric_cooker__properties__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue iot__service__electric_cooker__electric_cooker_mode__enum_values_by_number[9] =
{
  { "RICE", "IOT__SERVICE__ELECTRIC_COOKER__ELECTRIC_COOKER_MODE__RICE", 0 },
  { "TURBO", "IOT__SERVICE__ELECTRIC_COOKER__ELECTRIC_COOKER_MODE__TURBO", 1 },
  { "STANDARD", "IOT__SERVICE__ELECTRIC_COOKER__ELECTRIC_COOKER_MODE__STANDARD", 2 },
  { "PORRIDGE", "IOT__SERVICE__ELECTRIC_COOKER__ELECTRIC_COOKER_MODE__PORRIDGE", 3 },
  { "SOUP", "IOT__SERVICE__ELECTRIC_COOKER__ELECTRIC_COOKER_MODE__SOUP", 4 },
  { "STEAMING", "IOT__SERVICE__ELECTRIC_COOKER__ELECTRIC_COOKER_MODE__STEAMING", 5 },
  { "CEREALANDRICE", "IOT__SERVICE__ELECTRIC_COOKER__ELECTRIC_COOKER_MODE__CEREALANDRICE", 6 },
  { "BROWNRICE", "IOT__SERVICE__ELECTRIC_COOKER__ELECTRIC_COOKER_MODE__BROWNRICE", 7 },
  { "HEATPRESERVATION", "IOT__SERVICE__ELECTRIC_COOKER__ELECTRIC_COOKER_MODE__HEATPRESERVATION", 8 },
};
static const ProtobufCIntRange iot__service__electric_cooker__electric_cooker_mode__value_ranges[] = {
{0, 0},{0, 9}
};
static const ProtobufCEnumValueIndex iot__service__electric_cooker__electric_cooker_mode__enum_values_by_name[9] =
{
  { "BROWNRICE", 7 },
  { "CEREALANDRICE", 6 },
  { "HEATPRESERVATION", 8 },
  { "PORRIDGE", 3 },
  { "RICE", 0 },
  { "SOUP", 4 },
  { "STANDARD", 2 },
  { "STEAMING", 5 },
  { "TURBO", 1 },
};
const ProtobufCEnumDescriptor iot__service__electric_cooker__electric_cooker_mode__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "iot.service.electricCooker.ElectricCookerMode",
  "ElectricCookerMode",
  "Iot__Service__ElectricCooker__ElectricCookerMode",
  "iot.service.electricCooker",
  9,
  iot__service__electric_cooker__electric_cooker_mode__enum_values_by_number,
  9,
  iot__service__electric_cooker__electric_cooker_mode__enum_values_by_name,
  1,
  iot__service__electric_cooker__electric_cooker_mode__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue iot__service__electric_cooker__taste__enum_values_by_number[4] =
{
  { "SOFTTASTE", "IOT__SERVICE__ELECTRIC_COOKER__TASTE__SOFTTASTE", 0 },
  { "STANDARDTASTE", "IOT__SERVICE__ELECTRIC_COOKER__TASTE__STANDARDTASTE", 1 },
  { "HARDTASTE", "IOT__SERVICE__ELECTRIC_COOKER__TASTE__HARDTASTE", 2 },
  { "STICKYTASTE", "IOT__SERVICE__ELECTRIC_COOKER__TASTE__STICKYTASTE", 3 },
};
static const ProtobufCIntRange iot__service__electric_cooker__taste__value_ranges[] = {
{0, 0},{0, 4}
};
static const ProtobufCEnumValueIndex iot__service__electric_cooker__taste__enum_values_by_name[4] =
{
  { "HARDTASTE", 2 },
  { "SOFTTASTE", 0 },
  { "STANDARDTASTE", 1 },
  { "STICKYTASTE", 3 },
};
const ProtobufCEnumDescriptor iot__service__electric_cooker__taste__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "iot.service.electricCooker.Taste",
  "Taste",
  "Iot__Service__ElectricCooker__Taste",
  "iot.service.electricCooker",
  4,
  iot__service__electric_cooker__taste__enum_values_by_number,
  4,
  iot__service__electric_cooker__taste__enum_values_by_name,
  1,
  iot__service__electric_cooker__taste__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue iot__service__electric_cooker__rice__enum_values_by_number[3] =
{
  { "NORMAL", "IOT__SERVICE__ELECTRIC_COOKER__RICE__NORMAL", 0 },
  { "BASMATI", "IOT__SERVICE__ELECTRIC_COOKER__RICE__BASMATI", 1 },
  { "NORTHEASTRICE", "IOT__SERVICE__ELECTRIC_COOKER__RICE__NORTHEASTRICE", 2 },
};
static const ProtobufCIntRange iot__service__electric_cooker__rice__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex iot__service__electric_cooker__rice__enum_values_by_name[3] =
{
  { "BASMATI", 1 },
  { "NORMAL", 0 },
  { "NORTHEASTRICE", 2 },
};
const ProtobufCEnumDescriptor iot__service__electric_cooker__rice__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "iot.service.electricCooker.Rice",
  "Rice",
  "Iot__Service__ElectricCooker__Rice",
  "iot.service.electricCooker",
  3,
  iot__service__electric_cooker__rice__enum_values_by_number,
  3,
  iot__service__electric_cooker__rice__enum_values_by_name,
  1,
  iot__service__electric_cooker__rice__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue iot__service__electric_cooker__cooker_operation_mode__enum_values_by_number[6] =
{
  { "COMPLETION", "IOT__SERVICE__ELECTRIC_COOKER__COOKER_OPERATION_MODE__COMPLETION", 0 },
  { "RESERVING", "IOT__SERVICE__ELECTRIC_COOKER__COOKER_OPERATION_MODE__RESERVING", 1 },
  { "HEATPRESERVING", "IOT__SERVICE__ELECTRIC_COOKER__COOKER_OPERATION_MODE__HEATPRESERVING", 2 },
  { "CANCELLATION", "IOT__SERVICE__ELECTRIC_COOKER__COOKER_OPERATION_MODE__CANCELLATION", 3 },
  { "WORKING", "IOT__SERVICE__ELECTRIC_COOKER__COOKER_OPERATION_MODE__WORKING", 4 },
  { "awakeningRice", "IOT__SERVICE__ELECTRIC_COOKER__COOKER_OPERATION_MODE__awakeningRice", 5 },
};
static const ProtobufCIntRange iot__service__electric_cooker__cooker_operation_mode__value_ranges[] = {
{0, 0},{0, 6}
};
static const ProtobufCEnumValueIndex iot__service__electric_cooker__cooker_operation_mode__enum_values_by_name[6] =
{
  { "CANCELLATION", 3 },
  { "COMPLETION", 0 },
  { "HEATPRESERVING", 2 },
  { "RESERVING", 1 },
  { "WORKING", 4 },
  { "awakeningRice", 5 },
};
const ProtobufCEnumDescriptor iot__service__electric_cooker__cooker_operation_mode__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "iot.service.electricCooker.CookerOperationMode",
  "CookerOperationMode",
  "Iot__Service__ElectricCooker__CookerOperationMode",
  "iot.service.electricCooker",
  6,
  iot__service__electric_cooker__cooker_operation_mode__enum_values_by_number,
  6,
  iot__service__electric_cooker__cooker_operation_mode__enum_values_by_name,
  1,
  iot__service__electric_cooker__cooker_operation_mode__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
