/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: mediaStream.proto */

#ifndef PROTOBUF_C_mediaStream_2eproto__INCLUDED
#define PROTOBUF_C_mediaStream_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Iot__Service__MediaStream__ActionInStartMediaStream Iot__Service__MediaStream__ActionInStartMediaStream;
typedef struct _Iot__Service__MediaStream__ActionInStartMediaStream__Live Iot__Service__MediaStream__ActionInStartMediaStream__Live;
typedef struct _Iot__Service__MediaStream__ActionInStartMediaStream__MediaFile Iot__Service__MediaStream__ActionInStartMediaStream__MediaFile;
typedef struct _Iot__Service__MediaStream__ActionInStartMediaStream__StreamFile Iot__Service__MediaStream__ActionInStartMediaStream__StreamFile;
typedef struct _Iot__Service__MediaStream__ActionOutStartMediaStream Iot__Service__MediaStream__ActionOutStartMediaStream;
typedef struct _Iot__Service__MediaStream__ActionInStopMediaStream Iot__Service__MediaStream__ActionInStopMediaStream;
typedef struct _Iot__Service__MediaStream__ActionOutStopMediaStream Iot__Service__MediaStream__ActionOutStopMediaStream;
typedef struct _Iot__Service__MediaStream__ActionInSetTransmitResolution Iot__Service__MediaStream__ActionInSetTransmitResolution;
typedef struct _Iot__Service__MediaStream__ActionOutSetTransmitResolution Iot__Service__MediaStream__ActionOutSetTransmitResolution;
typedef struct _Iot__Service__MediaStream__ActionInSetMediaStreamMode Iot__Service__MediaStream__ActionInSetMediaStreamMode;
typedef struct _Iot__Service__MediaStream__ActionOutSetMediaStreamMode Iot__Service__MediaStream__ActionOutSetMediaStreamMode;
typedef struct _Iot__Service__MediaStream__Properties Iot__Service__MediaStream__Properties;


/* --- enums --- */

typedef enum _Iot__Service__MediaStream__ActionOutStartMediaStream__ResultCode {
  IOT__SERVICE__MEDIA_STREAM__ACTION_OUT_START_MEDIA_STREAM__RESULT_CODE__RESULT_OK = 0,
  /*
   *无视频文件
   */
  IOT__SERVICE__MEDIA_STREAM__ACTION_OUT_START_MEDIA_STREAM__RESULT_CODE__RESULT_NOSOURCE = 1,
  /*
   *磁盘已删除
   */
  IOT__SERVICE__MEDIA_STREAM__ACTION_OUT_START_MEDIA_STREAM__RESULT_CODE__RESULT_DISKREMOVED = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__MEDIA_STREAM__ACTION_OUT_START_MEDIA_STREAM__RESULT_CODE)
} Iot__Service__MediaStream__ActionOutStartMediaStream__ResultCode;
typedef enum _Iot__Service__MediaStream__TransmitResolution {
  IOT__SERVICE__MEDIA_STREAM__TRANSMIT_RESOLUTION__AUTO = 0,
  IOT__SERVICE__MEDIA_STREAM__TRANSMIT_RESOLUTION__R360P = 1,
  IOT__SERVICE__MEDIA_STREAM__TRANSMIT_RESOLUTION__R720P = 2,
  /*
   *2K
   */
  IOT__SERVICE__MEDIA_STREAM__TRANSMIT_RESOLUTION__R1080P = 3,
  IOT__SERVICE__MEDIA_STREAM__TRANSMIT_RESOLUTION__R1280P = 4,
  IOT__SERVICE__MEDIA_STREAM__TRANSMIT_RESOLUTION__R1296P = 5,
  IOT__SERVICE__MEDIA_STREAM__TRANSMIT_RESOLUTION__R480P = 6,
  /*
   *2.5K
   */
  IOT__SERVICE__MEDIA_STREAM__TRANSMIT_RESOLUTION__R1440P = 7
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__MEDIA_STREAM__TRANSMIT_RESOLUTION)
} Iot__Service__MediaStream__TransmitResolution;

/* --- messages --- */

