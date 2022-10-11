/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: devDiagnosis.proto */

#ifndef PROTOBUF_C_devDiagnosis_2eproto__INCLUDED
#define PROTOBUF_C_devDiagnosis_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Iot__Service__DevDiagnosis__ActionInUploadLogCmd Iot__Service__DevDiagnosis__ActionInUploadLogCmd;
typedef struct _Iot__Service__DevDiagnosis__ActionOutUploadLogCmd Iot__Service__DevDiagnosis__ActionOutUploadLogCmd;
typedef struct _Iot__Service__DevDiagnosis__ActionInGetLogData Iot__Service__DevDiagnosis__ActionInGetLogData;
typedef struct _Iot__Service__DevDiagnosis__ActionOutGetLogData Iot__Service__DevDiagnosis__ActionOutGetLogData;
typedef struct _Iot__Service__DevDiagnosis__Properties Iot__Service__DevDiagnosis__Properties;


/* --- enums --- */


/* --- messages --- */

struct  _Iot__Service__DevDiagnosis__ActionInUploadLogCmd
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__DEV_DIAGNOSIS__ACTION_IN_UPLOAD_LOG_CMD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_diagnosis__action_in_upload_log_cmd__descriptor) \
     }


struct  _Iot__Service__DevDiagnosis__ActionOutUploadLogCmd
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__DEV_DIAGNOSIS__ACTION_OUT_UPLOAD_LOG_CMD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_diagnosis__action_out_upload_log_cmd__descriptor) \
     }


struct  _Iot__Service__DevDiagnosis__ActionInGetLogData
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__DEV_DIAGNOSIS__ACTION_IN_GET_LOG_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_diagnosis__action_in_get_log_data__descriptor) \
     }


struct  _Iot__Service__DevDiagnosis__ActionOutGetLogData
{
  ProtobufCMessage base;
  ProtobufCBinaryData logdata;
};
#define IOT__SERVICE__DEV_DIAGNOSIS__ACTION_OUT_GET_LOG_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_diagnosis__action_out_get_log_data__descriptor) \
    , {0,NULL} }


struct  _Iot__Service__DevDiagnosis__Properties
{
  ProtobufCMessage base;
  /*
   *日志消息上报开关，true-上报，false-不上报
   */
  /*
   *立即触发一次日志上报
   * action uploadLogCmd(ActionInUploadLogCmd) returns (ActionOutUploadLogCmd) = 2;
   * action getLogData(ActionInGetLogData) returns (stream ActionOutGetLogData) = 3;  //由被动端发起正常结束事务
   */
  protobuf_c_boolean enable;
};
#define IOT__SERVICE__DEV_DIAGNOSIS__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_diagnosis__properties__descriptor) \
    , 0 }


/* Iot__Service__DevDiagnosis__ActionInUploadLogCmd methods */
void   iot__service__dev_diagnosis__action_in_upload_log_cmd__init
                     (Iot__Service__DevDiagnosis__ActionInUploadLogCmd         *message);
size_t iot__service__dev_diagnosis__action_in_upload_log_cmd__get_packed_size
                     (const Iot__Service__DevDiagnosis__ActionInUploadLogCmd   *message);
size_t iot__service__dev_diagnosis__action_in_upload_log_cmd__pack
                     (const Iot__Service__DevDiagnosis__ActionInUploadLogCmd   *message,
                      uint8_t             *out);
