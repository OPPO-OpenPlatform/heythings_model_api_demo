/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: devInfo.proto */

#ifndef PROTOBUF_C_devInfo_2eproto__INCLUDED
#define PROTOBUF_C_devInfo_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Iot__Service__DevInfo__DevCapability Iot__Service__DevInfo__DevCapability;
typedef struct _Iot__Service__DevInfo__Properties Iot__Service__DevInfo__Properties;


/* --- enums --- */

typedef enum _Iot__Service__DevInfo__DevCapability__Network {
  IOT__SERVICE__DEV_INFO__DEV_CAPABILITY__NETWORK__WIFI_2P4G = 0,
  IOT__SERVICE__DEV_INFO__DEV_CAPABILITY__NETWORK__WIFI_5G = 1,
  IOT__SERVICE__DEV_INFO__DEV_CAPABILITY__NETWORK__BLE_4 = 2,
  IOT__SERVICE__DEV_INFO__DEV_CAPABILITY__NETWORK__BLE_5 = 3,
  IOT__SERVICE__DEV_INFO__DEV_CAPABILITY__NETWORK__BLE_MESH = 4,
  IOT__SERVICE__DEV_INFO__DEV_CAPABILITY__NETWORK__BT = 5,
  IOT__SERVICE__DEV_INFO__DEV_CAPABILITY__NETWORK__ETHERNET = 6
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__DEV_INFO__DEV_CAPABILITY__NETWORK)
} Iot__Service__DevInfo__DevCapability__Network;

/* --- messages --- */

struct  _Iot__Service__DevInfo__DevCapability
{
  ProtobufCMessage base;
  size_t n_network;
  Iot__Service__DevInfo__DevCapability__Network *network;
  /*
   * 1-有连网能力，直接与云端保持心跳，0-无连网能力，通过网关邻居表方式维护与云端连接状态
   */
  protobuf_c_boolean cloudconnectable;
};
#define IOT__SERVICE__DEV_INFO__DEV_CAPABILITY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_info__dev_capability__descriptor) \
    , 0,NULL, 0 }


struct  _Iot__Service__DevInfo__Properties
{
  ProtobufCMessage base;
  char *devname;
  char *manufacturer;
  char *model;
  char *brand;
  char *softvername;
  uint64_t did;
  uint32_t pid;
  uint32_t cid;
  char *mac;
  char *hardver;
  char *sn;
  uint64_t parentdid;
  int32_t rssi;
  char *bssid;
  char *ip;
  char *devtime;
  uint64_t utc;
  char *timezone;
  uint32_t softvercode;
  char *ssid;
  /*
   *用于上传云端进行家庭签名
   */
  ProtobufCBinaryData devpubkey;
  /*
   *dev identify in cloud
   */
  char *vendordevid;
  Iot__Service__DevInfo__DevCapability *devcapability;
  /*
   *子设备离线判断超时时间，单位：秒
   */
  uint32_t offlinethreshold;
};
#define IOT__SERVICE__DEV_INFO__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__dev_info__properties__descriptor) \
    , (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, 0, 0, 0, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, 0, 0, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, 0, (char *)protobuf_c_empty_string, 0, (char *)protobuf_c_empty_string, {0,NULL}, (char *)protobuf_c_empty_string, NULL, 0 }


/* Iot__Service__DevInfo__DevCapability methods */
void   iot__service__dev_info__dev_capability__init
                     (Iot__Service__DevInfo__DevCapability         *message);
size_t iot__service__dev_info__dev_capability__get_packed_size
                     (const Iot__Service__DevInfo__DevCapability   *message);
size_t iot__service__dev_info__dev_capability__pack
                     (const Iot__Service__DevInfo__DevCapability   *message,
                      uint8_t             *out);
size_t iot__service__dev_info__dev_capability__pack_to_buffer
                     (const Iot__Service__DevInfo__DevCapability   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevInfo__DevCapability *
       iot__service__dev_info__dev_capability__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_info__dev_capability__free_unpacked
                     (Iot__Service__DevInfo__DevCapability *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__DevInfo__Properties methods */
void   iot__service__dev_info__properties__init
                     (Iot__Service__DevInfo__Properties         *message);
size_t iot__service__dev_info__properties__get_packed_size
                     (const Iot__Service__DevInfo__Properties   *message);
size_t iot__service__dev_info__properties__pack
                     (const Iot__Service__DevInfo__Properties   *message,
                      uint8_t             *out);
size_t iot__service__dev_info__properties__pack_to_buffer
                     (const Iot__Service__DevInfo__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__DevInfo__Properties *
       iot__service__dev_info__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__dev_info__properties__free_unpacked
                     (Iot__Service__DevInfo__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__DevInfo__DevCapability_Closure)
                 (const Iot__Service__DevInfo__DevCapability *message,
                  void *closure_data);
typedef void (*Iot__Service__DevInfo__Properties_Closure)
                 (const Iot__Service__DevInfo__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor iot__service__dev_info__dev_capability__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__dev_info__dev_capability__network__descriptor;
extern const ProtobufCMessageDescriptor iot__service__dev_info__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_devInfo_2eproto__INCLUDED */
