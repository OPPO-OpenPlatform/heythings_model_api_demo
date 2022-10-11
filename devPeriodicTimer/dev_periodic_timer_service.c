/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: devPeriodicTimer.proto */

#include <errno.h>
#include <assert.h>
#include "devPeriodicTimer.pb-c.h"
#include "dev_periodic_timer_service.h"
#include "hey/schema.h"

#define DEV_PERIODIC_TIMER_SERVICE (4 * 256)
#define PROP_IID_CNT 1
#define ACT_IID_CNT 1

static const struct hey_schema_property dev_periodic_timer_properties_iids[] = {
    [0] = { .iid = 1, .type = HEY_PROPERTY_TYPE_ARRAY },
};
static struct hey_service *dev_periodic_timer_service;

static int32_t action_periodic_timer_execute_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__DevPeriodicTimer__ActionInPeriodicTimerExecute *periodic_timer_execute = iot__service__dev_periodic_timer__action_in_periodic_timer_execute__unpack(NULL, len, value);
    if (NULL == periodic_timer_execute) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct dev_periodic_timer_periodic_timer_execute_in action = { 0 };
    action.n_config = periodic_timer_execute->n_config;
    if (action.n_config) {
        action.config = calloc(action.n_config, sizeof(struct dev_periodic_timer_config*));
        if (action.config == NULL) {
            goto out;
        }
    }
    for (int i = 0; i < action.n_config; i++) {
        action.config[i] = malloc(sizeof(struct dev_periodic_timer_config));
        if (action.config[i] == NULL) {
            goto out;
        }
        action.config[i]->siid = periodic_timer_execute->config[i]->siid;
        action.config[i]->n_iid = periodic_timer_execute->config[i]->n_iid;
        action.config[i]->iid = periodic_timer_execute->config[i]->iid;
        action.config[i]->data.data = periodic_timer_execute->config[i]->data.data;
        action.config[i]->data.len = periodic_timer_execute->config[i]->data.len;
    }
    ret = dev_periodic_timer_periodic_timer_execute_start_cb(ctx, &action, user_context);

out:
    for (int i = 0; i < action.n_config; i++) {
        if (action.config[i] == NULL)
            break;
        free(action.config[i]);
    }
    free(action.config);
    iot__service__dev_periodic_timer__action_in_periodic_timer_execute__free_unpacked(periodic_timer_execute, NULL);
    return ret;
}

static void action_periodic_timer_execute_stop_cb(void *cb_data, void *user_context)
{
    dev_periodic_timer_periodic_timer_execute_stop_cb(user_context);
}

