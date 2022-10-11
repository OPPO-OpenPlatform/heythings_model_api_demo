/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: devP2P.proto */

#include <errno.h>
#include <assert.h>
#include "devP2P.pb-c.h"
#include "dev_p2p_service.h"
#include "hey/schema.h"

#define DEV_P2P_SERVICE (73 * 256)
#define ACT_IID_CNT 1

static struct hey_service *dev_p2p_service;

static int32_t action_set_stream_info_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__DevP2P__ActionInSetStreamInfo *set_stream_info = iot__service__dev_p2p__action_in_set_stream_info__unpack(NULL, len, value);
    if (NULL == set_stream_info) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct dev_p2p_set_stream_info_in action = { 0 };
    action.vendor_info_case = set_stream_info->vendor_info_case;
    struct dev_p2p_set_stream_info_cs2_info_in cs2info;
    switch (action.vendor_info_case) {
    case DEV_P2P_SET_STREAM_INFO_VENDOR_INFO_IN_NOT_SET:
        break;
    case DEV_P2P_SET_STREAM_INFO_VENDOR_INFO_IN_CS2INFO:
        cs2info.p2pdid.data = set_stream_info->cs2info->p2pdid.data;
        cs2info.p2pdid.len = set_stream_info->cs2info->p2pdid.len;
        cs2info.license.data = set_stream_info->cs2info->license.data;
        cs2info.license.len = set_stream_info->cs2info->license.len;
        cs2info.initstring.data = set_stream_info->cs2info->initstring.data;
        cs2info.initstring.len = set_stream_info->cs2info->initstring.len;
        cs2info.crckey.data = set_stream_info->cs2info->crckey.data;
        cs2info.crckey.len = set_stream_info->cs2info->crckey.len;
        action.cs2info = &cs2info;
        break;
    default:
        break;
    }
    ret = dev_p2p_set_stream_info_start_cb(ctx, &action, user_context);

    iot__service__dev_p2p__action_in_set_stream_info__free_unpacked(set_stream_info, NULL);
    return ret;
}

static void action_set_stream_info_stop_cb(void *cb_data, void *user_context)
{
    dev_p2p_set_stream_info_stop_cb(user_context);
}

/**
 * @brief set stream info action send message of dev p2p service
 * @param ctx      [action context]
 * @param action   [set stream info action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t dev_p2p_set_stream_info_send(struct hey_action_ctx *ctx, struct dev_p2p_set_stream_info_out *action)
{
    int32_t ret = 0;
    Iot__Service__DevP2P__ActionOutSetStreamInfo *out = NULL;
    uint8_t *buf = NULL;
    out = malloc(sizeof(Iot__Service__DevP2P__ActionOutSetStreamInfo));
    if (NULL == out) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__dev_p2p__action_out_set_stream_info__init(out);
    out->code = action->code;
    size_t buf_len = iot__service__dev_p2p__action_out_set_stream_info__get_packed_size(out);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
    }
    iot__service__dev_p2p__action_out_set_stream_info__pack(out, buf);
    ret = hey_action_msg_send(ctx, buf_len, buf);

out:
    free(out);
    free(buf);
    return ret;
}

/**
 * @brief set stream info action stop of dev p2p service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t dev_p2p_set_stream_info_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static const struct hey_action_ctx_callbacks set_stream_info_cbs = {
    .start = action_set_stream_info_start_cb,
    .stop = action_set_stream_info_stop_cb
};

static const struct hey_action_entry actions_iids[] = {
    [0] = { .iid = DEV_P2P_ACTION_SET_STREAM_INFO, .type = HEY_ACTION_ONCE, .cbs = &set_stream_info_cbs },
};

static int dev_p2p_service_register(Iot__Service__DevP2P__Properties *props)
{
    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.actions.iids = (struct hey_action_entry *)actions_iids;
    schema_srv.actions.n_iid = ACT_IID_CNT;
    dev_p2p_service = hey_service_register(DEV_P2P_SERVICE, &schema_srv, NULL);
    if (NULL == dev_p2p_service) {
        return errno;
    }

    return 0;
}

/**
 * @brief dev p2p service initialization
 * @param properties [dev p2p service properties]
 * @return int32_t   [initialize result]
*/
int32_t dev_p2p_service_init(const struct dev_p2p_properties *properties)
{
    return dev_p2p_service_register(NULL);
}
