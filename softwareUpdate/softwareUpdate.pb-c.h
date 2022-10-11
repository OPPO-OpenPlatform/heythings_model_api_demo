/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: softwareUpdate.proto */

#ifndef PROTOBUF_C_softwareUpdate_2eproto__INCLUDED
#define PROTOBUF_C_softwareUpdate_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Iot__Service__SoftwareUpdate__ActionInStartUpdate Iot__Service__SoftwareUpdate__ActionInStartUpdate;
typedef struct _Iot__Service__SoftwareUpdate__ActionOutStartUpdate Iot__Service__SoftwareUpdate__ActionOutStartUpdate;
typedef struct _Iot__Service__SoftwareUpdate__ActionInStartUpdateFile Iot__Service__SoftwareUpdate__ActionInStartUpdateFile;
typedef struct _Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__FileInfo Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__FileInfo;
typedef struct _Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__Final Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__Final;
typedef struct _Iot__Service__SoftwareUpdate__ActionOutStartUpdateFile Iot__Service__SoftwareUpdate__ActionOutStartUpdateFile;
typedef struct _Iot__Service__SoftwareUpdate__ActionInQueryNewUpdate Iot__Service__SoftwareUpdate__ActionInQueryNewUpdate;
typedef struct _Iot__Service__SoftwareUpdate__ActionOutQueryNewUpdate Iot__Service__SoftwareUpdate__ActionOutQueryNewUpdate;
typedef struct _Iot__Service__SoftwareUpdate__ActionInPrepareForMeshNodeConnection Iot__Service__SoftwareUpdate__ActionInPrepareForMeshNodeConnection;
typedef struct _Iot__Service__SoftwareUpdate__ActionOutPrepareForMeshNodeConnection Iot__Service__SoftwareUpdate__ActionOutPrepareForMeshNodeConnection;
typedef struct _Iot__Service__SoftwareUpdate__Properties Iot__Service__SoftwareUpdate__Properties;


/* --- enums --- */

typedef enum _Iot__Service__SoftwareUpdate__EnumUpdateState {
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_STATE__IDLE = 0,
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_STATE__PREPARE = 1,
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_STATE__DOWNLOADING = 2,
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_STATE__DOWNLOADED = 3,
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_STATE__UPDATING = 4,
  /*
   *致命错误，功能不可用，重启不可恢复
   */
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_STATE__FATAL = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_STATE)
} Iot__Service__SoftwareUpdate__EnumUpdateState;
typedef enum _Iot__Service__SoftwareUpdate__EnumUpdateError {
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_ERROR__INITIAL = 0,
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_ERROR__NOT_ENOUGH_FLASH_MEMORY = 1,
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_ERROR__NOT_ENOUGH_RAM_MEMORY = 2,
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_ERROR__CONNECTION_LOST = 3,
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_ERROR__INTEGRITY_CHECK_FAILURE = 4,
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_ERROR__INVALID_URL = 5,
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_ERROR__UPDATE_FAILED = 6,
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_ERROR__CURRENT_VERSION_ERR = 7,
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_ERROR__SIGNATURE_TYPE_ERR = 8,
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_ERROR__SIGNATURE_INVALID = 9,
  /*
   *用于固件打包升级，mcu升级失败
   */
  IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_ERROR__MCU_UPDATE_FAILED = 10
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_ERROR)
} Iot__Service__SoftwareUpdate__EnumUpdateError;
typedef enum _Iot__Service__SoftwareUpdate__SignatureType {
  IOT__SERVICE__SOFTWARE_UPDATE__SIGNATURE_TYPE__None = 0,
  IOT__SERVICE__SOFTWARE_UPDATE__SIGNATURE_TYPE__EcdsaSecp256r1Sha256 = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__SOFTWARE_UPDATE__SIGNATURE_TYPE)
} Iot__Service__SoftwareUpdate__SignatureType;

/* --- messages --- */

