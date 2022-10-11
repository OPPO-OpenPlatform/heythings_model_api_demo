/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: car.proto */

#include <errno.h>
#include <assert.h>
#include "car.pb-c.h"
#include "car_service.h"
#include "hey/schema.h"

#define CAR_SERVICE 
#define PROP_IID_CNT 6
#define ACT_IID_CNT 4

static const struct hey_schema_property car_properties_iids[] = {
    [0] = { .iid = 1, .type = HEY_PROPERTY_TYPE_GENERIC },
    [1] = { .iid = 2, .type = HEY_PROPERTY_TYPE_GENERIC },
    [2] = { .iid = 3, .type = HEY_PROPERTY_TYPE_GENERIC },
    [3] = { .iid = 4, .type = HEY_PROPERTY_TYPE_GENERIC },
    [4] = { .iid = 5, .type = HEY_PROPERTY_TYPE_GENERIC },
    [5] = { .iid = 8, .type = HEY_PROPERTY_TYPE_GENERIC },
};
static struct hey_service *car_service;

static int32_t action_lock_car_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__Car__ActionInLockCar *lock_car = iot__service__car__action_in_lock_car__unpack(NULL, len, value);
    if (NULL == lock_car) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct car_lock_car_in action = { 0 };
    ret = car_lock_car_start_cb(ctx, &action, user_context);

    iot__service__car__action_in_lock_car__free_unpacked(lock_car, NULL);
    return ret;
}

static void action_lock_car_stop_cb(void *cb_data, void *user_context)
{
    car_lock_car_stop_cb(user_context);
}

