/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: smartCurtain.proto */

#include <errno.h>
#include <assert.h>
#include "smartCurtain.pb-c.h"
#include "smart_curtain_service.h"
#include "hey/schema.h"

#define SMART_CURTAIN_SERVICE (39 * 256)
#define PROP_IID_CNT 3
#define ACT_IID_CNT 2

static const struct hey_schema_property smart_curtain_properties_iids[] = {
    [0] = { .iid = 1, .type = HEY_PROPERTY_TYPE_GENERIC },
    [1] = { .iid = 2, .type = HEY_PROPERTY_TYPE_GENERIC },
    [2] = { .iid = 3, .type = HEY_PROPERTY_TYPE_GENERIC },
};
static struct hey_service *smart_curtain_service;

static int32_t action_open_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__SmartCurtain__ActionInOpen *open = iot__service__smart_curtain__action_in_open__unpack(NULL, len, value);
    if (NULL == open) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct smart_curtain_open_in action = { 0 };
    ret = smart_curtain_open_start_cb(ctx, &action, user_context);

    iot__service__smart_curtain__action_in_open__free_unpacked(open, NULL);
    return ret;
}

static void action_open_stop_cb(void *cb_data, void *user_context)
{
    smart_curtain_open_stop_cb(user_context);
}

/**
 * @brief open action send message of smart curtain service
 * @param ctx      [action context]
 * @param action   [open action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t smart_curtain_open_send(struct hey_action_ctx *ctx, struct smart_curtain_open_out *action)
{
    return hey_action_msg_send(ctx, 0, NULL);
}

/**
 * @brief open action stop of smart curtain service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t smart_curtain_open_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t action_close_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__SmartCurtain__ActionInClose *close = iot__service__smart_curtain__action_in_close__unpack(NULL, len, value);
    if (NULL == close) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct smart_curtain_close_in action = { 0 };
    ret = smart_curtain_close_start_cb(ctx, &action, user_context);

    iot__service__smart_curtain__action_in_close__free_unpacked(close, NULL);
    return ret;
}

static void action_close_stop_cb(void *cb_data, void *user_context)
{
    smart_curtain_close_stop_cb(user_context);
}

/**
 * @brief close action send message of smart curtain service
 * @param ctx      [action context]
 * @param action   [close action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t smart_curtain_close_send(struct hey_action_ctx *ctx, struct smart_curtain_close_out *action)
{
    return hey_action_msg_send(ctx, 0, NULL);
}

/**
 * @brief close action stop of smart curtain service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t smart_curtain_close_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t service_smart_curtain_properties_write_cb(void *cb_data, size_t n_iid, uint32_t *iids,
                                                         size_t len, uint8_t *value)
{
    Iot__Service__SmartCurtain__Properties *props = iot__service__smart_curtain__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    int32_t ret = 0;
    struct smart_curtain_properties properties = { 0 };
    properties.power = props->power;
    properties.openclosestate = props->openclosestate;
    properties.openlevel = props->openlevel;
    ret = smart_curtain_properties_write_cb(n_iid, iids, &properties);

    iot__service__smart_curtain__properties__free_unpacked(props, NULL);
    return ret;
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_smart_curtain_properties_write_cb
};

static const struct hey_action_ctx_callbacks open_cbs = {
    .start = action_open_start_cb,
    .stop = action_open_stop_cb
};

static const struct hey_action_ctx_callbacks close_cbs = {
    .start = action_close_start_cb,
    .stop = action_close_stop_cb
};

static const struct hey_action_entry actions_iids[] = {
    [0] = { .iid = SMART_CURTAIN_ACTION_OPEN, .type = HEY_ACTION_ONCE, .cbs = &open_cbs },
    [1] = { .iid = SMART_CURTAIN_ACTION_CLOSE, .type = HEY_ACTION_ONCE, .cbs = &close_cbs },
};

static int smart_curtain_service_register(Iot__Service__SmartCurtain__Properties *props)
{
    uint8_t *buf;
    size_t buf_len;
    buf_len = iot__service__smart_curtain__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__smart_curtain__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (struct hey_schema_property *)smart_curtain_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    schema_srv.actions.iids = (struct hey_action_entry *)actions_iids;
    schema_srv.actions.n_iid = ACT_IID_CNT;
    smart_curtain_service = hey_service_register(SMART_CURTAIN_SERVICE, &schema_srv, NULL);
    if (NULL == smart_curtain_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of smart curtain service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t smart_curtain_properties_update(size_t count, uint32_t *enumerate, struct smart_curtain_properties *properties)
{
    assert(count <= PROP_IID_CNT);
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__SmartCurtain__Properties *props = NULL;
    uint8_t *buf = NULL;
    props = malloc(sizeof(Iot__Service__SmartCurtain__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__smart_curtain__properties__init(props);
    props->power = properties->power;
    props->openclosestate = properties->openclosestate;
    props->openlevel = properties->openlevel;

    size_t buf_len;
    buf_len = iot__service__smart_curtain__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__smart_curtain__properties__pack(props, buf);
    }

    struct hey_properties_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(smart_curtain_service, &content);

out:
    free(props);
    free(buf);
    return ret;
}

/**
 * @brief smart curtain service initialization
 * @param properties [smart curtain service properties]
 * @return int32_t   [initialize result]
*/
int32_t smart_curtain_service_init(const struct smart_curtain_properties *properties)
{
    int ret = 0;
    Iot__Service__SmartCurtain__Properties *props = NULL;
    props = malloc(sizeof(Iot__Service__SmartCurtain__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__smart_curtain__properties__init(props);
    if (NULL != properties) {
        props->power = properties->power;
        props->openclosestate = properties->openclosestate;
        props->openlevel = properties->openlevel;
    }

    ret = smart_curtain_service_register(props);

out:
    free(props);
    return ret;
}
