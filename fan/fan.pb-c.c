/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: fan.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "fan.pb-c.h"
void   iot__service__fan__properties__init
                     (Iot__Service__Fan__Properties         *message)
{
  static const Iot__Service__Fan__Properties init_value = IOT__SERVICE__FAN__PROPERTIES__INIT;
  *message = init_value;
}
size_t iot__service__fan__properties__get_packed_size
                     (const Iot__Service__Fan__Properties *message)
{
  assert(message->base.descriptor == &iot__service__fan__properties__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__fan__properties__pack
                     (const Iot__Service__Fan__Properties *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__fan__properties__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__fan__properties__pack_to_buffer
                     (const Iot__Service__Fan__Properties *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__fan__properties__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__Fan__Properties *
       iot__service__fan__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__Fan__Properties *)
     protobuf_c_message_unpack (&iot__service__fan__properties__descriptor,
                                allocator, len, data);
}
void   iot__service__fan__properties__free_unpacked
                     (Iot__Service__Fan__Properties *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__fan__properties__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor iot__service__fan__properties__field_descriptors[32] =
{
  {
    "power",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, power),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fanMode",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, fanmode),
    &iot__service__fan__fan_mode__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "windSpeed",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, windspeed),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "horizontalDirection",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, horizontaldirection),
    &iot__service__fan__horizontal_direction__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "verticalDirection",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, verticaldirection),
    &iot__service__fan__vertical_direction__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "swingDirection",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, swingdirection),
    &iot__service__fan__swing_direction__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "childLockEnabled",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, childlockenabled),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "preventStraightWind",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, preventstraightwind),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "childPreventColdWind",
    9,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, childpreventcoldwind),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "upSwingWind",
    10,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, upswingwind),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "downSwingWind",
    11,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, downswingwind),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "upNoSenseWind",
    12,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, upnosensewind),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "downNoSenseWind",
    13,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, downnosensewind),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "noSenseWind",
    14,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, nosensewind),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tempWindEnabled",
    15,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, tempwindenabled),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "screenDisplayEnabled",
    16,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, screendisplayenabled),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "appointmentPowerOn",
    17,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, appointmentpoweron),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mute",
    18,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, mute),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "autoWindEnabled",
    19,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, autowindenabled),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "powerStatus",
    20,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, powerstatus),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "swingAngle",
    21,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, swingangle),
    &iot__service__fan__swing_angle__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "swingEnabled",
    22,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, swingenabled),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "lrDiySwingEnabled",
    23,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, lrdiyswingenabled),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "lrDiyUpPercent",
    24,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, lrdiyuppercent),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "lrDiyDownPercent",
    25,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, lrdiydownpercent),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "udDiySwingEnabled",
    26,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, uddiyswingenabled),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "udDiyUpPercent",
    27,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, uddiyuppercent),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "udDiyDownPercent",
    28,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, uddiydownpercent),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "airDry",
    29,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, airdry),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "anionEnabled",
    30,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, anionenabled),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "waterionsEnabled",
    31,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, waterionsenabled),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "appointmentPowerOff",
    32,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__Fan__Properties, appointmentpoweroff),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__fan__properties__field_indices_by_name[] = {
  28,   /* field[28] = airDry */
  29,   /* field[29] = anionEnabled */
  31,   /* field[31] = appointmentPowerOff */
  16,   /* field[16] = appointmentPowerOn */
  18,   /* field[18] = autoWindEnabled */
  6,   /* field[6] = childLockEnabled */
  8,   /* field[8] = childPreventColdWind */
  12,   /* field[12] = downNoSenseWind */
  10,   /* field[10] = downSwingWind */
  1,   /* field[1] = fanMode */
  3,   /* field[3] = horizontalDirection */
  24,   /* field[24] = lrDiyDownPercent */
  22,   /* field[22] = lrDiySwingEnabled */
  23,   /* field[23] = lrDiyUpPercent */
  17,   /* field[17] = mute */
  13,   /* field[13] = noSenseWind */
  0,   /* field[0] = power */
  19,   /* field[19] = powerStatus */
  7,   /* field[7] = preventStraightWind */
  15,   /* field[15] = screenDisplayEnabled */
  20,   /* field[20] = swingAngle */
  5,   /* field[5] = swingDirection */
  21,   /* field[21] = swingEnabled */
  14,   /* field[14] = tempWindEnabled */
  27,   /* field[27] = udDiyDownPercent */
  25,   /* field[25] = udDiySwingEnabled */
  26,   /* field[26] = udDiyUpPercent */
  11,   /* field[11] = upNoSenseWind */
  9,   /* field[9] = upSwingWind */
  4,   /* field[4] = verticalDirection */
  30,   /* field[30] = waterionsEnabled */
  2,   /* field[2] = windSpeed */
};
static const ProtobufCIntRange iot__service__fan__properties__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 32 }
};
const ProtobufCMessageDescriptor iot__service__fan__properties__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.fan.Properties",
  "Properties",
  "Iot__Service__Fan__Properties",
  "iot.service.fan",
  sizeof(Iot__Service__Fan__Properties),
  32,
  iot__service__fan__properties__field_descriptors,
  iot__service__fan__properties__field_indices_by_name,
  1,  iot__service__fan__properties__number_ranges,
  (ProtobufCMessageInit) iot__service__fan__properties__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue iot__service__fan__fan_mode__enum_values_by_number[7] =
{
  { "FAN_NORMAL", "IOT__SERVICE__FAN__FAN_MODE__FAN_NORMAL", 0 },
  { "FAN_NATURAL", "IOT__SERVICE__FAN__FAN_MODE__FAN_NATURAL", 1 },
  { "FAN_SLEEP", "IOT__SERVICE__FAN__FAN_MODE__FAN_SLEEP", 2 },
  { "FAN_COMFORTABLE", "IOT__SERVICE__FAN__FAN_MODE__FAN_COMFORTABLE", 3 },
  { "FAN_HUMAN_FEELING", "IOT__SERVICE__FAN__FAN_MODE__FAN_HUMAN_FEELING", 4 },
  { "FAN_QUIET", "IOT__SERVICE__FAN__FAN_MODE__FAN_QUIET", 5 },
  { "FAN_BABY", "IOT__SERVICE__FAN__FAN_MODE__FAN_BABY", 6 },
};
static const ProtobufCIntRange iot__service__fan__fan_mode__value_ranges[] = {
{0, 0},{0, 7}
};
static const ProtobufCEnumValueIndex iot__service__fan__fan_mode__enum_values_by_name[7] =
{
  { "FAN_BABY", 6 },
  { "FAN_COMFORTABLE", 3 },
  { "FAN_HUMAN_FEELING", 4 },
  { "FAN_NATURAL", 1 },
  { "FAN_NORMAL", 0 },
  { "FAN_QUIET", 5 },
  { "FAN_SLEEP", 2 },
};
const ProtobufCEnumDescriptor iot__service__fan__fan_mode__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "iot.service.fan.FanMode",
  "FanMode",
  "Iot__Service__Fan__FanMode",
  "iot.service.fan",
  7,
  iot__service__fan__fan_mode__enum_values_by_number,
  7,
  iot__service__fan__fan_mode__enum_values_by_name,
  1,
  iot__service__fan__fan_mode__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue iot__service__fan__horizontal_direction__enum_values_by_number[9] =
{
  { "HL_STOP", "IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_STOP", 0 },
  { "HL_LEFTRIGHT", "IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_LEFTRIGHT", 1 },
  { "HL_AUTO", "IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_AUTO", 2 },
  { "HL_ONE", "IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_ONE", 3 },
  { "HL_TWO", "IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_TWO", 4 },
  { "HL_THREE", "IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_THREE", 5 },
  { "HL_FOUR", "IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_FOUR", 6 },
  { "HL_FIVE", "IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_FIVE", 7 },
  { "HL_SIX", "IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_SIX", 8 },
};
static const ProtobufCIntRange iot__service__fan__horizontal_direction__value_ranges[] = {
{0, 0},{0, 9}
};
static const ProtobufCEnumValueIndex iot__service__fan__horizontal_direction__enum_values_by_name[9] =
{
  { "HL_AUTO", 2 },
  { "HL_FIVE", 7 },
  { "HL_FOUR", 6 },
  { "HL_LEFTRIGHT", 1 },
  { "HL_ONE", 3 },
  { "HL_SIX", 8 },
  { "HL_STOP", 0 },
  { "HL_THREE", 5 },
  { "HL_TWO", 4 },
};
const ProtobufCEnumDescriptor iot__service__fan__horizontal_direction__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "iot.service.fan.HorizontalDirection",
  "HorizontalDirection",
  "Iot__Service__Fan__HorizontalDirection",
  "iot.service.fan",
  9,
  iot__service__fan__horizontal_direction__enum_values_by_number,
  9,
  iot__service__fan__horizontal_direction__enum_values_by_name,
  1,
  iot__service__fan__horizontal_direction__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue iot__service__fan__vertical_direction__enum_values_by_number[9] =
{
  { "VL_STOP", "IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_STOP", 0 },
  { "VL_UPDOWN", "IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_UPDOWN", 1 },
  { "VL_AUTO", "IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_AUTO", 2 },
  { "VL_ONE", "IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_ONE", 3 },
  { "VL_TWO", "IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_TWO", 4 },
  { "VL_THREE", "IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_THREE", 5 },
  { "VL_FOUR", "IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_FOUR", 6 },
  { "VL_FIVE", "IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_FIVE", 7 },
  { "VL_SIX", "IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_SIX", 8 },
};
static const ProtobufCIntRange iot__service__fan__vertical_direction__value_ranges[] = {
{0, 0},{0, 9}
};
static const ProtobufCEnumValueIndex iot__service__fan__vertical_direction__enum_values_by_name[9] =
{
  { "VL_AUTO", 2 },
  { "VL_FIVE", 7 },
  { "VL_FOUR", 6 },
  { "VL_ONE", 3 },
  { "VL_SIX", 8 },
  { "VL_STOP", 0 },
  { "VL_THREE", 5 },
  { "VL_TWO", 4 },
  { "VL_UPDOWN", 1 },
};
const ProtobufCEnumDescriptor iot__service__fan__vertical_direction__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "iot.service.fan.VerticalDirection",
  "VerticalDirection",
  "Iot__Service__Fan__VerticalDirection",
  "iot.service.fan",
  9,
  iot__service__fan__vertical_direction__enum_values_by_number,
  9,
  iot__service__fan__vertical_direction__enum_values_by_name,
  1,
  iot__service__fan__vertical_direction__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue iot__service__fan__swing_direction__enum_values_by_number[6] =
{
  { "AUTO", "IOT__SERVICE__FAN__SWING_DIRECTION__AUTO", 0 },
  { "E_DIRECTION", "IOT__SERVICE__FAN__SWING_DIRECTION__E_DIRECTION", 1 },
  { "W_DIRECTION", "IOT__SERVICE__FAN__SWING_DIRECTION__W_DIRECTION", 2 },
  { "LR_DIRECTION", "IOT__SERVICE__FAN__SWING_DIRECTION__LR_DIRECTION", 3 },
  { "UD_DIRECTION", "IOT__SERVICE__FAN__SWING_DIRECTION__UD_DIRECTION", 4 },
  { "LRUD_DIRECTION", "IOT__SERVICE__FAN__SWING_DIRECTION__LRUD_DIRECTION", 5 },
};
static const ProtobufCIntRange iot__service__fan__swing_direction__value_ranges[] = {
{0, 0},{0, 6}
};
static const ProtobufCEnumValueIndex iot__service__fan__swing_direction__enum_values_by_name[6] =
{
  { "AUTO", 0 },
  { "E_DIRECTION", 1 },
  { "LRUD_DIRECTION", 5 },
  { "LR_DIRECTION", 3 },
  { "UD_DIRECTION", 4 },
  { "W_DIRECTION", 2 },
};
const ProtobufCEnumDescriptor iot__service__fan__swing_direction__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "iot.service.fan.SwingDirection",
  "SwingDirection",
  "Iot__Service__Fan__SwingDirection",
  "iot.service.fan",
  6,
  iot__service__fan__swing_direction__enum_values_by_number,
  6,
  iot__service__fan__swing_direction__enum_values_by_name,
  1,
  iot__service__fan__swing_direction__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue iot__service__fan__swing_angle__enum_values_by_number[3] =
{
  { "NONE", "IOT__SERVICE__FAN__SWING_ANGLE__NONE", 0 },
  { "ANGLE1", "IOT__SERVICE__FAN__SWING_ANGLE__ANGLE1", 1 },
  { "ANGLE2", "IOT__SERVICE__FAN__SWING_ANGLE__ANGLE2", 2 },
};
static const ProtobufCIntRange iot__service__fan__swing_angle__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex iot__service__fan__swing_angle__enum_values_by_name[3] =
{
  { "ANGLE1", 1 },
  { "ANGLE2", 2 },
  { "NONE", 0 },
};
const ProtobufCEnumDescriptor iot__service__fan__swing_angle__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "iot.service.fan.SwingAngle",
  "SwingAngle",
  "Iot__Service__Fan__SwingAngle",
  "iot.service.fan",
  3,
  iot__service__fan__swing_angle__enum_values_by_number,
  3,
  iot__service__fan__swing_angle__enum_values_by_name,
  1,
  iot__service__fan__swing_angle__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
