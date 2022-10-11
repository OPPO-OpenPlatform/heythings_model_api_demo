/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: dataThrough.proto */

#include <errno.h>
#include <assert.h>
#include "dataThrough.pb-c.h"
#include "data_through_service.h"
#include "hey/schema.h"

#define DATA_THROUGH_SERVICE (70 * 256)
#define ACT_IID_CNT 1
#define EV_IID_CNT 1

static const uint32_t data_through_event_iids[] = { 2 };
static struct hey_service *data_through_service;

static int32_t action_data_through_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__DataThrough__ActionInDataThrough *data_through = iot__service__data_through__action_in_data_through__unpack(NULL, len, value);
    if (NULL == data_through) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct data_through_data_through_in action = { 0 };
    action.message_case = data_through->message_case;
    struct data_through_data_through_return_msg_in returndata;
    switch (action.message_case) {
    case DATA_THROUGH_DATA_THROUGH_MESSAGE_IN_NOT_SET:
        break;
    case DATA_THROUGH_DATA_THROUGH_MESSAGE_IN_SENDDATA:
        action.senddata.data = data_through->senddata.data;
        action.senddata.len = data_through->senddata.len;
        break;
    case DATA_THROUGH_DATA_THROUGH_MESSAGE_IN_RETURNDATA:
        returndata.data.data = data_through->returndata->data.data;
        returndata.data.len = data_through->returndata->data.len;
        returndata.code = data_through->returndata->code;
        action.returndata = &returndata;
        break;
    default:
        break;
    }
    ret = data_through_data_through_start_cb(ctx, &action, user_context);

    iot__service__data_through__action_in_data_through__free_unpacked(data_through, NULL);
    return ret;
}

static int32_t action_data_through_message_cb(void *cb_data, void *user_context, size_t len, uint8_t *value)
{
    int32_t ret = -1;
    Iot__Service__DataThrough__ActionInDataThrough *data_through = iot__service__data_through__action_in_data_through__unpack(NULL, len, value);
    if (NULL == data_through) {
        return EINVAL;
    }

    struct data_through_data_through_in action = { 0 };
    action.message_case = data_through->message_case;
    struct data_through_data_through_return_msg_in returndata;
    switch (action.message_case) {
    case DATA_THROUGH_DATA_THROUGH_MESSAGE_IN_NOT_SET:
        break;
    case DATA_THROUGH_DATA_THROUGH_MESSAGE_IN_SENDDATA:
        action.senddata.data = data_through->senddata.data;
        action.senddata.len = data_through->senddata.len;
        break;
    case DATA_THROUGH_DATA_THROUGH_MESSAGE_IN_RETURNDATA:
        returndata.data.data = data_through->returndata->data.data;
        returndata.data.len = data_through->returndata->data.len;
        returndata.code = data_through->returndata->code;
        action.returndata = &returndata;
        break;
    default:
        break;
    }
    ret = data_through_data_through_message_cb(user_context, &action);

    iot__service__data_through__action_in_data_through__free_unpacked(data_through, NULL);
    return ret;
}

static void action_data_through_stop_cb(void *cb_data, void *user_context)
{
    data_through_data_through_stop_cb(user_context);
}