struct  _Iot__Service__SoftwareUpdate__ActionInStartUpdate
{
  ProtobufCMessage base;
  /*
   * 软件更新包的链接
   */
  char *packageurl;
  /*
   * 验证当前版本
   */
  char *validatefromver;
  /*
   * 签名类型（设备不支持签名类型，则直接报告升级失败）
   */
  Iot__Service__SoftwareUpdate__SignatureType signtype;
  /*
   * 签名数据
   */
  ProtobufCBinaryData signatures;
};
#define IOT__SERVICE__SOFTWARE_UPDATE__ACTION_IN_START_UPDATE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__software_update__action_in_start_update__descriptor) \
    , (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, IOT__SERVICE__SOFTWARE_UPDATE__SIGNATURE_TYPE__None, {0,NULL} }


struct  _Iot__Service__SoftwareUpdate__ActionOutStartUpdate
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__SOFTWARE_UPDATE__ACTION_OUT_START_UPDATE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__software_update__action_out_start_update__descriptor) \
     }


struct  _Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__FileInfo
{
  ProtobufCMessage base;
  /*
   * 验证当前版本
   */
  char *validatefromver;
  /*
   * 签名类型
   * 设备不支持签名类型，则直接报告升级失败。
   */
  Iot__Service__SoftwareUpdate__SignatureType signtype;
  /*
   * 签名数据
   */
  ProtobufCBinaryData signatures;
  /*
   * 升级包总大小，单位：Byte，-1表示未知大小
   */
  int64_t size;
};
#define IOT__SERVICE__SOFTWARE_UPDATE__ACTION_IN_START_UPDATE_FILE__FILE_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__software_update__action_in_start_update_file__file_info__descriptor) \
    , (char *)protobuf_c_empty_string, IOT__SERVICE__SOFTWARE_UPDATE__SIGNATURE_TYPE__None, {0,NULL}, 0 }


struct  _Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__Final
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__SOFTWARE_UPDATE__ACTION_IN_START_UPDATE_FILE__FINAL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__software_update__action_in_start_update_file__final__descriptor) \
     }


typedef enum {
  IOT__SERVICE__SOFTWARE_UPDATE__ACTION_IN_START_UPDATE_FILE__SEND_TYPE__NOT_SET = 0,
  IOT__SERVICE__SOFTWARE_UPDATE__ACTION_IN_START_UPDATE_FILE__SEND_TYPE_FILE_INFO = 1,
  IOT__SERVICE__SOFTWARE_UPDATE__ACTION_IN_START_UPDATE_FILE__SEND_TYPE_CHUNK = 2,
  IOT__SERVICE__SOFTWARE_UPDATE__ACTION_IN_START_UPDATE_FILE__SEND_TYPE_FINAL = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__SOFTWARE_UPDATE__ACTION_IN_START_UPDATE_FILE__SEND_TYPE)
} Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__SendTypeCase;

struct  _Iot__Service__SoftwareUpdate__ActionInStartUpdateFile
{
  ProtobufCMessage base;
  Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__SendTypeCase send_type_case;
  union {
    /*
     *升级包信息
     */
    Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__FileInfo *fileinfo;
    /*
     *分块传输数据
     */
    ProtobufCBinaryData chunk;
    /*
     *文件传输结束
     */
    Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__Final *final;
  };
};
#define IOT__SERVICE__SOFTWARE_UPDATE__ACTION_IN_START_UPDATE_FILE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__software_update__action_in_start_update_file__descriptor) \
    , IOT__SERVICE__SOFTWARE_UPDATE__ACTION_IN_START_UPDATE_FILE__SEND_TYPE__NOT_SET, {0} }


struct  _Iot__Service__SoftwareUpdate__ActionOutStartUpdateFile
{
  ProtobufCMessage base;
  /*
   *0-接收成功
   */
  uint32_t code;
};
#define IOT__SERVICE__SOFTWARE_UPDATE__ACTION_OUT_START_UPDATE_FILE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__software_update__action_out_start_update_file__descriptor) \
    , 0 }


