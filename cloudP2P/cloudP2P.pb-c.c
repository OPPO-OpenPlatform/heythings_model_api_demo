/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: cloudP2P.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "cloudP2P.pb-c.h"
void   iot__service__cloud_p2p__action_in_get_stream_info__init
                     (Iot__Service__CloudP2P__ActionInGetStreamInfo         *message)
{
  static const Iot__Service__CloudP2P__ActionInGetStreamInfo init_value = IOT__SERVICE__CLOUD_P2_P__ACTION_IN_GET_STREAM_INFO__INIT;
  *message = init_value;
}
size_t iot__service__cloud_p2p__action_in_get_stream_info__get_packed_size
                     (const Iot__Service__CloudP2P__ActionInGetStreamInfo *message)
{
  assert(message->base.descriptor == &iot__service__cloud_p2p__action_in_get_stream_info__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__cloud_p2p__action_in_get_stream_info__pack
                     (const Iot__Service__CloudP2P__ActionInGetStreamInfo *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__cloud_p2p__action_in_get_stream_info__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__cloud_p2p__action_in_get_stream_info__pack_to_buffer
                     (const Iot__Service__CloudP2P__ActionInGetStreamInfo *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__cloud_p2p__action_in_get_stream_info__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__CloudP2P__ActionInGetStreamInfo *
       iot__service__cloud_p2p__action_in_get_stream_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__CloudP2P__ActionInGetStreamInfo *)
     protobuf_c_message_unpack (&iot__service__cloud_p2p__action_in_get_stream_info__descriptor,
                                allocator, len, data);
}
void   iot__service__cloud_p2p__action_in_get_stream_info__free_unpacked
                     (Iot__Service__CloudP2P__ActionInGetStreamInfo *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__cloud_p2p__action_in_get_stream_info__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__cloud_p2p__action_out_get_stream_info__cs2_info__init
                     (Iot__Service__CloudP2P__ActionOutGetStreamInfo__Cs2Info         *message)
{
  static const Iot__Service__CloudP2P__ActionOutGetStreamInfo__Cs2Info init_value = IOT__SERVICE__CLOUD_P2_P__ACTION_OUT_GET_STREAM_INFO__CS2_INFO__INIT;
  *message = init_value;
}
void   iot__service__cloud_p2p__action_out_get_stream_info__init
                     (Iot__Service__CloudP2P__ActionOutGetStreamInfo         *message)
{
  static const Iot__Service__CloudP2P__ActionOutGetStreamInfo init_value = IOT__SERVICE__CLOUD_P2_P__ACTION_OUT_GET_STREAM_INFO__INIT;
  *message = init_value;
}
size_t iot__service__cloud_p2p__action_out_get_stream_info__get_packed_size
                     (const Iot__Service__CloudP2P__ActionOutGetStreamInfo *message)
{
  assert(message->base.descriptor == &iot__service__cloud_p2p__action_out_get_stream_info__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__cloud_p2p__action_out_get_stream_info__pack
                     (const Iot__Service__CloudP2P__ActionOutGetStreamInfo *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__cloud_p2p__action_out_get_stream_info__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__cloud_p2p__action_out_get_stream_info__pack_to_buffer
                     (const Iot__Service__CloudP2P__ActionOutGetStreamInfo *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__cloud_p2p__action_out_get_stream_info__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__CloudP2P__ActionOutGetStreamInfo *
       iot__service__cloud_p2p__action_out_get_stream_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__CloudP2P__ActionOutGetStreamInfo *)
     protobuf_c_message_unpack (&iot__service__cloud_p2p__action_out_get_stream_info__descriptor,
                                allocator, len, data);
}
void   iot__service__cloud_p2p__action_out_get_stream_info__free_unpacked
                     (Iot__Service__CloudP2P__ActionOutGetStreamInfo *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__cloud_p2p__action_out_get_stream_info__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__cloud_p2p__properties__init
                     (Iot__Service__CloudP2P__Properties         *message)
{
  static const Iot__Service__CloudP2P__Properties init_value = IOT__SERVICE__CLOUD_P2_P__PROPERTIES__INIT;
  *message = init_value;
}
size_t iot__service__cloud_p2p__properties__get_packed_size
                     (const Iot__Service__CloudP2P__Properties *message)
{
  assert(message->base.descriptor == &iot__service__cloud_p2p__properties__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__cloud_p2p__properties__pack
                     (const Iot__Service__CloudP2P__Properties *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__cloud_p2p__properties__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__cloud_p2p__properties__pack_to_buffer
                     (const Iot__Service__CloudP2P__Properties *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__cloud_p2p__properties__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__CloudP2P__Properties *
       iot__service__cloud_p2p__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__CloudP2P__Properties *)
     protobuf_c_message_unpack (&iot__service__cloud_p2p__properties__descriptor,
                                allocator, len, data);
}
void   iot__service__cloud_p2p__properties__free_unpacked
                     (Iot__Service__CloudP2P__Properties *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__cloud_p2p__properties__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor iot__service__cloud_p2p__action_in_get_stream_info__field_descriptors[1] =
{
  {
    "supportVendor",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(Iot__Service__CloudP2P__ActionInGetStreamInfo, n_supportvendor),
    offsetof(Iot__Service__CloudP2P__ActionInGetStreamInfo, supportvendor),
    &iot__service__cloud_p2p__enum_vendor__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_PACKED,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__cloud_p2p__action_in_get_stream_info__field_indices_by_name[] = {
  0,   /* field[0] = supportVendor */
};
static const ProtobufCIntRange iot__service__cloud_p2p__action_in_get_stream_info__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor iot__service__cloud_p2p__action_in_get_stream_info__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.cloudP2P.ActionInGetStreamInfo",
  "ActionInGetStreamInfo",
  "Iot__Service__CloudP2P__ActionInGetStreamInfo",
  "iot.service.cloudP2P",
  sizeof(Iot__Service__CloudP2P__ActionInGetStreamInfo),
  1,
  iot__service__cloud_p2p__action_in_get_stream_info__field_descriptors,
  iot__service__cloud_p2p__action_in_get_stream_info__field_indices_by_name,
  1,  iot__service__cloud_p2p__action_in_get_stream_info__number_ranges,
  (ProtobufCMessageInit) iot__service__cloud_p2p__action_in_get_stream_info__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__cloud_p2p__action_out_get_stream_info__cs2_info__field_descriptors[4] =
{
  {
    "p2pDid",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__CloudP2P__ActionOutGetStreamInfo__Cs2Info, p2pdid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "license",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__CloudP2P__ActionOutGetStreamInfo__Cs2Info, license),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "initString",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__CloudP2P__ActionOutGetStreamInfo__Cs2Info, initstring),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "crcKey",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__CloudP2P__ActionOutGetStreamInfo__Cs2Info, crckey),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__cloud_p2p__action_out_get_stream_info__cs2_info__field_indices_by_name[] = {
  3,   /* field[3] = crcKey */
  2,   /* field[2] = initString */
  1,   /* field[1] = license */
  0,   /* field[0] = p2pDid */
};
static const ProtobufCIntRange iot__service__cloud_p2p__action_out_get_stream_info__cs2_info__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor iot__service__cloud_p2p__action_out_get_stream_info__cs2_info__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.cloudP2P.ActionOutGetStreamInfo.Cs2Info",
  "Cs2Info",
  "Iot__Service__CloudP2P__ActionOutGetStreamInfo__Cs2Info",
  "iot.service.cloudP2P",
  sizeof(Iot__Service__CloudP2P__ActionOutGetStreamInfo__Cs2Info),
  4,
  iot__service__cloud_p2p__action_out_get_stream_info__cs2_info__field_descriptors,
  iot__service__cloud_p2p__action_out_get_stream_info__cs2_info__field_indices_by_name,
  1,  iot__service__cloud_p2p__action_out_get_stream_info__cs2_info__number_ranges,
  (ProtobufCMessageInit) iot__service__cloud_p2p__action_out_get_stream_info__cs2_info__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__cloud_p2p__action_out_get_stream_info__field_descriptors[2] =
{
  {
    "code",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__CloudP2P__ActionOutGetStreamInfo, code),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cs2Info",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Iot__Service__CloudP2P__ActionOutGetStreamInfo, vendor_info_case),
    offsetof(Iot__Service__CloudP2P__ActionOutGetStreamInfo, cs2info),
    &iot__service__cloud_p2p__action_out_get_stream_info__cs2_info__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__cloud_p2p__action_out_get_stream_info__field_indices_by_name[] = {
  0,   /* field[0] = code */
  1,   /* field[1] = cs2Info */
};
static const ProtobufCIntRange iot__service__cloud_p2p__action_out_get_stream_info__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor iot__service__cloud_p2p__action_out_get_stream_info__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.cloudP2P.ActionOutGetStreamInfo",
  "ActionOutGetStreamInfo",
  "Iot__Service__CloudP2P__ActionOutGetStreamInfo",
  "iot.service.cloudP2P",
  sizeof(Iot__Service__CloudP2P__ActionOutGetStreamInfo),
  2,
  iot__service__cloud_p2p__action_out_get_stream_info__field_descriptors,
  iot__service__cloud_p2p__action_out_get_stream_info__field_indices_by_name,
  1,  iot__service__cloud_p2p__action_out_get_stream_info__number_ranges,
  (ProtobufCMessageInit) iot__service__cloud_p2p__action_out_get_stream_info__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define iot__service__cloud_p2p__properties__field_descriptors NULL
#define iot__service__cloud_p2p__properties__field_indices_by_name NULL
#define iot__service__cloud_p2p__properties__number_ranges NULL
const ProtobufCMessageDescriptor iot__service__cloud_p2p__properties__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.cloudP2P.Properties",
  "Properties",
  "Iot__Service__CloudP2P__Properties",
  "iot.service.cloudP2P",
  sizeof(Iot__Service__CloudP2P__Properties),
  0,
  iot__service__cloud_p2p__properties__field_descriptors,
  iot__service__cloud_p2p__properties__field_indices_by_name,
  0,  iot__service__cloud_p2p__properties__number_ranges,
  (ProtobufCMessageInit) iot__service__cloud_p2p__properties__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue iot__service__cloud_p2p__enum_vendor__enum_values_by_number[1] =
{
  { "CS2_NETWORK", "IOT__SERVICE__CLOUD_P2_P__ENUM_VENDOR__CS2_NETWORK", 0 },
};
static const ProtobufCIntRange iot__service__cloud_p2p__enum_vendor__value_ranges[] = {
{0, 0},{0, 1}
};
static const ProtobufCEnumValueIndex iot__service__cloud_p2p__enum_vendor__enum_values_by_name[1] =
{
  { "CS2_NETWORK", 0 },
};
const ProtobufCEnumDescriptor iot__service__cloud_p2p__enum_vendor__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "iot.service.cloudP2P.EnumVendor",
  "EnumVendor",
  "Iot__Service__CloudP2P__EnumVendor",
  "iot.service.cloudP2P",
  1,
  iot__service__cloud_p2p__enum_vendor__enum_values_by_number,
  1,
  iot__service__cloud_p2p__enum_vendor__enum_values_by_name,
  1,
  iot__service__cloud_p2p__enum_vendor__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
