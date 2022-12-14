/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: cwPipe.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "cwPipe.pb-c.h"
void   iot__service__cw_pipe__properties__init
                     (Iot__Service__CwPipe__Properties         *message)
{
  static const Iot__Service__CwPipe__Properties init_value = IOT__SERVICE__CW_PIPE__PROPERTIES__INIT;
  *message = init_value;
}
size_t iot__service__cw_pipe__properties__get_packed_size
                     (const Iot__Service__CwPipe__Properties *message)
{
  assert(message->base.descriptor == &iot__service__cw_pipe__properties__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__cw_pipe__properties__pack
                     (const Iot__Service__CwPipe__Properties *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__cw_pipe__properties__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__cw_pipe__properties__pack_to_buffer
                     (const Iot__Service__CwPipe__Properties *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__cw_pipe__properties__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__CwPipe__Properties *
       iot__service__cw_pipe__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__CwPipe__Properties *)
     protobuf_c_message_unpack (&iot__service__cw_pipe__properties__descriptor,
                                allocator, len, data);
}
void   iot__service__cw_pipe__properties__free_unpacked
                     (Iot__Service__CwPipe__Properties *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__cw_pipe__properties__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor iot__service__cw_pipe__properties__field_descriptors[6] =
{
  {
    "supplyWaterTemp",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__CwPipe__Properties, supplywatertemp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "supplywaterPres",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__CwPipe__Properties, supplywaterpres),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "supplyWaterRate",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__CwPipe__Properties, supplywaterrate),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "returnWaterTemp",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__CwPipe__Properties, returnwatertemp),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "returnwaterPres",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__CwPipe__Properties, returnwaterpres),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "returnWaterRate",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__CwPipe__Properties, returnwaterrate),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__cw_pipe__properties__field_indices_by_name[] = {
  5,   /* field[5] = returnWaterRate */
  3,   /* field[3] = returnWaterTemp */
  4,   /* field[4] = returnwaterPres */
  2,   /* field[2] = supplyWaterRate */
  0,   /* field[0] = supplyWaterTemp */
  1,   /* field[1] = supplywaterPres */
};
static const ProtobufCIntRange iot__service__cw_pipe__properties__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor iot__service__cw_pipe__properties__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.cwPipe.Properties",
  "Properties",
  "Iot__Service__CwPipe__Properties",
  "iot.service.cwPipe",
  sizeof(Iot__Service__CwPipe__Properties),
  6,
  iot__service__cw_pipe__properties__field_descriptors,
  iot__service__cw_pipe__properties__field_indices_by_name,
  1,  iot__service__cw_pipe__properties__number_ranges,
  (ProtobufCMessageInit) iot__service__cw_pipe__properties__init,
  NULL,NULL,NULL    /* reserved[123] */
};
