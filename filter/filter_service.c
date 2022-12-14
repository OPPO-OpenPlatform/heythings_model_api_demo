/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: filter.proto */

#include <errno.h>
#include <assert.h>
#include "filter.pb-c.h"
#include "filter_service.h"
#include "hey/schema.h"

#define FILTER_SERVICE (9 * 256)
#define PROP_IID_CNT 7
#define ACT_IID_CNT 2
#define EV_IID_CNT 2

static const struct hey_schema_property filter_properties_iids[] = {
    [0] = { .iid = 1, .type = HEY_PROPERTY_TYPE_GENERIC },
    [1] = { .iid = 2, .type = HEY_PROPERTY_TYPE_GENERIC },
    [2] = { .iid = 6, .type = HEY_PROPERTY_TYPE_GENERIC },
    [3] = { .iid = 8, .type = HEY_PROPERTY_TYPE_GENERIC },
    [4] = { .iid = 9, .type = HEY_PROPERTY_TYPE_GENERIC },
    [5] = { .iid = 10, .type = HEY_PROPERTY_TYPE_GENERIC },
    [6] = { .iid = 11, .type = HEY_PROPERTY_TYPE_GENERIC },
};
static const uint32_t filter_event_iids[] = { 4, 5 };
static struct hey_service *filter_service;

static int32_t action_self_cleaning_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__Filter__ActionInSelfCleaning *self_cleaning = iot__service__filter__action_in_self_cleaning__unpack(NULL, len, value);
    if (NULL == self_cleaning) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct filter_self_cleaning_in action = { 0 };
    ret = filter_self_cleaning_start_cb(ctx, &action, user_context);

    iot__service__filter__action_in_self_cleaning__free_unpacked(self_cleaning, NULL);
    return ret;
}

static void action_self_cleaning_stop_cb(void *cb_data, void *user_context)
{
    filter_self_cleaning_stop_cb(user_context);
}

