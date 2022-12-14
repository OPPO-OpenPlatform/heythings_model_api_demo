/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: wifiManage.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "wifiManage.pb-c.h"
void   iot__service__wifi_manage__wifi_auto_change__init
                     (Iot__Service__WifiManage__WifiAutoChange         *message)
{
  static const Iot__Service__WifiManage__WifiAutoChange init_value = IOT__SERVICE__WIFI_MANAGE__WIFI_AUTO_CHANGE__INIT;
  *message = init_value;
}
size_t iot__service__wifi_manage__wifi_auto_change__get_packed_size
                     (const Iot__Service__WifiManage__WifiAutoChange *message)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__wifi_auto_change__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__wifi_manage__wifi_auto_change__pack
                     (const Iot__Service__WifiManage__WifiAutoChange *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__wifi_auto_change__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__wifi_manage__wifi_auto_change__pack_to_buffer
                     (const Iot__Service__WifiManage__WifiAutoChange *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__wifi_auto_change__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__WifiManage__WifiAutoChange *
       iot__service__wifi_manage__wifi_auto_change__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__WifiManage__WifiAutoChange *)
     protobuf_c_message_unpack (&iot__service__wifi_manage__wifi_auto_change__descriptor,
                                allocator, len, data);
}
void   iot__service__wifi_manage__wifi_auto_change__free_unpacked
                     (Iot__Service__WifiManage__WifiAutoChange *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__wifi_manage__wifi_auto_change__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__wifi_manage__auto_change_configuration__init
                     (Iot__Service__WifiManage__AutoChangeConfiguration         *message)
{
  static const Iot__Service__WifiManage__AutoChangeConfiguration init_value = IOT__SERVICE__WIFI_MANAGE__AUTO_CHANGE_CONFIGURATION__INIT;
  *message = init_value;
}
size_t iot__service__wifi_manage__auto_change_configuration__get_packed_size
                     (const Iot__Service__WifiManage__AutoChangeConfiguration *message)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__auto_change_configuration__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__wifi_manage__auto_change_configuration__pack
                     (const Iot__Service__WifiManage__AutoChangeConfiguration *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__auto_change_configuration__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__wifi_manage__auto_change_configuration__pack_to_buffer
                     (const Iot__Service__WifiManage__AutoChangeConfiguration *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__auto_change_configuration__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__WifiManage__AutoChangeConfiguration *
       iot__service__wifi_manage__auto_change_configuration__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__WifiManage__AutoChangeConfiguration *)
     protobuf_c_message_unpack (&iot__service__wifi_manage__auto_change_configuration__descriptor,
                                allocator, len, data);
}
void   iot__service__wifi_manage__auto_change_configuration__free_unpacked
                     (Iot__Service__WifiManage__AutoChangeConfiguration *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__wifi_manage__auto_change_configuration__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__wifi_manage__action_in_get_ssid_list__init
                     (Iot__Service__WifiManage__ActionInGetSsidList         *message)
{
  static const Iot__Service__WifiManage__ActionInGetSsidList init_value = IOT__SERVICE__WIFI_MANAGE__ACTION_IN_GET_SSID_LIST__INIT;
  *message = init_value;
}
size_t iot__service__wifi_manage__action_in_get_ssid_list__get_packed_size
                     (const Iot__Service__WifiManage__ActionInGetSsidList *message)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__action_in_get_ssid_list__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__wifi_manage__action_in_get_ssid_list__pack
                     (const Iot__Service__WifiManage__ActionInGetSsidList *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__action_in_get_ssid_list__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__wifi_manage__action_in_get_ssid_list__pack_to_buffer
                     (const Iot__Service__WifiManage__ActionInGetSsidList *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__action_in_get_ssid_list__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__WifiManage__ActionInGetSsidList *
       iot__service__wifi_manage__action_in_get_ssid_list__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__WifiManage__ActionInGetSsidList *)
     protobuf_c_message_unpack (&iot__service__wifi_manage__action_in_get_ssid_list__descriptor,
                                allocator, len, data);
}
void   iot__service__wifi_manage__action_in_get_ssid_list__free_unpacked
                     (Iot__Service__WifiManage__ActionInGetSsidList *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__wifi_manage__action_in_get_ssid_list__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__wifi_manage__action_out_get_ssid_list__ssid_info__init
                     (Iot__Service__WifiManage__ActionOutGetSsidList__SsidInfo         *message)
{
  static const Iot__Service__WifiManage__ActionOutGetSsidList__SsidInfo init_value = IOT__SERVICE__WIFI_MANAGE__ACTION_OUT_GET_SSID_LIST__SSID_INFO__INIT;
  *message = init_value;
}
void   iot__service__wifi_manage__action_out_get_ssid_list__init
                     (Iot__Service__WifiManage__ActionOutGetSsidList         *message)
{
  static const Iot__Service__WifiManage__ActionOutGetSsidList init_value = IOT__SERVICE__WIFI_MANAGE__ACTION_OUT_GET_SSID_LIST__INIT;
  *message = init_value;
}
size_t iot__service__wifi_manage__action_out_get_ssid_list__get_packed_size
                     (const Iot__Service__WifiManage__ActionOutGetSsidList *message)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__action_out_get_ssid_list__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__wifi_manage__action_out_get_ssid_list__pack
                     (const Iot__Service__WifiManage__ActionOutGetSsidList *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__action_out_get_ssid_list__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__wifi_manage__action_out_get_ssid_list__pack_to_buffer
                     (const Iot__Service__WifiManage__ActionOutGetSsidList *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__action_out_get_ssid_list__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__WifiManage__ActionOutGetSsidList *
       iot__service__wifi_manage__action_out_get_ssid_list__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__WifiManage__ActionOutGetSsidList *)
     protobuf_c_message_unpack (&iot__service__wifi_manage__action_out_get_ssid_list__descriptor,
                                allocator, len, data);
}
void   iot__service__wifi_manage__action_out_get_ssid_list__free_unpacked
                     (Iot__Service__WifiManage__ActionOutGetSsidList *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__wifi_manage__action_out_get_ssid_list__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__wifi_manage__properties__init
                     (Iot__Service__WifiManage__Properties         *message)
{
  static const Iot__Service__WifiManage__Properties init_value = IOT__SERVICE__WIFI_MANAGE__PROPERTIES__INIT;
  *message = init_value;
}
size_t iot__service__wifi_manage__properties__get_packed_size
                     (const Iot__Service__WifiManage__Properties *message)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__properties__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__wifi_manage__properties__pack
                     (const Iot__Service__WifiManage__Properties *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__properties__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__wifi_manage__properties__pack_to_buffer
                     (const Iot__Service__WifiManage__Properties *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__wifi_manage__properties__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__WifiManage__Properties *
       iot__service__wifi_manage__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__WifiManage__Properties *)
     protobuf_c_message_unpack (&iot__service__wifi_manage__properties__descriptor,
                                allocator, len, data);
}
void   iot__service__wifi_manage__properties__free_unpacked
                     (Iot__Service__WifiManage__Properties *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__wifi_manage__properties__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor iot__service__wifi_manage__wifi_auto_change__field_descriptors[2] =
{
  {
    "ssid",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__WifiManage__WifiAutoChange, ssid),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "status",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__WifiManage__WifiAutoChange, status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__wifi_manage__wifi_auto_change__field_indices_by_name[] = {
  0,   /* field[0] = ssid */
  1,   /* field[1] = status */
};
static const ProtobufCIntRange iot__service__wifi_manage__wifi_auto_change__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor iot__service__wifi_manage__wifi_auto_change__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.wifiManage.WifiAutoChange",
  "WifiAutoChange",
  "Iot__Service__WifiManage__WifiAutoChange",
  "iot.service.wifiManage",
  sizeof(Iot__Service__WifiManage__WifiAutoChange),
  2,
  iot__service__wifi_manage__wifi_auto_change__field_descriptors,
  iot__service__wifi_manage__wifi_auto_change__field_indices_by_name,
  1,  iot__service__wifi_manage__wifi_auto_change__number_ranges,
  (ProtobufCMessageInit) iot__service__wifi_manage__wifi_auto_change__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__wifi_manage__auto_change_configuration__field_descriptors[2] =
{
  {
    "ssid",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__WifiManage__AutoChangeConfiguration, ssid),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "password",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__WifiManage__AutoChangeConfiguration, password),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__wifi_manage__auto_change_configuration__field_indices_by_name[] = {
  1,   /* field[1] = password */
  0,   /* field[0] = ssid */
};
static const ProtobufCIntRange iot__service__wifi_manage__auto_change_configuration__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor iot__service__wifi_manage__auto_change_configuration__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.wifiManage.AutoChangeConfiguration",
  "AutoChangeConfiguration",
  "Iot__Service__WifiManage__AutoChangeConfiguration",
  "iot.service.wifiManage",
  sizeof(Iot__Service__WifiManage__AutoChangeConfiguration),
  2,
  iot__service__wifi_manage__auto_change_configuration__field_descriptors,
  iot__service__wifi_manage__auto_change_configuration__field_indices_by_name,
  1,  iot__service__wifi_manage__auto_change_configuration__number_ranges,
  (ProtobufCMessageInit) iot__service__wifi_manage__auto_change_configuration__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define iot__service__wifi_manage__action_in_get_ssid_list__field_descriptors NULL
#define iot__service__wifi_manage__action_in_get_ssid_list__field_indices_by_name NULL
#define iot__service__wifi_manage__action_in_get_ssid_list__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__wifi_manage__action_in_get_ssid_list__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.wifiManage.ActionInGetSsidList",
  "ActionInGetSsidList",
  "Iot__Service__WifiManage__ActionInGetSsidList",
  "iot.service.wifiManage",
  sizeof(Iot__Service__WifiManage__ActionInGetSsidList),
  0,
  iot__service__wifi_manage__action_in_get_ssid_list__field_descriptors,
  iot__service__wifi_manage__action_in_get_ssid_list__field_indices_by_name,
  0,  iot__service__wifi_manage__action_in_get_ssid_list__number_ranges,
  (ProtobufCMessageInit) iot__service__wifi_manage__action_in_get_ssid_list__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__wifi_manage__action_out_get_ssid_list__ssid_info__field_descriptors[2] =
{
  {
    "ssid",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__WifiManage__ActionOutGetSsidList__SsidInfo, ssid),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rssi",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__WifiManage__ActionOutGetSsidList__SsidInfo, rssi),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__wifi_manage__action_out_get_ssid_list__ssid_info__field_indices_by_name[] = {
  1,   /* field[1] = rssi */
  0,   /* field[0] = ssid */
};
static const ProtobufCIntRange iot__service__wifi_manage__action_out_get_ssid_list__ssid_info__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor iot__service__wifi_manage__action_out_get_ssid_list__ssid_info__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.wifiManage.ActionOutGetSsidList.SsidInfo",
  "SsidInfo",
  "Iot__Service__WifiManage__ActionOutGetSsidList__SsidInfo",
  "iot.service.wifiManage",
  sizeof(Iot__Service__WifiManage__ActionOutGetSsidList__SsidInfo),
  2,
  iot__service__wifi_manage__action_out_get_ssid_list__ssid_info__field_descriptors,
  iot__service__wifi_manage__action_out_get_ssid_list__ssid_info__field_indices_by_name,
  1,  iot__service__wifi_manage__action_out_get_ssid_list__ssid_info__number_ranges,
  (ProtobufCMessageInit) iot__service__wifi_manage__action_out_get_ssid_list__ssid_info__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__wifi_manage__action_out_get_ssid_list__field_descriptors[1] =
{
  {
    "ssidInfo",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Iot__Service__WifiManage__ActionOutGetSsidList, n_ssidinfo),
    offsetof(Iot__Service__WifiManage__ActionOutGetSsidList, ssidinfo),
    &iot__service__wifi_manage__action_out_get_ssid_list__ssid_info__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__wifi_manage__action_out_get_ssid_list__field_indices_by_name[] = {
  0,   /* field[0] = ssidInfo */
};
static const ProtobufCIntRange iot__service__wifi_manage__action_out_get_ssid_list__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor iot__service__wifi_manage__action_out_get_ssid_list__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.wifiManage.ActionOutGetSsidList",
  "ActionOutGetSsidList",
  "Iot__Service__WifiManage__ActionOutGetSsidList",
  "iot.service.wifiManage",
  sizeof(Iot__Service__WifiManage__ActionOutGetSsidList),
  1,
  iot__service__wifi_manage__action_out_get_ssid_list__field_descriptors,
  iot__service__wifi_manage__action_out_get_ssid_list__field_indices_by_name,
  1,  iot__service__wifi_manage__action_out_get_ssid_list__number_ranges,
  (ProtobufCMessageInit) iot__service__wifi_manage__action_out_get_ssid_list__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__wifi_manage__properties__field_descriptors[3] =
{
  {
    "wifiAutoChangeEnable",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__WifiManage__Properties, wifiautochangeenable),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "wifiAutoChange",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Iot__Service__WifiManage__Properties, n_wifiautochange),
    offsetof(Iot__Service__WifiManage__Properties, wifiautochange),
    &array_node__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "autoChangeConfiguration",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Iot__Service__WifiManage__Properties, n_autochangeconfiguration),
    offsetof(Iot__Service__WifiManage__Properties, autochangeconfiguration),
    &array_node__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__wifi_manage__properties__field_indices_by_name[] = {
  2,   /* field[2] = autoChangeConfiguration */
  1,   /* field[1] = wifiAutoChange */
  0,   /* field[0] = wifiAutoChangeEnable */
};
static const ProtobufCIntRange iot__service__wifi_manage__properties__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor iot__service__wifi_manage__properties__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.wifiManage.Properties",
  "Properties",
  "Iot__Service__WifiManage__Properties",
  "iot.service.wifiManage",
  sizeof(Iot__Service__WifiManage__Properties),
  3,
  iot__service__wifi_manage__properties__field_descriptors,
  iot__service__wifi_manage__properties__field_indices_by_name,
  1,  iot__service__wifi_manage__properties__number_ranges,
  (ProtobufCMessageInit) iot__service__wifi_manage__properties__init,
  NULL,NULL,NULL    /* reserved[123] */
};
