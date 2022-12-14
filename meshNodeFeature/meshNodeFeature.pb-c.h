/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: meshNodeFeature.proto */

#ifndef PROTOBUF_C_meshNodeFeature_2eproto__INCLUDED
#define PROTOBUF_C_meshNodeFeature_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "schema/common/common.pb-c.h"

typedef struct _Iot__Service__MeshNodeFeature__MeshNetIndex Iot__Service__MeshNodeFeature__MeshNetIndex;
typedef struct _Iot__Service__MeshNodeFeature__MeshAppIndex Iot__Service__MeshNodeFeature__MeshAppIndex;
typedef struct _Iot__Service__MeshNodeFeature__MeshElement Iot__Service__MeshNodeFeature__MeshElement;
typedef struct _Iot__Service__MeshNodeFeature__MeshElement__MeshModel Iot__Service__MeshNodeFeature__MeshElement__MeshModel;
typedef struct _Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish;
typedef struct _Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshGroup Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshGroup;
typedef struct _Iot__Service__MeshNodeFeature__Properties Iot__Service__MeshNodeFeature__Properties;


/* --- enums --- */


/* --- messages --- */

struct  _Iot__Service__MeshNodeFeature__MeshNetIndex
{
  ProtobufCMessage base;
  uint32_t netidx;
};
#define IOT__SERVICE__MESH_NODE_FEATURE__MESH_NET_INDEX__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__mesh_node_feature__mesh_net_index__descriptor) \
    , 0 }


struct  _Iot__Service__MeshNodeFeature__MeshAppIndex
{
  ProtobufCMessage base;
  uint32_t appidx;
};
#define IOT__SERVICE__MESH_NODE_FEATURE__MESH_APP_INDEX__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__mesh_node_feature__mesh_app_index__descriptor) \
    , 0 }


struct  _Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish
{
  ProtobufCMessage base;
  /*
   *publish addr
   */
  uint32_t dst;
  /*
   *publish appkey index
   */
  uint32_t key;
};
#define IOT__SERVICE__MESH_NODE_FEATURE__MESH_ELEMENT__MESH_MODEL__MESH_MODEL_PUBLISH__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_model_publish__descriptor) \
    , 0, 0 }


struct  _Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshGroup
{
  ProtobufCMessage base;
  uint32_t group;
};
#define IOT__SERVICE__MESH_NODE_FEATURE__MESH_ELEMENT__MESH_MODEL__MESH_GROUP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_group__descriptor) \
    , 0 }


struct  _Iot__Service__MeshNodeFeature__MeshElement__MeshModel
{
  ProtobufCMessage base;
  /*
   *sig model is 0xffff
   */
  uint32_t companyid;
  uint32_t modelid;
  Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish *pub;
  /*
   *appkey idx list
   */
  size_t n_appkeyidx;
  uint32_t *appkeyidx;
  /*
   *group addr list
   */
  size_t n_groups;
  uint32_t *groups;
};
#define IOT__SERVICE__MESH_NODE_FEATURE__MESH_ELEMENT__MESH_MODEL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__mesh_node_feature__mesh_element__mesh_model__descriptor) \
    , 0, 0, NULL, 0,NULL, 0,NULL }


struct  _Iot__Service__MeshNodeFeature__MeshElement
{
  ProtobufCMessage base;
  uint32_t addr;
  size_t n_meshmodel;
  Iot__Service__MeshNodeFeature__MeshElement__MeshModel **meshmodel;
};
#define IOT__SERVICE__MESH_NODE_FEATURE__MESH_ELEMENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__mesh_node_feature__mesh_element__descriptor) \
    , 0, 0,NULL }


struct  _Iot__Service__MeshNodeFeature__Properties
{
  ProtobufCMessage base;
  uint32_t primaryelemaddr;
  size_t n_meshelement;
  ArrayNode **meshelement;
  size_t n_meshnetindex;
  ArrayNode **meshnetindex;
  size_t n_meshappindex;
  ArrayNode **meshappindex;
  /*
   *feature bit: bit0-1 friend, bit2-3 low power, bit4-5 relay, bit6-7 proxy
   *feature value: 00 support & disable, 01 support & enable, 10 not support, 11 prohibited
   */
  uint32_t feature;
};
#define IOT__SERVICE__MESH_NODE_FEATURE__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__mesh_node_feature__properties__descriptor) \
    , 0, 0,NULL, 0,NULL, 0,NULL, 0 }


/* Iot__Service__MeshNodeFeature__MeshNetIndex methods */
void   iot__service__mesh_node_feature__mesh_net_index__init
                     (Iot__Service__MeshNodeFeature__MeshNetIndex         *message);
size_t iot__service__mesh_node_feature__mesh_net_index__get_packed_size
                     (const Iot__Service__MeshNodeFeature__MeshNetIndex   *message);
size_t iot__service__mesh_node_feature__mesh_net_index__pack
                     (const Iot__Service__MeshNodeFeature__MeshNetIndex   *message,
                      uint8_t             *out);