struct  _Iot__Service__SoftwareUpdate__ActionInQueryNewUpdate
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__SOFTWARE_UPDATE__ACTION_IN_QUERY_NEW_UPDATE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__software_update__action_in_query_new_update__descriptor) \
     }


struct  _Iot__Service__SoftwareUpdate__ActionOutQueryNewUpdate
{
  ProtobufCMessage base;
  char *currentver;
  char *newver;
  /*
   *release note
   */
  char *desc;
};
#define IOT__SERVICE__SOFTWARE_UPDATE__ACTION_OUT_QUERY_NEW_UPDATE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__software_update__action_out_query_new_update__descriptor) \
    , (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string }


struct  _Iot__Service__SoftwareUpdate__ActionInPrepareForMeshNodeConnection
{
  ProtobufCMessage base;
  ProtobufCBinaryData random;
};
#define IOT__SERVICE__SOFTWARE_UPDATE__ACTION_IN_PREPARE_FOR_MESH_NODE_CONNECTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__software_update__action_in_prepare_for_mesh_node_connection__descriptor) \
    , {0,NULL} }


struct  _Iot__Service__SoftwareUpdate__ActionOutPrepareForMeshNodeConnection
{
  ProtobufCMessage base;
  uint32_t bleaddrtype;
  ProtobufCBinaryData bleaddr;
};
#define IOT__SERVICE__SOFTWARE_UPDATE__ACTION_OUT_PREPARE_FOR_MESH_NODE_CONNECTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__software_update__action_out_prepare_for_mesh_node_connection__descriptor) \
    , 0, {0,NULL} }


struct  _Iot__Service__SoftwareUpdate__Properties
{
  ProtobufCMessage base;
  char *currentsoftwarevername;
  uint32_t updateprogress;
  Iot__Service__SoftwareUpdate__EnumUpdateState updatestate;
  Iot__Service__SoftwareUpdate__EnumUpdateError updateerror;
  /*
   * action startUpdate(ActionInStartUpdate) returns (ActionOutStartUpdate) = 5;
   * action startUpdateFile(stream ActionInStartUpdateFile) returns (ActionOutStartUpdateFile) = 6; //由主动端发起正常结束事务
   * action queryNewUpdate(ActionInQueryNewUpdate) returns (ActionOutQueryNewUpdate) = 7;
   */
  /*
   * action prepareForMeshNodeConnection(ActionInPrepareForMeshNodeConnection) returns (ActionOutPrepareForMeshNodeConnection) = 9;
   */
  uint32_t currentsoftwarevercode;
};
#define IOT__SERVICE__SOFTWARE_UPDATE__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__software_update__properties__descriptor) \
    , (char *)protobuf_c_empty_string, 0, IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_STATE__IDLE, IOT__SERVICE__SOFTWARE_UPDATE__ENUM_UPDATE_ERROR__INITIAL, 0 }


/* Iot__Service__SoftwareUpdate__ActionInStartUpdate methods */
void   iot__service__software_update__action_in_start_update__init
                     (Iot__Service__SoftwareUpdate__ActionInStartUpdate         *message);
size_t iot__service__software_update__action_in_start_update__get_packed_size
                     (const Iot__Service__SoftwareUpdate__ActionInStartUpdate   *message);
size_t iot__service__software_update__action_in_start_update__pack
                     (const Iot__Service__SoftwareUpdate__ActionInStartUpdate   *message,
                      uint8_t             *out);
