/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: mediaStream.proto */

#ifndef MEDIA_STREAM_SERVICE_H
#define MEDIA_STREAM_SERVICE_H

#include "hey/types.h"

enum media_stream_action_out_start_media_stream_result_code {
    MEDIA_STREAM_ACTION_OUT_START_MEDIA_STREAM_RESULT_CODE_RESULT_OK = 0,
  /*
   *无视频文件
   */
    MEDIA_STREAM_ACTION_OUT_START_MEDIA_STREAM_RESULT_CODE_RESULT_NOSOURCE = 1,
  /*
   *磁盘已删除
   */
    MEDIA_STREAM_ACTION_OUT_START_MEDIA_STREAM_RESULT_CODE_RESULT_DISKREMOVED = 2
};

enum media_stream_transmit_resolution {
    MEDIA_STREAM_TRANSMIT_RESOLUTION_AUTO = 0,
    MEDIA_STREAM_TRANSMIT_RESOLUTION_R360P = 1,
    MEDIA_STREAM_TRANSMIT_RESOLUTION_R720P = 2,
  /*
   *2K
   */
    MEDIA_STREAM_TRANSMIT_RESOLUTION_R1080P = 3,
    MEDIA_STREAM_TRANSMIT_RESOLUTION_R1280P = 4,
    MEDIA_STREAM_TRANSMIT_RESOLUTION_R1296P = 5,
    MEDIA_STREAM_TRANSMIT_RESOLUTION_R480P = 6,
  /*
   *2.5K
   */
    MEDIA_STREAM_TRANSMIT_RESOLUTION_R1440P = 7
};

struct media_stream_start_media_stream_live_in {
    enum media_stream_transmit_resolution transmitresolution;
    uint32_t mediastreammode;
};

struct media_stream_start_media_stream_media_file_in {
    uint32_t mediastreammode;
    int32_t playspeed;
    uint32_t timeoffset;
    char *url;
};

struct media_stream_start_media_stream_stream_file_in {
    uint32_t mediastreammode;
    int32_t playspeed;
    uint64_t starttimestamp;
    uint64_t endtimestamp;
};

enum media_stream_start_media_stream_message_in {
    MEDIA_STREAM_START_MEDIA_STREAM_MESSAGE_IN_NOT_SET = 0,
    MEDIA_STREAM_START_MEDIA_STREAM_MESSAGE_IN_LIVE = 1,
    MEDIA_STREAM_START_MEDIA_STREAM_MESSAGE_IN_MEDIAFILE = 2,
    MEDIA_STREAM_START_MEDIA_STREAM_MESSAGE_IN_STREAMFILE = 3
};

struct media_stream_start_media_stream_in {
    enum media_stream_start_media_stream_message_in message_case;
    union {
        struct media_stream_start_media_stream_live_in *live;
        struct media_stream_start_media_stream_media_file_in *mediafile;
        struct media_stream_start_media_stream_stream_file_in *streamfile;
    };
};

struct media_stream_start_media_stream_out {
    uint32_t mediastreammode;
    enum media_stream_action_out_start_media_stream_result_code resultcode;
};

struct media_stream_stop_media_stream_in {
    char __place_holder__; // make compiler happy
};

struct media_stream_stop_media_stream_out {
    char __place_holder__; // make compiler happy
};

struct media_stream_set_transmit_resolution_in {
    enum media_stream_transmit_resolution resolution;
};

struct media_stream_set_transmit_resolution_out {
    char __place_holder__; // make compiler happy
};

struct media_stream_set_media_stream_mode_in {
    uint32_t mediastreammode;
};

struct media_stream_set_media_stream_mode_out {
    char __place_holder__; // make compiler happy
};

enum MEDIA_STREAM_PROPERTY {
    MEDIA_STREAM_PROPERTY_TRANSMITRESOLUTION = 1,
    MEDIA_STREAM_PROPERTY_MEDIASTREAMMODE = 2
};

enum MEDIA_STREAM_ACTION {
    MEDIA_STREAM_ACTION_START_MEDIA_STREAM = 3,
    MEDIA_STREAM_ACTION_STOP_MEDIA_STREAM = 4,
    MEDIA_STREAM_ACTION_SET_TRANSMIT_RESOLUTION = 5,
    MEDIA_STREAM_ACTION_SET_MEDIA_STREAM_MODE = 6
};

struct media_stream_properties {
    enum media_stream_transmit_resolution transmitresolution;
    uint32_t mediastreammode;
};