struct  _Iot__Service__MediaStream__ActionInStartMediaStream__Live
{
  ProtobufCMessage base;
  Iot__Service__MediaStream__TransmitResolution transmitresolution;
  uint32_t mediastreammode;
};
#define IOT__SERVICE__MEDIA_STREAM__ACTION_IN_START_MEDIA_STREAM__LIVE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__media_stream__action_in_start_media_stream__live__descriptor) \
    , IOT__SERVICE__MEDIA_STREAM__TRANSMIT_RESOLUTION__AUTO, 0 }


struct  _Iot__Service__MediaStream__ActionInStartMediaStream__MediaFile
{
  ProtobufCMessage base;
  uint32_t mediastreammode;
  /*
   * 0:正常速度 正数：倍速播放  负数：慢动作播放
   */
  int32_t playspeed;
  /*
   *单位 秒
   */
  uint32_t timeoffset;
  /*
   *文件url
   */
  char *url;
};
#define IOT__SERVICE__MEDIA_STREAM__ACTION_IN_START_MEDIA_STREAM__MEDIA_FILE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__media_stream__action_in_start_media_stream__media_file__descriptor) \
    , 0, 0, 0, (char *)protobuf_c_empty_string }


struct  _Iot__Service__MediaStream__ActionInStartMediaStream__StreamFile
{
  ProtobufCMessage base;
  uint32_t mediastreammode;
  /*
   * 0:正常速度 正数：倍速播放  负数：慢动作播放
   */
  int32_t playspeed;
  uint64_t starttimestamp;
  uint64_t endtimestamp;
};
#define IOT__SERVICE__MEDIA_STREAM__ACTION_IN_START_MEDIA_STREAM__STREAM_FILE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__media_stream__action_in_start_media_stream__stream_file__descriptor) \
    , 0, 0, 0, 0 }


typedef enum {
  IOT__SERVICE__MEDIA_STREAM__ACTION_IN_START_MEDIA_STREAM__MESSAGE__NOT_SET = 0,
  IOT__SERVICE__MEDIA_STREAM__ACTION_IN_START_MEDIA_STREAM__MESSAGE_LIVE = 1,
  IOT__SERVICE__MEDIA_STREAM__ACTION_IN_START_MEDIA_STREAM__MESSAGE_MEDIA_FILE = 2,
  IOT__SERVICE__MEDIA_STREAM__ACTION_IN_START_MEDIA_STREAM__MESSAGE_STREAMFILE = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__MEDIA_STREAM__ACTION_IN_START_MEDIA_STREAM__MESSAGE)
} Iot__Service__MediaStream__ActionInStartMediaStream__MessageCase;

struct  _Iot__Service__MediaStream__ActionInStartMediaStream
{
  ProtobufCMessage base;
  Iot__Service__MediaStream__ActionInStartMediaStream__MessageCase message_case;
  union {
    /*
     *实时流
     */
    Iot__Service__MediaStream__ActionInStartMediaStream__Live *live;
    /*
     *播放媒体文件
     */
    Iot__Service__MediaStream__ActionInStartMediaStream__MediaFile *mediafile;
    /*
     *播放回放媒体流文件
     */
    Iot__Service__MediaStream__ActionInStartMediaStream__StreamFile *streamfile;
  };
};
#define IOT__SERVICE__MEDIA_STREAM__ACTION_IN_START_MEDIA_STREAM__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__media_stream__action_in_start_media_stream__descriptor) \
    , IOT__SERVICE__MEDIA_STREAM__ACTION_IN_START_MEDIA_STREAM__MESSAGE__NOT_SET, {0} }


struct  _Iot__Service__MediaStream__ActionOutStartMediaStream
{
  ProtobufCMessage base;
  uint32_t mediastreammode;
  Iot__Service__MediaStream__ActionOutStartMediaStream__ResultCode resultcode;
};
#define IOT__SERVICE__MEDIA_STREAM__ACTION_OUT_START_MEDIA_STREAM__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__media_stream__action_out_start_media_stream__descriptor) \
    , 0, IOT__SERVICE__MEDIA_STREAM__ACTION_OUT_START_MEDIA_STREAM__RESULT_CODE__RESULT_OK }


