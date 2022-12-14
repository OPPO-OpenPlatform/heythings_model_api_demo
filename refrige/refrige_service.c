/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: refrige.proto */

#include <errno.h>
#include <assert.h>
#include "refrige.pb-c.h"
#include "refrige_service.h"
#include "hey/schema.h"

#define REFRIGE_SERVICE (58 * 256)
#define PROP_IID_CNT 5
#define EV_IID_CNT 1

static const struct hey_schema_property refrige_properties_iids[] = {
    [0] = { .iid = 1, .type = HEY_PROPERTY_TYPE_GENERIC },
    [1] = { .iid = 2, .type = HEY_PROPERTY_TYPE_GENERIC },
    [2] = { .iid = 3, .type = HEY_PROPERTY_TYPE_GENERIC },
    [3] = { .iid = 4, .type = HEY_PROPERTY_TYPE_GENERIC },
    [4] = { .iid = 6, .type = HEY_PROPERTY_TYPE_GENERIC },
};
static const uint32_t refrige_event_iids[] = { 5 };
static struct hey_service *refrige_service;

static int32_t service_refrige_properties_write_cb(void *cb_data, size_t n_iid, uint32_t *iids,
                                                   size_t len, uint8_t *value)
{
    Iot__Service__Refrige__Properties *props = iot__service__refrige__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    int32_t ret = 0;
    struct refrige_properties properties = { 0 };
    properties.power = props->power;
    properties.vacationmodeenabled = props->vacationmodeenabled;
    properties.smartmode = props->smartmode;
    properties.eco = props->eco;
    properties.offpeakpowerconsumption = props->offpeakpowerconsumption;
    ret = refrige_properties_write_cb(n_iid, iids, &properties);

    iot__service__refrige__properties__free_unpacked(props, NULL);
    return ret;
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_refrige_properties_write_cb
};

static int refrige_service_register(Iot__Service__Refrige__Properties *props)
{
    uint8_t *buf;
    size_t buf_len;
    buf_len = iot__service__refrige__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__refrige__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (struct hey_schema_property *)refrige_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    schema_srv.events.iids = (uint32_t *)refrige_event_iids;
    schema_srv.events.n_iid = EV_IID_CNT;
    refrige_service = hey_service_register(REFRIGE_SERVICE, &schema_srv, NULL);
    if (NULL == refrige_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of refrige service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t refrige_properties_update(size_t count, uint32_t *enumerate, struct refrige_properties *properties)
{
    assert(count <= PROP_IID_CNT);
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__Refrige__Properties *props = NULL;
    uint8_t *buf = NULL;
    props = malloc(sizeof(Iot__Service__Refrige__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__refrige__properties__init(props);
    props->power = properties->power;
    props->vacationmodeenabled = properties->vacationmodeenabled;
    props->smartmode = properties->smartmode;
    props->eco = properties->eco;
    props->offpeakpowerconsumption = properties->offpeakpowerconsumption;

    size_t buf_len;
    buf_len = iot__service__refrige__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__refrige__properties__pack(props, buf);
    }

    struct hey_properties_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(refrige_service, &content);

out:
    free(props);
    free(buf);
    return ret;
}

/**
 * @brief refrige service initialization
 * @param properties [refrige service properties]
 * @return int32_t   [initialize result]
*/
int32_t refrige_service_init(const struct refrige_properties *properties)
{
    int ret = 0;
    Iot__Service__Refrige__Properties *props = NULL;
    props = malloc(sizeof(Iot__Service__Refrige__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__refrige__properties__init(props);
    if (NULL != properties) {
        props->power = properties->power;
        props->vacationmodeenabled = properties->vacationmodeenabled;
        props->smartmode = properties->smartmode;
        props->eco = properties->eco;
        props->offpeakpowerconsumption = properties->offpeakpowerconsumption;
    }

    ret = refrige_service_register(props);

out:
    free(props);
    return ret;
}

/**
 * @brief open alarm notify of refrige service
 * @param event    [event content]
 * @param attr     [event details]
 * @return int64_t [event uuid, get error code from errno when return negative value]
*/
int64_t refrige_open_alarm_notify(struct refrige_event_open_alarm *event, struct hey_event_notify_attr *attr)
{
    int64_t ret = -1;

    struct hey_event_notify_content content = {
        .iid = REFRIGE_EVENT_OPEN_ALARM,
        .importance = attr->importance,
        .uuid = attr->uuid,
        .ref_uuid = attr->ref_uuid,
        .timestamp = attr->timestamp,
        .len = 0,
        .value = NULL,
    };
    ret = hey_event_notify(refrige_service, &content, refrige_open_alarm_notify_result_cb, attr->ctx);

    return ret;
}