/**
 * @brief self cleaning action send message of filter service
 * @param ctx      [action context]
 * @param action   [self cleaning action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t filter_self_cleaning_send(struct hey_action_ctx *ctx, struct filter_self_cleaning_out *action)
{
    return hey_action_msg_send(ctx, 0, NULL);
}

/**
 * @brief self cleaning action stop of filter service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t filter_self_cleaning_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t action_filter_reset_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__Filter__ActionInFilterReset *filter_reset = iot__service__filter__action_in_filter_reset__unpack(NULL, len, value);
    if (NULL == filter_reset) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct filter_filter_reset_in action = { 0 };
    ret = filter_filter_reset_start_cb(ctx, &action, user_context);

    iot__service__filter__action_in_filter_reset__free_unpacked(filter_reset, NULL);
    return ret;
}

static void action_filter_reset_stop_cb(void *cb_data, void *user_context)
{
    filter_filter_reset_stop_cb(user_context);
}

/**
 * @brief filter reset action send message of filter service
 * @param ctx      [action context]
 * @param action   [filter reset action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t filter_filter_reset_send(struct hey_action_ctx *ctx, struct filter_filter_reset_out *action)
{
    return hey_action_msg_send(ctx, 0, NULL);
}

/**
 * @brief filter reset action stop of filter service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t filter_filter_reset_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t service_filter_properties_write_cb(void *cb_data, size_t n_iid, uint32_t *iids,
                                                  size_t len, uint8_t *value)
{
    Iot__Service__Filter__Properties *props = iot__service__filter__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    int32_t ret = 0;
    struct filter_properties properties = { 0 };
    properties.filterusedtime = props->filterusedtime;
    properties.filterlefttime = props->filterlefttime;
    properties.prefilterusedtime = props->prefilterusedtime;
    properties.prefilterpercent = props->prefilterpercent;
    properties.filterpercent = props->filterpercent;
    properties.filterwater = props->filterwater;
    properties.filterstatus = props->filterstatus;
    ret = filter_properties_write_cb(n_iid, iids, &properties);

    iot__service__filter__properties__free_unpacked(props, NULL);
    return ret;
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_filter_properties_write_cb
};

static const struct hey_action_ctx_callbacks self_cleaning_cbs = {
    .start = action_self_cleaning_start_cb,
    .stop = action_self_cleaning_stop_cb
};

static const struct hey_action_ctx_callbacks filter_reset_cbs = {
    .start = action_filter_reset_start_cb,
    .stop = action_filter_reset_stop_cb
};

static const struct hey_action_entry actions_iids[] = {
    [0] = { .iid = FILTER_ACTION_SELF_CLEANING, .type = HEY_ACTION_ONCE, .cbs = &self_cleaning_cbs },
    [1] = { .iid = FILTER_ACTION_FILTER_RESET, .type = HEY_ACTION_ONCE, .cbs = &filter_reset_cbs },
};

static int filter_service_register(Iot__Service__Filter__Properties *props)
{
    uint8_t *buf;
    size_t buf_len;
    buf_len = iot__service__filter__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__filter__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (struct hey_schema_property *)filter_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    schema_srv.actions.iids = (struct hey_action_entry *)actions_iids;
    schema_srv.actions.n_iid = ACT_IID_CNT;
    schema_srv.events.iids = (uint32_t *)filter_event_iids;
    schema_srv.events.n_iid = EV_IID_CNT;
    filter_service = hey_service_register(FILTER_SERVICE, &schema_srv, NULL);
    if (NULL == filter_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of filter service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t filter_properties_update(size_t count, uint32_t *enumerate, struct filter_properties *properties)
{
    assert(count <= PROP_IID_CNT);
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__Filter__Properties *props = NULL;
    uint8_t *buf = NULL;
    props = malloc(sizeof(Iot__Service__Filter__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__filter__properties__init(props);
    props->filterusedtime = properties->filterusedtime;
    props->filterlefttime = properties->filterlefttime;
    props->prefilterusedtime = properties->prefilterusedtime;
    props->prefilterpercent = properties->prefilterpercent;
    props->filterpercent = properties->filterpercent;
    props->filterwater = properties->filterwater;
    props->filterstatus = properties->filterstatus;

    size_t buf_len;
    buf_len = iot__service__filter__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__filter__properties__pack(props, buf);
    }

    struct hey_properties_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(filter_service, &content);

out:
    free(props);
    free(buf);
    return ret;
}

/**
 * @brief filter service initialization
 * @param properties [filter service properties]
 * @return int32_t   [initialize result]
*/
int32_t filter_service_init(const struct filter_properties *properties)
{
    int ret = 0;
    Iot__Service__Filter__Properties *props = NULL;
    props = malloc(sizeof(Iot__Service__Filter__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__filter__properties__init(props);
    if (NULL != properties) {
        props->filterusedtime = properties->filterusedtime;
        props->filterlefttime = properties->filterlefttime;
        props->prefilterusedtime = properties->prefilterusedtime;
        props->prefilterpercent = properties->prefilterpercent;
        props->filterpercent = properties->filterpercent;
        props->filterwater = properties->filterwater;
        props->filterstatus = properties->filterstatus;
    }

    ret = filter_service_register(props);

out:
    free(props);
    return ret;
}

/**
 * @brief filter replacement notify of filter service
 * @param event    [event content]
 * @param attr     [event details]
 * @return int64_t [event uuid, get error code from errno when return negative value]
*/
int64_t filter_filter_replacement_notify(struct filter_event_filter_replacement *event, struct hey_event_notify_attr *attr)
{
    int64_t ret = -1;

    struct hey_event_notify_content content = {
        .iid = FILTER_EVENT_FILTER_REPLACEMENT,
        .importance = attr->importance,
        .uuid = attr->uuid,
        .ref_uuid = attr->ref_uuid,
        .timestamp = attr->timestamp,
        .len = 0,
        .value = NULL,
    };
    ret = hey_event_notify(filter_service, &content, filter_filter_replacement_notify_result_cb, attr->ctx);

    return ret;
}

/**
 * @brief filter cleaning notify of filter service
 * @param event    [event content]
 * @param attr     [event details]
 * @return int64_t [event uuid, get error code from errno when return negative value]
*/
int64_t filter_filter_cleaning_notify(struct filter_event_filter_cleaning *event, struct hey_event_notify_attr *attr)
{
    int64_t ret = -1;

    struct hey_event_notify_content content = {
        .iid = FILTER_EVENT_FILTER_CLEANING,
        .importance = attr->importance,
        .uuid = attr->uuid,
        .ref_uuid = attr->ref_uuid,
        .timestamp = attr->timestamp,
        .len = 0,
        .value = NULL,
    };
    ret = hey_event_notify(filter_service, &content, filter_filter_cleaning_notify_result_cb, attr->ctx);

    return ret;
}
