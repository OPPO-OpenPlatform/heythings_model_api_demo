/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: meshNodeFeature.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "meshNodeFeature.pb-c.h"
void   iot__service__mesh_node_feature__mesh_net_index__init
                     (Iot__Service__MeshNodeFeature__MeshNetIndex         *message)
{
  static const Iot__Service__MeshNodeFeature__MeshNetIndex init_value = IOT__SERVICE__MESH_NODE_FEATURE__MESH_NET_INDEX__INIT;
  *message = init_value;
}
size_t iot__service__mesh_node_feature__mesh_net_index__get_packed_size
                     (const Iot__Service__MeshNodeFeature__MeshNetIndex *message)
{
  assert(message->base.descriptor == &iot__service__mesh_node_feature__mesh_net_index__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__mesh_node_feature__mesh_net_index__pack
                     (const Iot__Service__MeshNodeFeature__MeshNetIndex *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__mesh_node_feature__mesh_net_index__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__mesh_node_feature__mesh_net_index__pack_to_buffer
                     (const Iot__Service__MeshNodeFeature__MeshNetIndex *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__mesh_node_feature__mesh_net_index__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__MeshNodeFeature__MeshNetIndex *
       iot__service__mesh_node_feature__mesh_net_index__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__MeshNodeFeature__MeshNetIndex *)
     protobuf_c_message_unpack (&iot__service__mesh_node_feature__mesh_net_index__descriptor,
                                allocator, len, data);
}
void   iot__service__mesh_node_feature__mesh_net_index__free_unpacked
                     (Iot__Service__MeshNodeFeature__MeshNetIndex *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__mesh_node_feature__mesh_net_index__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__mesh_node_feature__mesh_app_index__init
                     (Iot__Service__MeshNodeFeature__MeshAppIndex         *message)
{
  static const Iot__Service__MeshNodeFeature__MeshAppIndex init_value = IOT__SERVICE__MESH_NODE_FEATURE__MESH_APP_INDEX__INIT;
  *message = init_value;
}
size_t iot__service__mesh_node_feature__mesh_app_index__get_packed_size
                     (const Iot__Service__MeshNodeFeature__MeshAppIndex *message)
{
  assert(message->base.descriptor == &iot__service__mesh_node_feature__mesh_app_index__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__mesh_node_feature__mesh_app_index__pack
                     (const Iot__Service__MeshNodeFeature__MeshAppIndex *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__mesh_node_feature__mesh_app_index__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__mesh_node_feature__mesh_app_index__pack_to_buffer
                     (const Iot__Service__MeshNodeFeature__MeshAppIndex *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__mesh_node_feature__mesh_app_index__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__MeshNodeFeature__MeshAppIndex *
       iot__service__mesh_node_feature__mesh_app_index__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__MeshNodeFeature__MeshAppIndex *)
     protobuf_c_message_unpack (&iot__service__mesh_node_feature__mesh_app_index__descriptor,
                                allocator, len, data);
}
void   iot__service__mesh_node_feature__mesh_app_index__free_unpacked
                     (Iot__Service__MeshNodeFeature__MeshAppIndex *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__mesh_node_feature__mesh_app_index__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_model_publish__init
                     (Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish         *message)
{
  static const Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish init_value = IOT__SERVICE__MESH_NODE_FEATURE__MESH_ELEMENT__MESH_MODEL__MESH_MODEL_PUBLISH__INIT;
  *message = init_value;
}
void   iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_group__init
                     (Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshGroup         *message)
{
  static const Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshGroup init_value = IOT__SERVICE__MESH_NODE_FEATURE__MESH_ELEMENT__MESH_MODEL__MESH_GROUP__INIT;
  *message = init_value;
}
void   iot__service__mesh_node_feature__mesh_element__mesh_model__init
                     (Iot__Service__MeshNodeFeature__MeshElement__MeshModel         *message)
{
  static const Iot__Service__MeshNodeFeature__MeshElement__MeshModel init_value = IOT__SERVICE__MESH_NODE_FEATURE__MESH_ELEMENT__MESH_MODEL__INIT;
  *message = init_value;
}
void   iot__service__mesh_node_feature__mesh_element__init
                     (Iot__Service__MeshNodeFeature__MeshElement         *message)
{
  static const Iot__Service__MeshNodeFeature__MeshElement init_value = IOT__SERVICE__MESH_NODE_FEATURE__MESH_ELEMENT__INIT;
  *message = init_value;
}
size_t iot__service__mesh_node_feature__mesh_element__get_packed_size
                     (const Iot__Service__MeshNodeFeature__MeshElement *message)
{
  assert(message->base.descriptor == &iot__service__mesh_node_feature__mesh_element__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__mesh_node_feature__mesh_element__pack
                     (const Iot__Service__MeshNodeFeature__MeshElement *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__mesh_node_feature__mesh_element__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__mesh_node_feature__mesh_element__pack_to_buffer
                     (const Iot__Service__MeshNodeFeature__MeshElement *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__mesh_node_feature__mesh_element__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__MeshNodeFeature__MeshElement *
       iot__service__mesh_node_feature__mesh_element__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__MeshNodeFeature__MeshElement *)
     protobuf_c_message_unpack (&iot__service__mesh_node_feature__mesh_element__descriptor,
                                allocator, len, data);
}
void   iot__service__mesh_node_feature__mesh_element__free_unpacked
                     (Iot__Service__MeshNodeFeature__MeshElement *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__mesh_node_feature__mesh_element__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   iot__service__mesh_node_feature__properties__init
                     (Iot__Service__MeshNodeFeature__Properties         *message)
{
  static const Iot__Service__MeshNodeFeature__Properties init_value = IOT__SERVICE__MESH_NODE_FEATURE__PROPERTIES__INIT;
  *message = init_value;
}
size_t iot__service__mesh_node_feature__properties__get_packed_size
                     (const Iot__Service__MeshNodeFeature__Properties *message)
{
  assert(message->base.descriptor == &iot__service__mesh_node_feature__properties__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t iot__service__mesh_node_feature__properties__pack
                     (const Iot__Service__MeshNodeFeature__Properties *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &iot__service__mesh_node_feature__properties__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t iot__service__mesh_node_feature__properties__pack_to_buffer
                     (const Iot__Service__MeshNodeFeature__Properties *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &iot__service__mesh_node_feature__properties__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Iot__Service__MeshNodeFeature__Properties *
       iot__service__mesh_node_feature__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Iot__Service__MeshNodeFeature__Properties *)
     protobuf_c_message_unpack (&iot__service__mesh_node_feature__properties__descriptor,
                                allocator, len, data);
}
void   iot__service__mesh_node_feature__properties__free_unpacked
                     (Iot__Service__MeshNodeFeature__Properties *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &iot__service__mesh_node_feature__properties__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor iot__service__mesh_node_feature__mesh_net_index__field_descriptors[1] =
{
  {
    "netIdx",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__MeshNodeFeature__MeshNetIndex, netidx),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__mesh_node_feature__mesh_net_index__field_indices_by_name[] = {
  0,   /* field[0] = netIdx */
};
static const ProtobufCIntRange iot__service__mesh_node_feature__mesh_net_index__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor iot__service__mesh_node_feature__mesh_net_index__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.meshNodeFeature.MeshNetIndex",
  "MeshNetIndex",
  "Iot__Service__MeshNodeFeature__MeshNetIndex",
  "iot.service.meshNodeFeature",
  sizeof(Iot__Service__MeshNodeFeature__MeshNetIndex),
  1,
  iot__service__mesh_node_feature__mesh_net_index__field_descriptors,
  iot__service__mesh_node_feature__mesh_net_index__field_indices_by_name,
  1,  iot__service__mesh_node_feature__mesh_net_index__number_ranges,
  (ProtobufCMessageInit) iot__service__mesh_node_feature__mesh_net_index__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__mesh_node_feature__mesh_app_index__field_descriptors[1] =
{
  {
    "appIdx",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__MeshNodeFeature__MeshAppIndex, appidx),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__mesh_node_feature__mesh_app_index__field_indices_by_name[] = {
  0,   /* field[0] = appIdx */
};
static const ProtobufCIntRange iot__service__mesh_node_feature__mesh_app_index__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor iot__service__mesh_node_feature__mesh_app_index__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.meshNodeFeature.MeshAppIndex",
  "MeshAppIndex",
  "Iot__Service__MeshNodeFeature__MeshAppIndex",
  "iot.service.meshNodeFeature",
  sizeof(Iot__Service__MeshNodeFeature__MeshAppIndex),
  1,
  iot__service__mesh_node_feature__mesh_app_index__field_descriptors,
  iot__service__mesh_node_feature__mesh_app_index__field_indices_by_name,
  1,  iot__service__mesh_node_feature__mesh_app_index__number_ranges,
  (ProtobufCMessageInit) iot__service__mesh_node_feature__mesh_app_index__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_model_publish__field_descriptors[2] =
{
  {
    "dst",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish, dst),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "key",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish, key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_model_publish__field_indices_by_name[] = {
  0,   /* field[0] = dst */
  1,   /* field[1] = key */
};
static const ProtobufCIntRange iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_model_publish__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_model_publish__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.meshNodeFeature.MeshElement.MeshModel.MeshModelPublish",
  "MeshModelPublish",
  "Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish",
  "iot.service.meshNodeFeature",
  sizeof(Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish),
  2,
  iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_model_publish__field_descriptors,
  iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_model_publish__field_indices_by_name,
  1,  iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_model_publish__number_ranges,
  (ProtobufCMessageInit) iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_model_publish__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_group__field_descriptors[1] =
{
  {
    "group",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshGroup, group),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_group__field_indices_by_name[] = {
  0,   /* field[0] = group */
};
static const ProtobufCIntRange iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_group__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_group__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.meshNodeFeature.MeshElement.MeshModel.MeshGroup",
  "MeshGroup",
  "Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshGroup",
  "iot.service.meshNodeFeature",
  sizeof(Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshGroup),
  1,
  iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_group__field_descriptors,
  iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_group__field_indices_by_name,
  1,  iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_group__number_ranges,
  (ProtobufCMessageInit) iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_group__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__mesh_node_feature__mesh_element__mesh_model__field_descriptors[5] =
{
  {
    "companyId",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__MeshNodeFeature__MeshElement__MeshModel, companyid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "modelId",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__MeshNodeFeature__MeshElement__MeshModel, modelid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pub",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__MeshNodeFeature__MeshElement__MeshModel, pub),
    &iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_model_publish__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "appkeyIdx",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Iot__Service__MeshNodeFeature__MeshElement__MeshModel, n_appkeyidx),
    offsetof(Iot__Service__MeshNodeFeature__MeshElement__MeshModel, appkeyidx),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_PACKED,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "groups",
    5,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Iot__Service__MeshNodeFeature__MeshElement__MeshModel, n_groups),
    offsetof(Iot__Service__MeshNodeFeature__MeshElement__MeshModel, groups),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_PACKED,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__mesh_node_feature__mesh_element__mesh_model__field_indices_by_name[] = {
  3,   /* field[3] = appkeyIdx */
  0,   /* field[0] = companyId */
  4,   /* field[4] = groups */
  1,   /* field[1] = modelId */
  2,   /* field[2] = pub */
};
static const ProtobufCIntRange iot__service__mesh_node_feature__mesh_element__mesh_model__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor iot__service__mesh_node_feature__mesh_element__mesh_model__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.meshNodeFeature.MeshElement.MeshModel",
  "MeshModel",
  "Iot__Service__MeshNodeFeature__MeshElement__MeshModel",
  "iot.service.meshNodeFeature",
  sizeof(Iot__Service__MeshNodeFeature__MeshElement__MeshModel),
  5,
  iot__service__mesh_node_feature__mesh_element__mesh_model__field_descriptors,
  iot__service__mesh_node_feature__mesh_element__mesh_model__field_indices_by_name,
  1,  iot__service__mesh_node_feature__mesh_element__mesh_model__number_ranges,
  (ProtobufCMessageInit) iot__service__mesh_node_feature__mesh_element__mesh_model__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__mesh_node_feature__mesh_element__field_descriptors[2] =
{
  {
    "addr",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__MeshNodeFeature__MeshElement, addr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "meshModel",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Iot__Service__MeshNodeFeature__MeshElement, n_meshmodel),
    offsetof(Iot__Service__MeshNodeFeature__MeshElement, meshmodel),
    &iot__service__mesh_node_feature__mesh_element__mesh_model__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__mesh_node_feature__mesh_element__field_indices_by_name[] = {
  0,   /* field[0] = addr */
  1,   /* field[1] = meshModel */
};
static const ProtobufCIntRange iot__service__mesh_node_feature__mesh_element__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor iot__service__mesh_node_feature__mesh_element__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.meshNodeFeature.MeshElement",
  "MeshElement",
  "Iot__Service__MeshNodeFeature__MeshElement",
  "iot.service.meshNodeFeature",
  sizeof(Iot__Service__MeshNodeFeature__MeshElement),
  2,
  iot__service__mesh_node_feature__mesh_element__field_descriptors,
  iot__service__mesh_node_feature__mesh_element__field_indices_by_name,
  1,  iot__service__mesh_node_feature__mesh_element__number_ranges,
  (ProtobufCMessageInit) iot__service__mesh_node_feature__mesh_element__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor iot__service__mesh_node_feature__properties__field_descriptors[5] =
{
  {
    "primaryElemAddr",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__MeshNodeFeature__Properties, primaryelemaddr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "meshElement",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Iot__Service__MeshNodeFeature__Properties, n_meshelement),
    offsetof(Iot__Service__MeshNodeFeature__Properties, meshelement),
    &array_node__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "meshNetIndex",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Iot__Service__MeshNodeFeature__Properties, n_meshnetindex),
    offsetof(Iot__Service__MeshNodeFeature__Properties, meshnetindex),
    &array_node__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "meshAppIndex",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Iot__Service__MeshNodeFeature__Properties, n_meshappindex),
    offsetof(Iot__Service__MeshNodeFeature__Properties, meshappindex),
    &array_node__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "feature",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Iot__Service__MeshNodeFeature__Properties, feature),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned iot__service__mesh_node_feature__properties__field_indices_by_name[] = {
  4,   /* field[4] = feature */
  3,   /* field[3] = meshAppIndex */
  1,   /* field[1] = meshElement */
  2,   /* field[2] = meshNetIndex */
  0,   /* field[0] = primaryElemAddr */
};
static const ProtobufCIntRange iot__service__mesh_node_feature__properties__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor iot__service__mesh_node_feature__properties__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "iot.service.meshNodeFeature.Properties",
  "Properties",
  "Iot__Service__MeshNodeFeature__Properties",
  "iot.service.meshNodeFeature",
  sizeof(Iot__Service__MeshNodeFeature__Properties),
  5,
  iot__service__mesh_node_feature__properties__field_descriptors,
  iot__service__mesh_node_feature__properties__field_indices_by_name,
  1,  iot__service__mesh_node_feature__properties__number_ranges,
  (ProtobufCMessageInit) iot__service__mesh_node_feature__properties__init,
  NULL,NULL,NULL    /* reserved[123] */
};