struct  _Iot__Service__MediaStream__ActionInStopMediaStream
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__MEDIA_STREAM__ACTION_IN_STOP_MEDIA_STREAM__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__media_stream__action_in_stop_media_stream__descriptor) \
     }


struct  _Iot__Service__MediaStream__ActionOutStopMediaStream
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__MEDIA_STREAM__ACTION_OUT_STOP_MEDIA_STREAM__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__media_stream__action_out_stop_media_stream__descriptor) \
     }


struct  _Iot__Service__MediaStream__ActionInSetTransmitResolution
{
  ProtobufCMessage base;
  Iot__Service__MediaStream__TransmitResolution resolution;
};
#define IOT__SERVICE__MEDIA_STREAM__ACTION_IN_SET_TRANSMIT_RESOLUTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__media_stream__action_in_set_transmit_resolution__descriptor) \
    , IOT__SERVICE__MEDIA_STREAM__TRANSMIT_RESOLUTION__AUTO }


struct  _Iot__Service__MediaStream__ActionOutSetTransmitResolution
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__MEDIA_STREAM__ACTION_OUT_SET_TRANSMIT_RESOLUTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__media_stream__action_out_set_transmit_resolution__descriptor) \
     }


struct  _Iot__Service__MediaStream__ActionInSetMediaStreamMode
{
  ProtobufCMessage base;
  /*
   *bit0:send audio
   *bit1:send video
   *bit2:recvive audio
   *bit3:recvive video
   */
  uint32_t mediastreammode;
};
#define IOT__SERVICE__MEDIA_STREAM__ACTION_IN_SET_MEDIA_STREAM_MODE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__media_stream__action_in_set_media_stream_mode__descriptor) \
    , 0 }


struct  _Iot__Service__MediaStream__ActionOutSetMediaStreamMode
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__MEDIA_STREAM__ACTION_OUT_SET_MEDIA_STREAM_MODE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__media_stream__action_out_set_media_stream_mode__descriptor) \
     }


struct  _Iot__Service__MediaStream__Properties
{
  ProtobufCMessage base;
  Iot__Service__MediaStream__TransmitResolution transmitresolution;
  /*
   *bit0:send audio
   *bit1:send video
   *bit2:recvive audio
   *bit3:recvive video
   */
  /*
   * action startMediaStream(ActionInStartMediaStream) returns (ActionOutStartMediaStream) = 3;
   * action stopMediaStream(ActionInStopMediaStream) returns (ActionOutStopMediaStream) = 4;
   * action setTransmitResolution(ActionInSetTransmitResolution) returns (ActionOutSetTransmitResolution) = 5;
   * action setMediaStreamMode(ActionInSetMediaStreamMode) returns (ActionOutSetMediaStreamMode) = 6;
   */
  uint32_t mediastreammode;
};
#define IOT__SERVICE__MEDIA_STREAM__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__media_stream__properties__descriptor) \
    , IOT__SERVICE__MEDIA_STREAM__TRANSMIT_RESOLUTION__AUTO, 0 }


/* Iot__Service__MediaStream__ActionInStartMediaStream__Live methods */
void   iot__service__media_stream__action_in_start_media_stream__live__init
                     (Iot__Service__MediaStream__ActionInStartMediaStream__Live         *message);
/* Iot__Service__MediaStream__ActionInStartMediaStream__MediaFile methods */
void   iot__service__media_stream__action_in_start_media_stream__media_file__init
                     (Iot__Service__MediaStream__ActionInStartMediaStream__MediaFile         *message);
/* Iot__Service__MediaStream__ActionInStartMediaStream__StreamFile methods */
void   iot__service__media_stream__action_in_start_media_stream__stream_file__init
                     (Iot__Service__MediaStream__ActionInStartMediaStream__StreamFile         *message);
/* Iot__Service__MediaStream__ActionInStartMediaStream methods */
void   iot__service__media_stream__action_in_start_media_stream__init
                     (Iot__Service__MediaStream__ActionInStartMediaStream         *message);