size_t iot__service__software_update__action_in_start_update__pack_to_buffer
                     (const Iot__Service__SoftwareUpdate__ActionInStartUpdate   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SoftwareUpdate__ActionInStartUpdate *
       iot__service__software_update__action_in_start_update__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__software_update__action_in_start_update__free_unpacked
                     (Iot__Service__SoftwareUpdate__ActionInStartUpdate *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__SoftwareUpdate__ActionOutStartUpdate methods */
void   iot__service__software_update__action_out_start_update__init
                     (Iot__Service__SoftwareUpdate__ActionOutStartUpdate         *message);
size_t iot__service__software_update__action_out_start_update__get_packed_size
                     (const Iot__Service__SoftwareUpdate__ActionOutStartUpdate   *message);
size_t iot__service__software_update__action_out_start_update__pack
                     (const Iot__Service__SoftwareUpdate__ActionOutStartUpdate   *message,
                      uint8_t             *out);
size_t iot__service__software_update__action_out_start_update__pack_to_buffer
                     (const Iot__Service__SoftwareUpdate__ActionOutStartUpdate   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SoftwareUpdate__ActionOutStartUpdate *
       iot__service__software_update__action_out_start_update__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__software_update__action_out_start_update__free_unpacked
                     (Iot__Service__SoftwareUpdate__ActionOutStartUpdate *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__FileInfo methods */
void   iot__service__software_update__action_in_start_update_file__file_info__init
                     (Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__FileInfo         *message);
/* Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__Final methods */
void   iot__service__software_update__action_in_start_update_file__final__init
                     (Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__Final         *message);
/* Iot__Service__SoftwareUpdate__ActionInStartUpdateFile methods */
void   iot__service__software_update__action_in_start_update_file__init
                     (Iot__Service__SoftwareUpdate__ActionInStartUpdateFile         *message);
size_t iot__service__software_update__action_in_start_update_file__get_packed_size
                     (const Iot__Service__SoftwareUpdate__ActionInStartUpdateFile   *message);
size_t iot__service__software_update__action_in_start_update_file__pack
                     (const Iot__Service__SoftwareUpdate__ActionInStartUpdateFile   *message,
                      uint8_t             *out);
size_t iot__service__software_update__action_in_start_update_file__pack_to_buffer
                     (const Iot__Service__SoftwareUpdate__ActionInStartUpdateFile   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SoftwareUpdate__ActionInStartUpdateFile *
       iot__service__software_update__action_in_start_update_file__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__software_update__action_in_start_update_file__free_unpacked
                     (Iot__Service__SoftwareUpdate__ActionInStartUpdateFile *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__SoftwareUpdate__ActionOutStartUpdateFile methods */
void   iot__service__software_update__action_out_start_update_file__init
                     (Iot__Service__SoftwareUpdate__ActionOutStartUpdateFile         *message);
size_t iot__service__software_update__action_out_start_update_file__get_packed_size
                     (const Iot__Service__SoftwareUpdate__ActionOutStartUpdateFile   *message);
size_t iot__service__software_update__action_out_start_update_file__pack
                     (const Iot__Service__SoftwareUpdate__ActionOutStartUpdateFile   *message,
                      uint8_t             *out);
size_t iot__service__software_update__action_out_start_update_file__pack_to_buffer
                     (const Iot__Service__SoftwareUpdate__ActionOutStartUpdateFile   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SoftwareUpdate__ActionOutStartUpdateFile *
       iot__service__software_update__action_out_start_update_file__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__software_update__action_out_start_update_file__free_unpacked
                     (Iot__Service__SoftwareUpdate__ActionOutStartUpdateFile *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__SoftwareUpdate__ActionInQueryNewUpdate methods */
void   iot__service__software_update__action_in_query_new_update__init
                     (Iot__Service__SoftwareUpdate__ActionInQueryNewUpdate         *message);
size_t iot__service__software_update__action_in_query_new_update__get_packed_size
                     (const Iot__Service__SoftwareUpdate__ActionInQueryNewUpdate   *message);
size_t iot__service__software_update__action_in_query_new_update__pack
                     (const Iot__Service__SoftwareUpdate__ActionInQueryNewUpdate   *message,
                      uint8_t             *out);
size_t iot__service__software_update__action_in_query_new_update__pack_to_buffer
                     (const Iot__Service__SoftwareUpdate__ActionInQueryNewUpdate   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SoftwareUpdate__ActionInQueryNewUpdate *
       iot__service__software_update__action_in_query_new_update__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__software_update__action_in_query_new_update__free_unpacked
                     (Iot__Service__SoftwareUpdate__ActionInQueryNewUpdate *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__SoftwareUpdate__ActionOutQueryNewUpdate methods */
void   iot__service__software_update__action_out_query_new_update__init
                     (Iot__Service__SoftwareUpdate__ActionOutQueryNewUpdate         *message);
size_t iot__service__software_update__action_out_query_new_update__get_packed_size
                     (const Iot__Service__SoftwareUpdate__ActionOutQueryNewUpdate   *message);
size_t iot__service__software_update__action_out_query_new_update__pack
                     (const Iot__Service__SoftwareUpdate__ActionOutQueryNewUpdate   *message,
                      uint8_t             *out);
size_t iot__service__software_update__action_out_query_new_update__pack_to_buffer
                     (const Iot__Service__SoftwareUpdate__ActionOutQueryNewUpdate   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SoftwareUpdate__ActionOutQueryNewUpdate *
       iot__service__software_update__action_out_query_new_update__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__software_update__action_out_query_new_update__free_unpacked
                     (Iot__Service__SoftwareUpdate__ActionOutQueryNewUpdate *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__SoftwareUpdate__ActionInPrepareForMeshNodeConnection methods */
void   iot__service__software_update__action_in_prepare_for_mesh_node_connection__init
                     (Iot__Service__SoftwareUpdate__ActionInPrepareForMeshNodeConnection         *message);
size_t iot__service__software_update__action_in_prepare_for_mesh_node_connection__get_packed_size
                     (const Iot__Service__SoftwareUpdate__ActionInPrepareForMeshNodeConnection   *message);
size_t iot__service__software_update__action_in_prepare_for_mesh_node_connection__pack
                     (const Iot__Service__SoftwareUpdate__ActionInPrepareForMeshNodeConnection   *message,
                      uint8_t             *out);
size_t iot__service__software_update__action_in_prepare_for_mesh_node_connection__pack_to_buffer
                     (const Iot__Service__SoftwareUpdate__ActionInPrepareForMeshNodeConnection   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SoftwareUpdate__ActionInPrepareForMeshNodeConnection *
       iot__service__software_update__action_in_prepare_for_mesh_node_connection__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__software_update__action_in_prepare_for_mesh_node_connection__free_unpacked
                     (Iot__Service__SoftwareUpdate__ActionInPrepareForMeshNodeConnection *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__SoftwareUpdate__ActionOutPrepareForMeshNodeConnection methods */
void   iot__service__software_update__action_out_prepare_for_mesh_node_connection__init
                     (Iot__Service__SoftwareUpdate__ActionOutPrepareForMeshNodeConnection         *message);
size_t iot__service__software_update__action_out_prepare_for_mesh_node_connection__get_packed_size
                     (const Iot__Service__SoftwareUpdate__ActionOutPrepareForMeshNodeConnection   *message);
size_t iot__service__software_update__action_out_prepare_for_mesh_node_connection__pack
                     (const Iot__Service__SoftwareUpdate__ActionOutPrepareForMeshNodeConnection   *message,
                      uint8_t             *out);
size_t iot__service__software_update__action_out_prepare_for_mesh_node_connection__pack_to_buffer
                     (const Iot__Service__SoftwareUpdate__ActionOutPrepareForMeshNodeConnection   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SoftwareUpdate__ActionOutPrepareForMeshNodeConnection *
       iot__service__software_update__action_out_prepare_for_mesh_node_connection__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__software_update__action_out_prepare_for_mesh_node_connection__free_unpacked
                     (Iot__Service__SoftwareUpdate__ActionOutPrepareForMeshNodeConnection *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__SoftwareUpdate__Properties methods */
void   iot__service__software_update__properties__init
                     (Iot__Service__SoftwareUpdate__Properties         *message);
size_t iot__service__software_update__properties__get_packed_size
                     (const Iot__Service__SoftwareUpdate__Properties   *message);
size_t iot__service__software_update__properties__pack
                     (const Iot__Service__SoftwareUpdate__Properties   *message,
                      uint8_t             *out);
size_t iot__service__software_update__properties__pack_to_buffer
                     (const Iot__Service__SoftwareUpdate__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__SoftwareUpdate__Properties *
       iot__service__software_update__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__software_update__properties__free_unpacked
                     (Iot__Service__SoftwareUpdate__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__SoftwareUpdate__ActionInStartUpdate_Closure)
                 (const Iot__Service__SoftwareUpdate__ActionInStartUpdate *message,
                  void *closure_data);
typedef void (*Iot__Service__SoftwareUpdate__ActionOutStartUpdate_Closure)
                 (const Iot__Service__SoftwareUpdate__ActionOutStartUpdate *message,
                  void *closure_data);
typedef void (*Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__FileInfo_Closure)
                 (const Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__FileInfo *message,
                  void *closure_data);
typedef void (*Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__Final_Closure)
                 (const Iot__Service__SoftwareUpdate__ActionInStartUpdateFile__Final *message,
                  void *closure_data);
typedef void (*Iot__Service__SoftwareUpdate__ActionInStartUpdateFile_Closure)
                 (const Iot__Service__SoftwareUpdate__ActionInStartUpdateFile *message,
                  void *closure_data);
typedef void (*Iot__Service__SoftwareUpdate__ActionOutStartUpdateFile_Closure)
                 (const Iot__Service__SoftwareUpdate__ActionOutStartUpdateFile *message,
                  void *closure_data);
typedef void (*Iot__Service__SoftwareUpdate__ActionInQueryNewUpdate_Closure)
                 (const Iot__Service__SoftwareUpdate__ActionInQueryNewUpdate *message,
                  void *closure_data);
typedef void (*Iot__Service__SoftwareUpdate__ActionOutQueryNewUpdate_Closure)
                 (const Iot__Service__SoftwareUpdate__ActionOutQueryNewUpdate *message,
                  void *closure_data);
typedef void (*Iot__Service__SoftwareUpdate__ActionInPrepareForMeshNodeConnection_Closure)
                 (const Iot__Service__SoftwareUpdate__ActionInPrepareForMeshNodeConnection *message,
                  void *closure_data);
typedef void (*Iot__Service__SoftwareUpdate__ActionOutPrepareForMeshNodeConnection_Closure)
                 (const Iot__Service__SoftwareUpdate__ActionOutPrepareForMeshNodeConnection *message,
                  void *closure_data);
typedef void (*Iot__Service__SoftwareUpdate__Properties_Closure)
                 (const Iot__Service__SoftwareUpdate__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    iot__service__software_update__enum_update_state__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__software_update__enum_update_error__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__software_update__signature_type__descriptor;
extern const ProtobufCMessageDescriptor iot__service__software_update__action_in_start_update__descriptor;
extern const ProtobufCMessageDescriptor iot__service__software_update__action_out_start_update__descriptor;
extern const ProtobufCMessageDescriptor iot__service__software_update__action_in_start_update_file__descriptor;
extern const ProtobufCMessageDescriptor iot__service__software_update__action_in_start_update_file__file_info__descriptor;
extern const ProtobufCMessageDescriptor iot__service__software_update__action_in_start_update_file__final__descriptor;
extern const ProtobufCMessageDescriptor iot__service__software_update__action_out_start_update_file__descriptor;
extern const ProtobufCMessageDescriptor iot__service__software_update__action_in_query_new_update__descriptor;
extern const ProtobufCMessageDescriptor iot__service__software_update__action_out_query_new_update__descriptor;
extern const ProtobufCMessageDescriptor iot__service__software_update__action_in_prepare_for_mesh_node_connection__descriptor;
extern const ProtobufCMessageDescriptor iot__service__software_update__action_out_prepare_for_mesh_node_connection__descriptor;
extern const ProtobufCMessageDescriptor iot__service__software_update__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_softwareUpdate_2eproto__INCLUDED */
