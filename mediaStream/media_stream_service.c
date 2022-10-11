/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: mediaStream.proto */

#include <errno.h>
#include <assert.h>
#include "mediaStream.pb-c.h"
#include "media_stream_service.h"
#include "hey/schema.h"

#define MEDIA_STREAM_SERVICE (67 * 256)
#define PROP_IID_CNT 2
#define ACT_IID_CNT 4

static const struct hey_schema_property media_stream_properties_iids[] = {
    [0] = { .iid = 1, .type = HEY_PROPERTY_TYPE_GENERIC },
    [1] = { .iid = 2, .type = HEY_PROPERTY_TYPE_GENERIC },
};
static struct hey_service *media_stream_service;

static int32_t action_start_media_stream_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__MediaStream__ActionInStartMediaStream *start_media_stream = iot__service__media_stream__action_in_start_media_stream__unpack(NULL, len, value);
    if (NULL == start_media_stream) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct media_stream_start_media_stream_in action = { 0 };
    action.message_case = start_media_stream->message_case;
    struct media_stream_start_media_stream_live_in live;
    struct media_stream_start_media_stream_media_file_in mediafile;
    struct media_stream_start_media_stream_stream_file_in streamfile;
    switch (action.message_case) {
    case MEDIA_STREAM_START_MEDIA_STREAM_MESSAGE_IN_NOT_SET:
        break;
    case MEDIA_STREAM_START_MEDIA_STREAM_MESSAGE_IN_LIVE:
        live.transmitresolution = start_media_stream->live->transmitresolution;
        live.mediastreammode = start_media_stream->live->mediastreammode;
        action.live = &live;
        break;
    case MEDIA_STREAM_START_MEDIA_STREAM_MESSAGE_IN_MEDIAFILE:
        mediafile.mediastreammode = start_media_stream->mediafile->mediastreammode;
        mediafile.playspeed = start_media_stream->mediafile->playspeed;
        mediafile.timeoffset = start_media_stream->mediafile->timeoffset;
        mediafile.url = start_media_stream->mediafile->url;
        action.mediafile = &mediafile;
        break;
    case MEDIA_STREAM_START_MEDIA_STREAM_MESSAGE_IN_STREAMFILE:
        streamfile.mediastreammode = start_media_stream->streamfile->mediastreammode;
        streamfile.playspeed = start_media_stream->streamfile->playspeed;
        streamfile.starttimestamp = start_media_stream->streamfile->starttimestamp;
        streamfile.endtimestamp = start_media_stream->streamfile->endtimestamp;
        action.streamfile = &streamfile;
        break;
    default:
        break;
    }
    ret = media_stream_start_media_stream_start_cb(ctx, &action, user_context);

    iot__service__media_stream__action_in_start_media_stream__free_unpacked(start_media_stream, NULL);
    return ret;
}

static void action_start_media_stream_stop_cb(void *cb_data, void *user_context)
{
    media_stream_start_media_stream_stop_cb(user_context);
}