/**
 * @brief lock car action send message of car service
 * @param ctx      [action context]
 * @param action   [lock car action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t car_lock_car_send(struct hey_action_ctx *ctx, struct car_lock_car_out *action)
{
    return hey_action_msg_send(ctx, 0, NULL);
}

/**
 * @brief lock car action stop of car service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t car_lock_car_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t action_find_car_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__Car__ActionInFindCar *find_car = iot__service__car__action_in_find_car__unpack(NULL, len, value);
    if (NULL == find_car) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct car_find_car_in action = { 0 };
    ret = car_find_car_start_cb(ctx, &action, user_context);

    iot__service__car__action_in_find_car__free_unpacked(find_car, NULL);
    return ret;
}

static void action_find_car_stop_cb(void *cb_data, void *user_context)
{
    car_find_car_stop_cb(user_context);
}

/**
 * @brief find car action send message of car service
 * @param ctx      [action context]
 * @param action   [find car action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t car_find_car_send(struct hey_action_ctx *ctx, struct car_find_car_out *action)
{
    return hey_action_msg_send(ctx, 0, NULL);
}

/**
 * @brief find car action stop of car service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t car_find_car_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t action_honk_car_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__Car__ActionInHonkCar *honk_car = iot__service__car__action_in_honk_car__unpack(NULL, len, value);
    if (NULL == honk_car) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct car_honk_car_in action = { 0 };
    ret = car_honk_car_start_cb(ctx, &action, user_context);

    iot__service__car__action_in_honk_car__free_unpacked(honk_car, NULL);
    return ret;
}

static void action_honk_car_stop_cb(void *cb_data, void *user_context)
{
    car_honk_car_stop_cb(user_context);
}

/**
 * @brief honk car action send message of car service
 * @param ctx      [action context]
 * @param action   [honk car action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t car_honk_car_send(struct hey_action_ctx *ctx, struct car_honk_car_out *action)
{
    return hey_action_msg_send(ctx, 0, NULL);
}

/**
 * @brief honk car action stop of car service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t car_honk_car_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t action_flash_car_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__Car__ActionInFlashCar *flash_car = iot__service__car__action_in_flash_car__unpack(NULL, len, value);
    if (NULL == flash_car) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct car_flash_car_in action = { 0 };
    ret = car_flash_car_start_cb(ctx, &action, user_context);

    iot__service__car__action_in_flash_car__free_unpacked(flash_car, NULL);
    return ret;
}

static void action_flash_car_stop_cb(void *cb_data, void *user_context)
{
    car_flash_car_stop_cb(user_context);
}

/**
 * @brief flash car action send message of car service
 * @param ctx      [action context]
 * @param action   [flash car action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t car_flash_car_send(struct hey_action_ctx *ctx, struct car_flash_car_out *action)
{
    return hey_action_msg_send(ctx, 0, NULL);
}

/**
 * @brief flash car action stop of car service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t car_flash_car_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t service_car_properties_write_cb(void *cb_data, size_t n_iid, uint32_t *iids,
                                               size_t len, uint8_t *value)
{
    Iot__Service__Car__Properties *props = iot__service__car__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    int32_t ret = 0;
    struct car_properties properties = { 0 };
    properties.remainingrange = props->remainingrange;
    properties.oilremainingrange = props->oilremainingrange;
    properties.elecremainingrange = props->elecremainingrange;
    properties.windowonoff = props->windowonoff;
    properties.lockstatus = props->lockstatus;
    properties.skylightonoff = props->skylightonoff;
    ret = car_properties_write_cb(n_iid, iids, &properties);

    iot__service__car__properties__free_unpacked(props, NULL);
    return ret;
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_car_properties_write_cb
};

static const struct hey_action_ctx_callbacks lock_car_cbs = {
    .start = action_lock_car_start_cb,
    .stop = action_lock_car_stop_cb
};

static const struct hey_action_ctx_callbacks find_car_cbs = {
    .start = action_find_car_start_cb,
    .stop = action_find_car_stop_cb
};

static const struct hey_action_ctx_callbacks honk_car_cbs = {
    .start = action_honk_car_start_cb,
    .stop = action_honk_car_stop_cb
};

static const struct hey_action_ctx_callbacks flash_car_cbs = {
    .start = action_flash_car_start_cb,
    .stop = action_flash_car_stop_cb
};

static const struct hey_action_entry actions_iids[] = {
    [0] = { .iid = CAR_ACTION_LOCK_CAR, .type = HEY_ACTION_ONCE, .cbs = &lock_car_cbs },
    [1] = { .iid = CAR_ACTION_FIND_CAR, .type = HEY_ACTION_ONCE, .cbs = &find_car_cbs },
    [2] = { .iid = CAR_ACTION_HONK_CAR, .type = HEY_ACTION_ONCE, .cbs = &honk_car_cbs },
    [3] = { .iid = CAR_ACTION_FLASH_CAR, .type = HEY_ACTION_ONCE, .cbs = &flash_car_cbs },
};

static int car_service_register(Iot__Service__Car__Properties *props)
{
    uint8_t *buf;
    size_t buf_len;
    buf_len = iot__service__car__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__car__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (struct hey_schema_property *)car_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    schema_srv.actions.iids = (struct hey_action_entry *)actions_iids;
    schema_srv.actions.n_iid = ACT_IID_CNT;
    car_service = hey_service_register(CAR_SERVICE, &schema_srv, NULL);
    if (NULL == car_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of car service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t car_properties_update(size_t count, uint32_t *enumerate, struct car_properties *properties)
{
    assert(count <= PROP_IID_CNT);
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__Car__Properties *props = NULL;
    uint8_t *buf = NULL;
    props = malloc(sizeof(Iot__Service__Car__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__car__properties__init(props);
    props->remainingrange = properties->remainingrange;
    props->oilremainingrange = properties->oilremainingrange;
    props->elecremainingrange = properties->elecremainingrange;
    props->windowonoff = properties->windowonoff;
    props->lockstatus = properties->lockstatus;
    props->skylightonoff = properties->skylightonoff;

    size_t buf_len;
    buf_len = iot__service__car__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__car__properties__pack(props, buf);
    }

    struct hey_properties_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(car_service, &content);

out:
    free(props);
    free(buf);
    return ret;
}

/**
 * @brief car service initialization
 * @param properties [car service properties]
 * @return int32_t   [initialize result]
*/
int32_t car_service_init(const struct car_properties *properties)
{
    int ret = 0;
    Iot__Service__Car__Properties *props = NULL;
    props = malloc(sizeof(Iot__Service__Car__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__car__properties__init(props);
    if (NULL != properties) {
        props->remainingrange = properties->remainingrange;
        props->oilremainingrange = properties->oilremainingrange;
        props->elecremainingrange = properties->elecremainingrange;
        props->windowonoff = properties->windowonoff;
        props->lockstatus = properties->lockstatus;
        props->skylightonoff = properties->skylightonoff;
    }

    ret = car_service_register(props);

out:
    free(props);
    return ret;
}