size_t iot__service__mesh_node_feature__mesh_net_index__pack_to_buffer
                     (const Iot__Service__MeshNodeFeature__MeshNetIndex   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__MeshNodeFeature__MeshNetIndex *
       iot__service__mesh_node_feature__mesh_net_index__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__mesh_node_feature__mesh_net_index__free_unpacked
                     (Iot__Service__MeshNodeFeature__MeshNetIndex *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__MeshNodeFeature__MeshAppIndex methods */
void   iot__service__mesh_node_feature__mesh_app_index__init
                     (Iot__Service__MeshNodeFeature__MeshAppIndex         *message);
size_t iot__service__mesh_node_feature__mesh_app_index__get_packed_size
                     (const Iot__Service__MeshNodeFeature__MeshAppIndex   *message);
size_t iot__service__mesh_node_feature__mesh_app_index__pack
                     (const Iot__Service__MeshNodeFeature__MeshAppIndex   *message,
                      uint8_t             *out);
size_t iot__service__mesh_node_feature__mesh_app_index__pack_to_buffer
                     (const Iot__Service__MeshNodeFeature__MeshAppIndex   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__MeshNodeFeature__MeshAppIndex *
       iot__service__mesh_node_feature__mesh_app_index__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__mesh_node_feature__mesh_app_index__free_unpacked
                     (Iot__Service__MeshNodeFeature__MeshAppIndex *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish methods */
void   iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_model_publish__init
                     (Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish         *message);
/* Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshGroup methods */
void   iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_group__init
                     (Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshGroup         *message);
/* Iot__Service__MeshNodeFeature__MeshElement__MeshModel methods */
void   iot__service__mesh_node_feature__mesh_element__mesh_model__init
                     (Iot__Service__MeshNodeFeature__MeshElement__MeshModel         *message);
/* Iot__Service__MeshNodeFeature__MeshElement methods */
void   iot__service__mesh_node_feature__mesh_element__init
                     (Iot__Service__MeshNodeFeature__MeshElement         *message);
size_t iot__service__mesh_node_feature__mesh_element__get_packed_size
                     (const Iot__Service__MeshNodeFeature__MeshElement   *message);
size_t iot__service__mesh_node_feature__mesh_element__pack
                     (const Iot__Service__MeshNodeFeature__MeshElement   *message,
                      uint8_t             *out);
size_t iot__service__mesh_node_feature__mesh_element__pack_to_buffer
                     (const Iot__Service__MeshNodeFeature__MeshElement   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__MeshNodeFeature__MeshElement *
       iot__service__mesh_node_feature__mesh_element__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__mesh_node_feature__mesh_element__free_unpacked
                     (Iot__Service__MeshNodeFeature__MeshElement *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__MeshNodeFeature__Properties methods */
void   iot__service__mesh_node_feature__properties__init
                     (Iot__Service__MeshNodeFeature__Properties         *message);
size_t iot__service__mesh_node_feature__properties__get_packed_size
                     (const Iot__Service__MeshNodeFeature__Properties   *message);
size_t iot__service__mesh_node_feature__properties__pack
                     (const Iot__Service__MeshNodeFeature__Properties   *message,
                      uint8_t             *out);
size_t iot__service__mesh_node_feature__properties__pack_to_buffer
                     (const Iot__Service__MeshNodeFeature__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__MeshNodeFeature__Properties *
       iot__service__mesh_node_feature__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__mesh_node_feature__properties__free_unpacked
                     (Iot__Service__MeshNodeFeature__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__MeshNodeFeature__MeshNetIndex_Closure)
                 (const Iot__Service__MeshNodeFeature__MeshNetIndex *message,
                  void *closure_data);
typedef void (*Iot__Service__MeshNodeFeature__MeshAppIndex_Closure)
                 (const Iot__Service__MeshNodeFeature__MeshAppIndex *message,
                  void *closure_data);
typedef void (*Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish_Closure)
                 (const Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshModelPublish *message,
                  void *closure_data);
typedef void (*Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshGroup_Closure)
                 (const Iot__Service__MeshNodeFeature__MeshElement__MeshModel__MeshGroup *message,
                  void *closure_data);
typedef void (*Iot__Service__MeshNodeFeature__MeshElement__MeshModel_Closure)
                 (const Iot__Service__MeshNodeFeature__MeshElement__MeshModel *message,
                  void *closure_data);
typedef void (*Iot__Service__MeshNodeFeature__MeshElement_Closure)
                 (const Iot__Service__MeshNodeFeature__MeshElement *message,
                  void *closure_data);
typedef void (*Iot__Service__MeshNodeFeature__Properties_Closure)
                 (const Iot__Service__MeshNodeFeature__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor iot__service__mesh_node_feature__mesh_net_index__descriptor;
extern const ProtobufCMessageDescriptor iot__service__mesh_node_feature__mesh_app_index__descriptor;
extern const ProtobufCMessageDescriptor iot__service__mesh_node_feature__mesh_element__descriptor;
extern const ProtobufCMessageDescriptor iot__service__mesh_node_feature__mesh_element__mesh_model__descriptor;
extern const ProtobufCMessageDescriptor iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_model_publish__descriptor;
extern const ProtobufCMessageDescriptor iot__service__mesh_node_feature__mesh_element__mesh_model__mesh_group__descriptor;
extern const ProtobufCMessageDescriptor iot__service__mesh_node_feature__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_meshNodeFeature_2eproto__INCLUDED */