/**
 * @brief periodic timer execute action send message of dev periodic timer service
 * @param ctx      [action context]
 * @param action   [periodic timer execute action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t dev_periodic_timer_periodic_timer_execute_send(struct hey_action_ctx *ctx, struct dev_periodic_timer_periodic_timer_execute_out *action)
{
    int32_t ret = 0;
    Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute *out = NULL;
    uint8_t *buf = NULL;
    out = malloc(sizeof(Iot__Service__DevPeriodicTimer__ActionOutPeriodicTimerExecute));
    if (NULL == out) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__dev_periodic_timer__action_out_periodic_timer_execute__init(out);
    out->code = action->code;
    size_t buf_len = iot__service__dev_periodic_timer__action_out_periodic_timer_execute__get_packed_size(out);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
    }
    iot__service__dev_periodic_timer__action_out_periodic_timer_execute__pack(out, buf);
    ret = hey_action_msg_send(ctx, buf_len, buf);

out:
    free(out);
    free(buf);
    return ret;
}

/**
 * @brief periodic timer execute action stop of dev periodic timer service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t dev_periodic_timer_periodic_timer_execute_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static Iot__Service__DevPeriodicTimer__PeriodicTimer *_dev_periodic_timer_periodic_timer = NULL;
struct dev_periodic_timer_periodic_timer *dev_periodic_timer_periodic_timer_unpack(const uint8_t *data, size_t len)
{
    _dev_periodic_timer_periodic_timer = iot__service__dev_periodic_timer__periodic_timer__unpack(NULL, len, data);
    if (NULL == _dev_periodic_timer_periodic_timer) {
        return NULL;
    }
    struct dev_periodic_timer_periodic_timer *hey_struct = malloc(sizeof(struct dev_periodic_timer_periodic_timer));
    if (NULL == hey_struct) {
        goto out1;
    }
    struct dev_periodic_timer_config **config = NULL;
    config = calloc(_dev_periodic_timer_periodic_timer->n_config, sizeof(struct dev_periodic_timer_config *));
    if (NULL == config) {
        goto out2;
    }
    for (int i = 0; i < _dev_periodic_timer_periodic_timer->n_config; i++) {
        config[i] = malloc(sizeof(struct dev_periodic_timer_config));
        if (NULL == config[i]) {
            goto out3;
        }
        config[i]->siid = _dev_periodic_timer_periodic_timer->config[i]->siid;
        config[i]->n_iid = _dev_periodic_timer_periodic_timer->config[i]->n_iid;
        memcpy(config[i]->iid, _dev_periodic_timer_periodic_timer->config[i]->iid, sizeof(uint32_t) * config[i]->n_iid);
        config[i]->data.data = _dev_periodic_timer_periodic_timer->config[i]->n_data.data;
        config[i]->data.len = _dev_periodic_timer_periodic_timer->config[i]->data.len;
    }
    hey_struct->status = _dev_periodic_timer_periodic_timer->status;
    hey_struct->name = _dev_periodic_timer_periodic_timer->name;
    hey_struct->repeat = _dev_periodic_timer_periodic_timer->repeat;
    hey_struct->hour = _dev_periodic_timer_periodic_timer->hour;
    hey_struct->min = _dev_periodic_timer_periodic_timer->min;
    hey_struct->sec = _dev_periodic_timer_periodic_timer->sec;
    hey_struct->n_config = _dev_periodic_timer_periodic_timer->n_config;
    hey_struct->config = config;
    hey_struct->settingtime = _dev_periodic_timer_periodic_timer->settingtime;
    return hey_struct;
out3:
    for (int i = 0; i < _dev_periodic_timer_periodic_timer->n_config; i++) {
        if (NULL == config[i])
            break;
        free(config[i]);
    }
    free(config);
out2:
    free(hey_struct);
out1:
    iot__service__dev_periodic_timer__periodic_timer__free_unpacked(_dev_periodic_timer_periodic_timer, NULL);
    return NULL;
}

void dev_periodic_timer_periodic_timer_free_unpacked(struct dev_periodic_timer_periodic_timer *data)
{
    assert(NULL != data);
    iot__service__dev_periodic_timer__periodic_timer__free_unpacked(_dev_periodic_timer_periodic_timer, NULL);
    for (int i = 0; i < data->n_config; i++) {
        free(data->config[i]);
    }
    free(data->config);
    free(data);
}

int32_t dev_periodic_timer_periodic_timer_get_packed_size(const struct dev_periodic_timer_periodic_timer *data)
{
    assert(data);
    int ret = 0;
    Iot__Service__DevPeriodicTimer__PeriodicTimer *pb_struct = malloc(sizeof(Iot__Service__DevPeriodicTimer__PeriodicTimer));
    if (pb_struct == NULL) {
        return -1;
    }
    iot__service__dev_periodic_timer__periodic_timer__init(pb_struct);
    Iot__Service__DevPeriodicTimer__Config **config = NULL;
    if (data->n_config) {
        config = calloc(data->n_config, sizeof(Iot__Service__DevPeriodicTimer__Config *));
        if (NULL == config) {
            ret = -1;
            goto out;
        }
        for (int i = 0; i < data->n_config; i++) {
            config[i] = malloc(sizeof(Iot__Service__DevPeriodicTimer__Config));
            if (NULL == config[i]) {
                ret = -1;
                goto out;
            }
            iot__service__dev_periodic_timer__config__init(config[i]);
            config[i]->siid = data->config[i]->siid;
            config[i]->n_iid = data->config[i]->n_iid;
            config[i]->iid = data->config[i]->iid;
            config[i]->data[j]->data.data = data->config[i]->data.data;
            config[i]->data[j]->data.len = data->config[i]->data.len;
        }
    }
    pb_struct->status = data->status;
    pb_struct->name = data->name;
    pb_struct->repeat = data->repeat;
    pb_struct->hour = data->hour;
    pb_struct->min = data->min;
    pb_struct->sec = data->sec;
    pb_struct->n_config = data->n_config;
    pb_struct->config = config;
    pb_struct->settingtime = data->settingtime;
    ret = iot__service__dev_periodic_timer__periodic_timer__get_packed_size(pb_struct);
out:
    for (int i = 0; i < data->n_config; i++) {
        if (config[i] == NULL)
            break;
        free(config[i]);
    }
    free(config);
    free(pb_struct);
    return ret;
}

int32_t dev_periodic_timer_periodic_timer_pack(const struct dev_periodic_timer_periodic_timer *data, uint8_t *out)
{
    assert(data);
    int ret = 0;
    Iot__Service__DevPeriodicTimer__PeriodicTimer *pb_struct = malloc(sizeof(Iot__Service__DevPeriodicTimer__PeriodicTimer));
    if (pb_struct == NULL) {
        return -1;
    }
    iot__service__dev_periodic_timer__periodic_timer__init(pb_struct);
    Iot__Service__DevPeriodicTimer__Config **config = NULL;
    if (data->n_config) {
        config = calloc(data->n_config, sizeof(Iot__Service__DevPeriodicTimer__Config *));
        if (NULL == config) {
            ret = -1;
            goto out;
        }
        for (int i = 0; i < data->n_config; i++) {
            config[i] = malloc(sizeof(Iot__Service__DevPeriodicTimer__Config));
            if (NULL == config[i]) {
                ret = -1;
                goto out;
            }
            iot__service__dev_periodic_timer__config__init(config[i]);
            config[i]->siid = data->config[i]->siid;
            config[i]->n_iid = data->config[i]->n_iid;
            config[i]->iid = data->config[i]->iid;
            config[i]->data[j]->data.data = data->config[i]->data.data;
            config[i]->data[j]->data.len = data->config[i]->data.len;
        }
    }
    pb_struct->status = data->status;
    pb_struct->name = data->name;
    pb_struct->repeat = data->repeat;
    pb_struct->hour = data->hour;
    pb_struct->min = data->min;
    pb_struct->sec = data->sec;
    pb_struct->n_config = data->n_config;
    pb_struct->config = config;
    pb_struct->settingtime = data->settingtime;
    ret = iot__service__dev_periodic_timer__periodic_timer__pack(pb_struct, out);
out:
    for (int i = 0; i < data->n_config; i++) {
        if (config[i] == NULL)
            break;
        free(config[i]);
    }
    free(config);
    free(pb_struct);
    return ret;
}

static int32_t service_dev_periodic_timer_properties_write_cb(void *cb_data, size_t n_iid, uint32_t *iids,
                                                              size_t len, uint8_t *value)
{
    Iot__Service__DevPeriodicTimer__Properties *props = iot__service__dev_periodic_timer__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    int32_t ret = 0;
    struct dev_periodic_timer_properties properties = { 0 };
    struct hey_array_node **periodictimer = NULL;
    if (props->n_periodictimer) {
        periodictimer = calloc(props->n_periodictimer, sizeof(struct hey_array_node *));
        if (periodictimer == NULL) {
            ret = ENOMEM;
            goto out;
        }
        for (int i = 0; i < props->n_periodictimer; i++) {
            periodictimer[i] = malloc(sizeof(struct hey_array_node));
            if (periodictimer[i] == NULL) {
                ret = ENOMEM;
                goto out;
            }
            periodictimer[i]->id = props->periodictimer[i]->id;
            periodictimer[i]->data.data = props->periodictimer[i]->data.data;
            periodictimer[i]->data.len = props->periodictimer[i]->data.len;
        }
        properties.n_periodictimer = props->n_periodictimer;
        properties.periodictimer = periodictimer;
    }
    ret = dev_periodic_timer_properties_write_cb(n_iid, iids, &properties);

out:
    if (periodictimer) {
        for (int i = 0; i < props->n_periodictimer; i++) {
            free(periodictimer[i]);
        }
        free(periodictimer);
    }
    iot__service__dev_periodic_timer__properties__free_unpacked(props, NULL);
    return ret;
}

static int32_t service_dev_periodic_timer_properties_array_add_cb(void *cb_data, uint32_t iid, size_t len, uint8_t *value)
{
    switch(iid) {
    case DEV_PERIODIC_TIMER_PROPERTY_PERIODICTIMER:
        return dev_periodic_timer_periodictimer_array_add_cb(len, value);
    default:
        return -1;
    }
}

static int32_t service_dev_periodic_timer_properties_array_del_cb(void *cb_data, uint32_t iid, size_t n_id, uint32_t *ids)
{
    switch(iid) {
    case DEV_PERIODIC_TIMER_PROPERTY_PERIODICTIMER:
        return dev_periodic_timer_periodictimer_array_del_cb(n_id, ids);
    default:
        return -1;
    }
}

static int32_t service_dev_periodic_timer_properties_array_replace_cb(void *cb_data, uint32_t iid, uint32_t id, size_t len, uint8_t *value)
{
    switch(iid) {
    case DEV_PERIODIC_TIMER_PROPERTY_PERIODICTIMER:
        return dev_periodic_timer_periodictimer_array_replace_cb(id, len, value);
    default:
        return -1;
    }
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_dev_periodic_timer_properties_write_cb,
    .array_add = service_dev_periodic_timer_properties_array_add_cb,
    .array_del = service_dev_periodic_timer_properties_array_del_cb,
    .array_replace = service_dev_periodic_timer_properties_array_replace_cb,
};

static const struct hey_action_ctx_callbacks periodic_timer_execute_cbs = {
    .start = action_periodic_timer_execute_start_cb,
    .stop = action_periodic_timer_execute_stop_cb
};

static const struct hey_action_entry actions_iids[] = {
    [0] = { .iid = DEV_PERIODIC_TIMER_ACTION_PERIODIC_TIMER_EXECUTE, .type = HEY_ACTION_ONCE, .cbs = &periodic_timer_execute_cbs },
};

static int dev_periodic_timer_service_register(Iot__Service__DevPeriodicTimer__Properties *props)
{
    uint8_t *buf;
    size_t buf_len;
    buf_len = iot__service__dev_periodic_timer__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__dev_periodic_timer__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (struct hey_schema_property *)dev_periodic_timer_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    schema_srv.actions.iids = (struct hey_action_entry *)actions_iids;
    schema_srv.actions.n_iid = ACT_IID_CNT;
    dev_periodic_timer_service = hey_service_register(DEV_PERIODIC_TIMER_SERVICE, &schema_srv, NULL);
    if (NULL == dev_periodic_timer_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of dev periodic timer service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t dev_periodic_timer_properties_update(size_t count, uint32_t *enumerate, struct dev_periodic_timer_properties *properties)
{
    assert(count <= PROP_IID_CNT);
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__DevPeriodicTimer__Properties *props = NULL;
    uint8_t *buf = NULL;
    ArrayNode **periodictimer = NULL;
    props = malloc(sizeof(Iot__Service__DevPeriodicTimer__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__dev_periodic_timer__properties__init(props);
    if (properties->n_periodictimer) {
        periodictimer = calloc(properties->n_periodictimer, sizeof(ArrayNode *));
        if (NULL == periodictimer) {
            ret = ENOMEM;
            goto out;
        }
        for (int i = 0; i < properties->n_periodictimer; i++) {
            periodictimer[i] = malloc(sizeof(ArrayNode));
            if (NULL == periodictimer[i]) {
                ret = ENOMEM;
                goto out;
            }
            array_node__init(periodictimer[i]);
            periodictimer[i]->id = properties->periodictimer[i]->id;
            periodictimer[i]->data.data = properties->periodictimer[i]->data.data;
            periodictimer[i]->data.len = properties->periodictimer[i]->data.len;
        }
    }
    props->n_periodictimer = properties->n_periodictimer;
    props->periodictimer = periodictimer;

    size_t buf_len;
    buf_len = iot__service__dev_periodic_timer__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__dev_periodic_timer__properties__pack(props, buf);
    }

    struct hey_properties_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(dev_periodic_timer_service, &content);

out:
    free(props);
    free(buf);
    if (periodictimer) {
        for (int i = 0; i < properties->n_periodictimer; i++) {
            free(periodictimer[i]);
        }
        free(periodictimer);
    }
    return ret;
}

/**
 * @brief dev periodic timer service initialization
 * @param properties [dev periodic timer service properties]
 * @return int32_t   [initialize result]
*/
int32_t dev_periodic_timer_service_init(const struct dev_periodic_timer_properties *properties)
{
    int ret = 0;
    Iot__Service__DevPeriodicTimer__Properties *props = NULL;
    ArrayNode **periodictimer = NULL;
    props = malloc(sizeof(Iot__Service__DevPeriodicTimer__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__dev_periodic_timer__properties__init(props);
    if (NULL != properties) {
        if (properties->n_periodictimer) {
            periodictimer = calloc(properties->n_periodictimer, sizeof(ArrayNode *));
            if (NULL == periodictimer) {
                ret = ENOMEM;
                goto out;
            }
            for (int i = 0; i < properties->n_periodictimer; i++) {
                periodictimer[i] = malloc(sizeof(ArrayNode));
                if (NULL == periodictimer[i]) {
                    ret = ENOMEM;
                    goto out;
                }
                array_node__init(periodictimer[i]);
                periodictimer[i]->id = properties->periodictimer[i]->id;
                periodictimer[i]->data.data = properties->periodictimer[i]->data.data;
                periodictimer[i]->data.len = properties->periodictimer[i]->data.len;
            }
        }
        props->n_periodictimer = properties->n_periodictimer;
        props->periodictimer = periodictimer;
    }

    ret = dev_periodic_timer_service_register(props);

out:
    free(props);
    if (periodictimer) {
        for (int i = 0; i < properties->n_periodictimer; i++) {
            free(periodictimer[i]);
        }
        free(periodictimer);
    }
    return ret;
}