/**
 * @brief start media stream action send message of media stream service
 * @param ctx      [action context]
 * @param action   [start media stream action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t media_stream_start_media_stream_send(struct hey_action_ctx *ctx, struct media_stream_start_media_stream_out *action)
{
    int32_t ret = 0;
    Iot__Service__MediaStream__ActionOutStartMediaStream *out = NULL;
    uint8_t *buf = NULL;
    out = malloc(sizeof(Iot__Service__MediaStream__ActionOutStartMediaStream));
    if (NULL == out) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__media_stream__action_out_start_media_stream__init(out);
    out->mediastreammode = action->mediastreammode;
    out->resultcode = action->resultcode;
    size_t buf_len = iot__service__media_stream__action_out_start_media_stream__get_packed_size(out);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
    }
    iot__service__media_stream__action_out_start_media_stream__pack(out, buf);
    ret = hey_action_msg_send(ctx, buf_len, buf);

out:
    free(out);
    free(buf);
    return ret;
}

/**
 * @brief start media stream action stop of media stream service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t media_stream_start_media_stream_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t action_stop_media_stream_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__MediaStream__ActionInStopMediaStream *stop_media_stream = iot__service__media_stream__action_in_stop_media_stream__unpack(NULL, len, value);
    if (NULL == stop_media_stream) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct media_stream_stop_media_stream_in action = { 0 };
    ret = media_stream_stop_media_stream_start_cb(ctx, &action, user_context);

    iot__service__media_stream__action_in_stop_media_stream__free_unpacked(stop_media_stream, NULL);
    return ret;
}

static void action_stop_media_stream_stop_cb(void *cb_data, void *user_context)
{
    media_stream_stop_media_stream_stop_cb(user_context);
}

/**
 * @brief stop media stream action send message of media stream service
 * @param ctx      [action context]
 * @param action   [stop media stream action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t media_stream_stop_media_stream_send(struct hey_action_ctx *ctx, struct media_stream_stop_media_stream_out *action)
{
    return hey_action_msg_send(ctx, 0, NULL);
}

/**
 * @brief stop media stream action stop of media stream service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t media_stream_stop_media_stream_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t action_set_transmit_resolution_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__MediaStream__ActionInSetTransmitResolution *set_transmit_resolution = iot__service__media_stream__action_in_set_transmit_resolution__unpack(NULL, len, value);
    if (NULL == set_transmit_resolution) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct media_stream_set_transmit_resolution_in action = { 0 };
    action.resolution = set_transmit_resolution->resolution;
    ret = media_stream_set_transmit_resolution_start_cb(ctx, &action, user_context);

    iot__service__media_stream__action_in_set_transmit_resolution__free_unpacked(set_transmit_resolution, NULL);
    return ret;
}

static void action_set_transmit_resolution_stop_cb(void *cb_data, void *user_context)
{
    media_stream_set_transmit_resolution_stop_cb(user_context);
}

/**
 * @brief set transmit resolution action send message of media stream service
 * @param ctx      [action context]
 * @param action   [set transmit resolution action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t media_stream_set_transmit_resolution_send(struct hey_action_ctx *ctx, struct media_stream_set_transmit_resolution_out *action)
{
    return hey_action_msg_send(ctx, 0, NULL);
}

/**
 * @brief set transmit resolution action stop of media stream service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t media_stream_set_transmit_resolution_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t action_set_media_stream_mode_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__MediaStream__ActionInSetMediaStreamMode *set_media_stream_mode = iot__service__media_stream__action_in_set_media_stream_mode__unpack(NULL, len, value);
    if (NULL == set_media_stream_mode) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct media_stream_set_media_stream_mode_in action = { 0 };
    action.mediastreammode = set_media_stream_mode->mediastreammode;
    ret = media_stream_set_media_stream_mode_start_cb(ctx, &action, user_context);

    iot__service__media_stream__action_in_set_media_stream_mode__free_unpacked(set_media_stream_mode, NULL);
    return ret;
}

static void action_set_media_stream_mode_stop_cb(void *cb_data, void *user_context)
{
    media_stream_set_media_stream_mode_stop_cb(user_context);
}

/**
 * @brief set media stream mode action send message of media stream service
 * @param ctx      [action context]
 * @param action   [set media stream mode action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t media_stream_set_media_stream_mode_send(struct hey_action_ctx *ctx, struct media_stream_set_media_stream_mode_out *action)
{
    return hey_action_msg_send(ctx, 0, NULL);
}

/**
 * @brief set media stream mode action stop of media stream service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t media_stream_set_media_stream_mode_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t service_media_stream_properties_write_cb(void *cb_data, size_t n_iid, uint32_t *iids,
                                                        size_t len, uint8_t *value)
{
    Iot__Service__MediaStream__Properties *props = iot__service__media_stream__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    int32_t ret = 0;
    struct media_stream_properties properties = { 0 };
    properties.transmitresolution = props->transmitresolution;
    properties.mediastreammode = props->mediastreammode;
    ret = media_stream_properties_write_cb(n_iid, iids, &properties);

    iot__service__media_stream__properties__free_unpacked(props, NULL);
    return ret;
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_media_stream_properties_write_cb
};

static const struct hey_action_ctx_callbacks start_media_stream_cbs = {
    .start = action_start_media_stream_start_cb,
    .stop = action_start_media_stream_stop_cb
};

static const struct hey_action_ctx_callbacks stop_media_stream_cbs = {
    .start = action_stop_media_stream_start_cb,
    .stop = action_stop_media_stream_stop_cb
};

static const struct hey_action_ctx_callbacks set_transmit_resolution_cbs = {
    .start = action_set_transmit_resolution_start_cb,
    .stop = action_set_transmit_resolution_stop_cb
};

static const struct hey_action_ctx_callbacks set_media_stream_mode_cbs = {
    .start = action_set_media_stream_mode_start_cb,
    .stop = action_set_media_stream_mode_stop_cb
};

static const struct hey_action_entry actions_iids[] = {
    [0] = { .iid = MEDIA_STREAM_ACTION_START_MEDIA_STREAM, .type = HEY_ACTION_ONCE, .cbs = &start_media_stream_cbs },
    [1] = { .iid = MEDIA_STREAM_ACTION_STOP_MEDIA_STREAM, .type = HEY_ACTION_ONCE, .cbs = &stop_media_stream_cbs },
    [2] = { .iid = MEDIA_STREAM_ACTION_SET_TRANSMIT_RESOLUTION, .type = HEY_ACTION_ONCE, .cbs = &set_transmit_resolution_cbs },
    [3] = { .iid = MEDIA_STREAM_ACTION_SET_MEDIA_STREAM_MODE, .type = HEY_ACTION_ONCE, .cbs = &set_media_stream_mode_cbs },
};

static int media_stream_service_register(Iot__Service__MediaStream__Properties *props)
{
    uint8_t *buf;
    size_t buf_len;
    buf_len = iot__service__media_stream__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__media_stream__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (struct hey_schema_property *)media_stream_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    schema_srv.actions.iids = (struct hey_action_entry *)actions_iids;
    schema_srv.actions.n_iid = ACT_IID_CNT;
    media_stream_service = hey_service_register(MEDIA_STREAM_SERVICE, &schema_srv, NULL);
    if (NULL == media_stream_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of media stream service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t media_stream_properties_update(size_t count, uint32_t *enumerate, struct media_stream_properties *properties)
{
    assert(count <= PROP_IID_CNT);
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__MediaStream__Properties *props = NULL;
    uint8_t *buf = NULL;
    props = malloc(sizeof(Iot__Service__MediaStream__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__media_stream__properties__init(props);
    props->transmitresolution = properties->transmitresolution;
    props->mediastreammode = properties->mediastreammode;

    size_t buf_len;
    buf_len = iot__service__media_stream__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__media_stream__properties__pack(props, buf);
    }

    struct hey_properties_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(media_stream_service, &content);

out:
    free(props);
    free(buf);
    return ret;
}

/**
 * @brief media stream service initialization
 * @param properties [media stream service properties]
 * @return int32_t   [initialize result]
*/
int32_t media_stream_service_init(const struct media_stream_properties *properties)
{
    int ret = 0;
    Iot__Service__MediaStream__Properties *props = NULL;
    props = malloc(sizeof(Iot__Service__MediaStream__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__media_stream__properties__init(props);
    if (NULL != properties) {
        props->transmitresolution = properties->transmitresolution;
        props->mediastreammode = properties->mediastreammode;
    }

    ret = media_stream_service_register(props);

out:
    free(props);
    return ret;
}