/**
 * @brief data through action send message of data through service
 * @param ctx      [action context]
 * @param action   [data through action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t data_through_data_through_send(struct hey_action_ctx *ctx, struct data_through_data_through_out *action)
{
    int32_t ret = 0;
    Iot__Service__DataThrough__ActionOutDataThrough *out = NULL;
    uint8_t *buf = NULL;
    out = malloc(sizeof(Iot__Service__DataThrough__ActionOutDataThrough));
    if (NULL == out) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__data_through__action_out_data_through__init(out);
    out->message_case = action->message_case;
    switch (out->message_case) {
    case DATA_THROUGH_DATA_THROUGH_MESSAGE_OUT_NOT_SET:
        break;
    case DATA_THROUGH_DATA_THROUGH_MESSAGE_OUT_SENDDATA:
        out->senddata.data = action->senddata.data;
        out->senddata.len = action->senddata.len;
        break;
    case DATA_THROUGH_DATA_THROUGH_MESSAGE_OUT_RETURNDATA: {
        out->returndata = malloc(sizeof(Iot__Service__DataThrough__ActionOutDataThrough__ReturnMsg));
        if (NULL == out->returndata) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__data_through__action_out_data_through__return_msg__init(out->returndata);
        out->returndata->data.data = action->returndata->data.data;
        out->returndata->data.len = action->returndata->data.len;
        out->returndata->code = action->returndata->code;
    } break;
    default:
        break;
    }
    size_t buf_len = iot__service__data_through__action_out_data_through__get_packed_size(out);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
    }
    iot__service__data_through__action_out_data_through__pack(out, buf);
    ret = hey_action_msg_send(ctx, buf_len, buf);

out:
    if (out && out->returndata) {
        free(out->returndata);
    }
    free(out);
    free(buf);
    return ret;
}

/**
 * @brief data through action stop of data through service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t data_through_data_through_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static const struct hey_action_ctx_callbacks data_through_cbs = {
    .start = action_data_through_start_cb,
    .message = action_data_through_message_cb,
    .stop = action_data_through_stop_cb
};

static const struct hey_action_entry actions_iids[] = {
    [0] = { .iid = DATA_THROUGH_ACTION_DATA_THROUGH, .type = HEY_ACTION_IN_STREAM_OUT_STREAM, .cbs = &data_through_cbs },
};

static int data_through_service_register(Iot__Service__DataThrough__Properties *props)
{
    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.actions.iids = (struct hey_action_entry *)actions_iids;
    schema_srv.actions.n_iid = ACT_IID_CNT;
    schema_srv.events.iids = (uint32_t *)data_through_event_iids;
    schema_srv.events.n_iid = EV_IID_CNT;
    data_through_service = hey_service_register(DATA_THROUGH_SERVICE, &schema_srv, NULL);
    if (NULL == data_through_service) {
        return errno;
    }

    return 0;
}

/**
 * @brief data through service initialization
 * @param properties [data through service properties]
 * @return int32_t   [initialize result]
*/
int32_t data_through_service_init(const struct data_through_properties *properties)
{
    return data_through_service_register(NULL);
}

/**
 * @brief beacon through notify of data through service
 * @param event    [event content]
 * @param attr     [event details]
 * @return int64_t [event uuid, get error code from errno when return negative value]
*/
int64_t data_through_beacon_through_notify(struct data_through_event_beacon_through *event, struct hey_event_notify_attr *attr)
{
    int64_t ret = -1;

    Iot__Service__DataThrough__EventBeaconThrough *ev = NULL;
    uint8_t *buf = NULL;
    ev = malloc(sizeof(Iot__Service__DataThrough__EventBeaconThrough));
    if (NULL == ev) {
        errno = ENOMEM;
        return ret;
    }
    iot__service__data_through__event_beacon_through__init(ev);
    ev->beacondata.data = event->beacondata.data;
    ev->beacondata.len = event->beacondata.len;

    size_t buf_len;
    buf_len = iot__service__data_through__event_beacon_through__get_packed_size(ev);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            errno = ENOMEM;
            goto out;
        }
        iot__service__data_through__event_beacon_through__pack(ev, buf);
    }

    struct hey_event_notify_content content = {
        .iid = DATA_THROUGH_EVENT_BEACON_THROUGH,
        .importance = attr->importance,
        .uuid = attr->uuid,
        .ref_uuid = attr->ref_uuid,
        .timestamp = attr->timestamp,
        .len = buf_len,
        .value = buf,
    };
    ret = hey_event_notify(data_through_service, &content, data_through_beacon_through_notify_result_cb, attr->ctx);

out:
    free(ev);
    free(buf);
    return ret;
}