size_t iot__service__dev_diagnosis__action_in_upload_log_cmd__pack_to_buffer
                     (const Iot__Service__DevDiagnosis__ActionInUploadLogCmd   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevDiagnosis__ActionInUploadLogCmd *
       iot__service__dev_diagnosis__action_in_upload_log_cmd__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_diagnosis__action_in_upload_log_cmd__free_unpacked
                     (Iot__Service__DevDiagnosis__ActionInUploadLogCmd *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__DevDiagnosis__ActionOutUploadLogCmd methods */
void   iot__service__dev_diagnosis__action_out_upload_log_cmd__init
                     (Iot__Service__DevDiagnosis__ActionOutUploadLogCmd         *message);
size_t iot__service__dev_diagnosis__action_out_upload_log_cmd__get_packed_size
                     (const Iot__Service__DevDiagnosis__ActionOutUploadLogCmd   *message);
size_t iot__service__dev_diagnosis__action_out_upload_log_cmd__pack
                     (const Iot__Service__DevDiagnosis__ActionOutUploadLogCmd   *message,
                      uint8_t             *out);
size_t iot__service__dev_diagnosis__action_out_upload_log_cmd__pack_to_buffer
                     (const Iot__Service__DevDiagnosis__ActionOutUploadLogCmd   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevDiagnosis__ActionOutUploadLogCmd *
       iot__service__dev_diagnosis__action_out_upload_log_cmd__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_diagnosis__action_out_upload_log_cmd__free_unpacked
                     (Iot__Service__DevDiagnosis__ActionOutUploadLogCmd *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__DevDiagnosis__ActionInGetLogData methods */
void   iot__service__dev_diagnosis__action_in_get_log_data__init
                     (Iot__Service__DevDiagnosis__ActionInGetLogData         *message);
size_t iot__service__dev_diagnosis__action_in_get_log_data__get_packed_size
                     (const Iot__Service__DevDiagnosis__ActionInGetLogData   *message);
size_t iot__service__dev_diagnosis__action_in_get_log_data__pack
                     (const Iot__Service__DevDiagnosis__ActionInGetLogData   *message,
                      uint8_t             *out);
size_t iot__service__dev_diagnosis__action_in_get_log_data__pack_to_buffer
                     (const Iot__Service__DevDiagnosis__ActionInGetLogData   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevDiagnosis__ActionInGetLogData *
       iot__service__dev_diagnosis__action_in_get_log_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_diagnosis__action_in_get_log_data__free_unpacked
                     (Iot__Service__DevDiagnosis__ActionInGetLogData *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__DevDiagnosis__ActionOutGetLogData methods */
void   iot__service__dev_diagnosis__action_out_get_log_data__init
                     (Iot__Service__DevDiagnosis__ActionOutGetLogData         *message);
size_t iot__service__dev_diagnosis__action_out_get_log_data__get_packed_size
                     (const Iot__Service__DevDiagnosis__ActionOutGetLogData   *message);
size_t iot__service__dev_diagnosis__action_out_get_log_data__pack
                     (const Iot__Service__DevDiagnosis__ActionOutGetLogData   *message,
                      uint8_t             *out);
size_t iot__service__dev_diagnosis__action_out_get_log_data__pack_to_buffer
                     (const Iot__Service__DevDiagnosis__ActionOutGetLogData   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevDiagnosis__ActionOutGetLogData *
       iot__service__dev_diagnosis__action_out_get_log_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_diagnosis__action_out_get_log_data__free_unpacked
                     (Iot__Service__DevDiagnosis__ActionOutGetLogData *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__DevDiagnosis__Properties methods */
void   iot__service__dev_diagnosis__properties__init
                     (Iot__Service__DevDiagnosis__Properties         *message);
size_t iot__service__dev_diagnosis__properties__get_packed_size
                     (const Iot__Service__DevDiagnosis__Properties   *message);
size_t iot__service__dev_diagnosis__properties__pack
                     (const Iot__Service__DevDiagnosis__Properties   *message,
                      uint8_t             *out);
size_t iot__service__dev_diagnosis__properties__pack_to_buffer
                     (const Iot__Service__DevDiagnosis__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevDiagnosis__Properties *
       iot__service__dev_diagnosis__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_diagnosis__properties__free_unpacked
                     (Iot__Service__DevDiagnosis__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__DevDiagnosis__ActionInUploadLogCmd_Closure)
                 (const Iot__Service__DevDiagnosis__ActionInUploadLogCmd *message,
                  void *closure_data);
typedef void (*Iot__Service__DevDiagnosis__ActionOutUploadLogCmd_Closure)
                 (const Iot__Service__DevDiagnosis__ActionOutUploadLogCmd *message,
                  void *closure_data);
typedef void (*Iot__Service__DevDiagnosis__ActionInGetLogData_Closure)
                 (const Iot__Service__DevDiagnosis__ActionInGetLogData *message,
                  void *closure_data);
typedef void (*Iot__Service__DevDiagnosis__ActionOutGetLogData_Closure)
                 (const Iot__Service__DevDiagnosis__ActionOutGetLogData *message,
                  void *closure_data);
typedef void (*Iot__Service__DevDiagnosis__Properties_Closure)
                 (const Iot__Service__DevDiagnosis__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor iot__service__dev_diagnosis__action_in_upload_log_cmd__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_diagnosis__action_out_upload_log_cmd__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_diagnosis__action_in_get_log_data__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_diagnosis__action_out_get_log_data__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_diagnosis__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_devDiagnosis_2eproto__INCLUDED */