size_t iot__service__media_stream__action_in_start_media_stream__get_packed_size
                     (const Iot__Service__MediaStream__ActionInStartMediaStream   *message);
size_t iot__service__media_stream__action_in_start_media_stream__pack
                     (const Iot__Service__MediaStream__ActionInStartMediaStream   *message,
                      uint8_t             *out);
size_t iot__service__media_stream__action_in_start_media_stream__pack_to_buffer
                     (const Iot__Service__MediaStream__ActionInStartMediaStream   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__MediaStream__ActionInStartMediaStream *
       iot__service__media_stream__action_in_start_media_stream__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__media_stream__action_in_start_media_stream__free_unpacked
                     (Iot__Service__MediaStream__ActionInStartMediaStream *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__MediaStream__ActionOutStartMediaStream methods */
void   iot__service__media_stream__action_out_start_media_stream__init
                     (Iot__Service__MediaStream__ActionOutStartMediaStream         *message);
size_t iot__service__media_stream__action_out_start_media_stream__get_packed_size
                     (const Iot__Service__MediaStream__ActionOutStartMediaStream   *message);
size_t iot__service__media_stream__action_out_start_media_stream__pack
                     (const Iot__Service__MediaStream__ActionOutStartMediaStream   *message,
                      uint8_t             *out);
size_t iot__service__media_stream__action_out_start_media_stream__pack_to_buffer
                     (const Iot__Service__MediaStream__ActionOutStartMediaStream   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__MediaStream__ActionOutStartMediaStream *
       iot__service__media_stream__action_out_start_media_stream__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__media_stream__action_out_start_media_stream__free_unpacked
                     (Iot__Service__MediaStream__ActionOutStartMediaStream *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__MediaStream__ActionInStopMediaStream methods */
void   iot__service__media_stream__action_in_stop_media_stream__init
                     (Iot__Service__MediaStream__ActionInStopMediaStream         *message);
size_t iot__service__media_stream__action_in_stop_media_stream__get_packed_size
                     (const Iot__Service__MediaStream__ActionInStopMediaStream   *message);
size_t iot__service__media_stream__action_in_stop_media_stream__pack
                     (const Iot__Service__MediaStream__ActionInStopMediaStream   *message,
                      uint8_t             *out);
size_t iot__service__media_stream__action_in_stop_media_stream__pack_to_buffer
                     (const Iot__Service__MediaStream__ActionInStopMediaStream   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__MediaStream__ActionInStopMediaStream *
       iot__service__media_stream__action_in_stop_media_stream__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__media_stream__action_in_stop_media_stream__free_unpacked
                     (Iot__Service__MediaStream__ActionInStopMediaStream *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__MediaStream__ActionOutStopMediaStream methods */
void   iot__service__media_stream__action_out_stop_media_stream__init
                     (Iot__Service__MediaStream__ActionOutStopMediaStream         *message);
size_t iot__service__media_stream__action_out_stop_media_stream__get_packed_size
                     (const Iot__Service__MediaStream__ActionOutStopMediaStream   *message);
size_t iot__service__media_stream__action_out_stop_media_stream__pack
                     (const Iot__Service__MediaStream__ActionOutStopMediaStream   *message,
                      uint8_t             *out);
size_t iot__service__media_stream__action_out_stop_media_stream__pack_to_buffer
                     (const Iot__Service__MediaStream__ActionOutStopMediaStream   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__MediaStream__ActionOutStopMediaStream *
       iot__service__media_stream__action_out_stop_media_stream__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__media_stream__action_out_stop_media_stream__free_unpacked
                     (Iot__Service__MediaStream__ActionOutStopMediaStream *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__MediaStream__ActionInSetTransmitResolution methods */
void   iot__service__media_stream__action_in_set_transmit_resolution__init
                     (Iot__Service__MediaStream__ActionInSetTransmitResolution         *message);
size_t iot__service__media_stream__action_in_set_transmit_resolution__get_packed_size
                     (const Iot__Service__MediaStream__ActionInSetTransmitResolution   *message);
size_t iot__service__media_stream__action_in_set_transmit_resolution__pack
                     (const Iot__Service__MediaStream__ActionInSetTransmitResolution   *message,
                      uint8_t             *out);
size_t iot__service__media_stream__action_in_set_transmit_resolution__pack_to_buffer
                     (const Iot__Service__MediaStream__ActionInSetTransmitResolution   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__MediaStream__ActionInSetTransmitResolution *
       iot__service__media_stream__action_in_set_transmit_resolution__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__media_stream__action_in_set_transmit_resolution__free_unpacked
                     (Iot__Service__MediaStream__ActionInSetTransmitResolution *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__MediaStream__ActionOutSetTransmitResolution methods */
void   iot__service__media_stream__action_out_set_transmit_resolution__init
                     (Iot__Service__MediaStream__ActionOutSetTransmitResolution         *message);
size_t iot__service__media_stream__action_out_set_transmit_resolution__get_packed_size
                     (const Iot__Service__MediaStream__ActionOutSetTransmitResolution   *message);
size_t iot__service__media_stream__action_out_set_transmit_resolution__pack
                     (const Iot__Service__MediaStream__ActionOutSetTransmitResolution   *message,
                      uint8_t             *out);
size_t iot__service__media_stream__action_out_set_transmit_resolution__pack_to_buffer
                     (const Iot__Service__MediaStream__ActionOutSetTransmitResolution   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__MediaStream__ActionOutSetTransmitResolution *
       iot__service__media_stream__action_out_set_transmit_resolution__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__media_stream__action_out_set_transmit_resolution__free_unpacked
                     (Iot__Service__MediaStream__ActionOutSetTransmitResolution *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__MediaStream__ActionInSetMediaStreamMode methods */
void   iot__service__media_stream__action_in_set_media_stream_mode__init
                     (Iot__Service__MediaStream__ActionInSetMediaStreamMode         *message);
size_t iot__service__media_stream__action_in_set_media_stream_mode__get_packed_size
                     (const Iot__Service__MediaStream__ActionInSetMediaStreamMode   *message);
size_t iot__service__media_stream__action_in_set_media_stream_mode__pack
                     (const Iot__Service__MediaStream__ActionInSetMediaStreamMode   *message,
                      uint8_t             *out);
size_t iot__service__media_stream__action_in_set_media_stream_mode__pack_to_buffer
                     (const Iot__Service__MediaStream__ActionInSetMediaStreamMode   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__MediaStream__ActionInSetMediaStreamMode *
       iot__service__media_stream__action_in_set_media_stream_mode__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__media_stream__action_in_set_media_stream_mode__free_unpacked
                     (Iot__Service__MediaStream__ActionInSetMediaStreamMode *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__MediaStream__ActionOutSetMediaStreamMode methods */
void   iot__service__media_stream__action_out_set_media_stream_mode__init
                     (Iot__Service__MediaStream__ActionOutSetMediaStreamMode         *message);
size_t iot__service__media_stream__action_out_set_media_stream_mode__get_packed_size
                     (const Iot__Service__MediaStream__ActionOutSetMediaStreamMode   *message);
size_t iot__service__media_stream__action_out_set_media_stream_mode__pack
                     (const Iot__Service__MediaStream__ActionOutSetMediaStreamMode   *message,
                      uint8_t             *out);
size_t iot__service__media_stream__action_out_set_media_stream_mode__pack_to_buffer
                     (const Iot__Service__MediaStream__ActionOutSetMediaStreamMode   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__MediaStream__ActionOutSetMediaStreamMode *
       iot__service__media_stream__action_out_set_media_stream_mode__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__media_stream__action_out_set_media_stream_mode__free_unpacked
                     (Iot__Service__MediaStream__ActionOutSetMediaStreamMode *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__MediaStream__Properties methods */
void   iot__service__media_stream__properties__init
                     (Iot__Service__MediaStream__Properties         *message);
size_t iot__service__media_stream__properties__get_packed_size
                     (const Iot__Service__MediaStream__Properties   *message);
size_t iot__service__media_stream__properties__pack
                     (const Iot__Service__MediaStream__Properties   *message,
                      uint8_t             *out);
size_t iot__service__media_stream__properties__pack_to_buffer
                     (const Iot__Service__MediaStream__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__MediaStream__Properties *
       iot__service__media_stream__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__media_stream__properties__free_unpacked
                     (Iot__Service__MediaStream__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__MediaStream__ActionInStartMediaStream__Live_Closure)
                 (const Iot__Service__MediaStream__ActionInStartMediaStream__Live *message,
                  void *closure_data);
typedef void (*Iot__Service__MediaStream__ActionInStartMediaStream__MediaFile_Closure)
                 (const Iot__Service__MediaStream__ActionInStartMediaStream__MediaFile *message,
                  void *closure_data);
typedef void (*Iot__Service__MediaStream__ActionInStartMediaStream__StreamFile_Closure)
                 (const Iot__Service__MediaStream__ActionInStartMediaStream__StreamFile *message,
                  void *closure_data);
typedef void (*Iot__Service__MediaStream__ActionInStartMediaStream_Closure)
                 (const Iot__Service__MediaStream__ActionInStartMediaStream *message,
                  void *closure_data);
typedef void (*Iot__Service__MediaStream__ActionOutStartMediaStream_Closure)
                 (const Iot__Service__MediaStream__ActionOutStartMediaStream *message,
                  void *closure_data);
typedef void (*Iot__Service__MediaStream__ActionInStopMediaStream_Closure)
                 (const Iot__Service__MediaStream__ActionInStopMediaStream *message,
                  void *closure_data);
typedef void (*Iot__Service__MediaStream__ActionOutStopMediaStream_Closure)
                 (const Iot__Service__MediaStream__ActionOutStopMediaStream *message,
                  void *closure_data);
typedef void (*Iot__Service__MediaStream__ActionInSetTransmitResolution_Closure)
                 (const Iot__Service__MediaStream__ActionInSetTransmitResolution *message,
                  void *closure_data);
typedef void (*Iot__Service__MediaStream__ActionOutSetTransmitResolution_Closure)
                 (const Iot__Service__MediaStream__ActionOutSetTransmitResolution *message,
                  void *closure_data);
typedef void (*Iot__Service__MediaStream__ActionInSetMediaStreamMode_Closure)
                 (const Iot__Service__MediaStream__ActionInSetMediaStreamMode *message,
                  void *closure_data);
typedef void (*Iot__Service__MediaStream__ActionOutSetMediaStreamMode_Closure)
                 (const Iot__Service__MediaStream__ActionOutSetMediaStreamMode *message,
                  void *closure_data);
typedef void (*Iot__Service__MediaStream__Properties_Closure)
                 (const Iot__Service__MediaStream__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    iot__service__media_stream__transmit_resolution__descriptor;
extern const ProtobufCMessageDescriptor iot__service__media_stream__action_in_start_media_stream__descriptor;
extern const ProtobufCMessageDescriptor iot__service__media_stream__action_in_start_media_stream__live__descriptor;
extern const ProtobufCMessageDescriptor iot__service__media_stream__action_in_start_media_stream__media_file__descriptor;
extern const ProtobufCMessageDescriptor iot__service__media_stream__action_in_start_media_stream__stream_file__descriptor;
extern const ProtobufCMessageDescriptor iot__service__media_stream__action_out_start_media_stream__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__media_stream__action_out_start_media_stream__result_code__descriptor;
extern const ProtobufCMessageDescriptor iot__service__media_stream__action_in_stop_media_stream__descriptor;
extern const ProtobufCMessageDescriptor iot__service__media_stream__action_out_stop_media_stream__descriptor;
extern const ProtobufCMessageDescriptor iot__service__media_stream__action_in_set_transmit_resolution__descriptor;
extern const ProtobufCMessageDescriptor iot__service__media_stream__action_out_set_transmit_resolution__descriptor;
extern const ProtobufCMessageDescriptor iot__service__media_stream__action_in_set_media_stream_mode__descriptor;
extern const ProtobufCMessageDescriptor iot__service__media_stream__action_out_set_media_stream_mode__descriptor;
extern const ProtobufCMessageDescriptor iot__service__media_stream__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_mediaStream_2eproto__INCLUDED */