/**
 * @brief media stream service initialization
 * @param properties [media stream service properties]
 * @return int32_t   [initialize result]
*/
int32_t media_stream_service_init(const struct media_stream_properties *properties);

/**
 * @brief data at "struct hey_array_node" pack and unpack
*/
/**
 * @brief properties write callback of media stream service
 * @param count      [the number of properties will be written]
 * @param enumerate  [the iid enumeration of properties will be written]
 * @param properties [properties structure with written content]
 * @return int32_t   [be writed result, 0 means success]
*/
int32_t media_stream_properties_write_cb(size_t count, uint32_t *enumerate, struct media_stream_properties *properties);

/**
 * @brief update properties of media stream service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t media_stream_properties_update(size_t count, uint32_t *enumerate, struct media_stream_properties *properties);

/**
 * @brief start media stream action start callback of media stream service
 * @param ctx          [action context]
 * @param action       [start media stream action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t media_stream_start_media_stream_start_cb(struct hey_action_ctx *ctx, struct media_stream_start_media_stream_in *action, void **user_context);

/**
 * @brief start media stream action send message of media stream service
 * @param ctx      [action context]
 * @param action   [start media stream action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t media_stream_start_media_stream_send(struct hey_action_ctx *ctx, struct media_stream_start_media_stream_out *action);

/**
 * @brief start media stream action stop of media stream service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t media_stream_start_media_stream_stop(struct hey_action_ctx *ctx);

/**
 * @brief start media stream action stop callback of media stream service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void media_stream_start_media_stream_stop_cb(void *user_context);

/**
 * @brief stop media stream action start callback of media stream service
 * @param ctx          [action context]
 * @param action       [stop media stream action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t media_stream_stop_media_stream_start_cb(struct hey_action_ctx *ctx, struct media_stream_stop_media_stream_in *action, void **user_context);

/**
 * @brief stop media stream action send message of media stream service
 * @param ctx      [action context]
 * @param action   [stop media stream action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t media_stream_stop_media_stream_send(struct hey_action_ctx *ctx, struct media_stream_stop_media_stream_out *action);

/**
 * @brief stop media stream action stop of media stream service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t media_stream_stop_media_stream_stop(struct hey_action_ctx *ctx);

/**
 * @brief stop media stream action stop callback of media stream service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void media_stream_stop_media_stream_stop_cb(void *user_context);

/**
 * @brief set transmit resolution action start callback of media stream service
 * @param ctx          [action context]
 * @param action       [set transmit resolution action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t media_stream_set_transmit_resolution_start_cb(struct hey_action_ctx *ctx, struct media_stream_set_transmit_resolution_in *action, void **user_context);

/**
 * @brief set transmit resolution action send message of media stream service
 * @param ctx      [action context]
 * @param action   [set transmit resolution action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t media_stream_set_transmit_resolution_send(struct hey_action_ctx *ctx, struct media_stream_set_transmit_resolution_out *action);

/**
 * @brief set transmit resolution action stop of media stream service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t media_stream_set_transmit_resolution_stop(struct hey_action_ctx *ctx);

/**
 * @brief set transmit resolution action stop callback of media stream service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void media_stream_set_transmit_resolution_stop_cb(void *user_context);

/**
 * @brief set media stream mode action start callback of media stream service
 * @param ctx          [action context]
 * @param action       [set media stream mode action in]
 * @param user_context [user context record in SDK as needed, otherwise set it NULL]
 * @return int32_t     [action start handle result, 0 means success]
 */
int32_t media_stream_set_media_stream_mode_start_cb(struct hey_action_ctx *ctx, struct media_stream_set_media_stream_mode_in *action, void **user_context);

/**
 * @brief set media stream mode action send message of media stream service
 * @param ctx      [action context]
 * @param action   [set media stream mode action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t media_stream_set_media_stream_mode_send(struct hey_action_ctx *ctx, struct media_stream_set_media_stream_mode_out *action);

/**
 * @brief set media stream mode action stop of media stream service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t media_stream_set_media_stream_mode_stop(struct hey_action_ctx *ctx);

/**
 * @brief set media stream mode action stop callback of media stream service
 *        closed by the peer, user must to call action stop function
 * @param user_context [callback data which form action start callback function]
 * @return none
 */
void media_stream_set_media_stream_mode_stop_cb(void *user_context);

#endif /* MEDIA_STREAM_SERVICE_H */
