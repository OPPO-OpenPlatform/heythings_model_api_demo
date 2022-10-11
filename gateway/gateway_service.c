/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: gateway.proto */

#include <errno.h>
#include <assert.h>
#include "gateway.pb-c.h"
#include "gateway_service.h"
#include "hey/schema.h"

#define GATEWAY_SERVICE (77 * 256)
#define PROP_IID_CNT 1
#define ACT_IID_CNT 3
#define EV_IID_CNT 1

static const struct hey_schema_property gateway_properties_iids[] = {
    [0] = { .iid = 3, .type = HEY_PROPERTY_TYPE_ARRAY },
};
static const uint32_t gateway_event_iids[] = { 4 };
static struct hey_service *gateway_service;

static int32_t action_scan_sub_device_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__Gateway__ActionInScanSubDevice *scan_sub_device = iot__service__gateway__action_in_scan_sub_device__unpack(NULL, len, value);
    if (NULL == scan_sub_device) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct gateway_scan_sub_device_in action = { 0 };
    action.pid = scan_sub_device->pid;
    action.devid = scan_sub_device->devid;
    action.scantime = scan_sub_device->scantime;
    ret = gateway_scan_sub_device_start_cb(ctx, &action, user_context);

    iot__service__gateway__action_in_scan_sub_device__free_unpacked(scan_sub_device, NULL);
    return ret;
}

static void action_scan_sub_device_stop_cb(void *cb_data, void *user_context)
{
    gateway_scan_sub_device_stop_cb(user_context);
}

/**
 * @brief scan sub device action send message of gateway service
 * @param ctx      [action context]
 * @param action   [scan sub device action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t gateway_scan_sub_device_send(struct hey_action_ctx *ctx, struct gateway_scan_sub_device_out *action)
{
    int32_t ret = 0;
    Iot__Service__Gateway__ActionOutScanSubDevice *out = NULL;
    uint8_t *buf = NULL;
    out = malloc(sizeof(Iot__Service__Gateway__ActionOutScanSubDevice));
    if (NULL == out) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__gateway__action_out_scan_sub_device__init(out);
    if (action->n_subdevice) {
        out->n_subdevice  = action->n_subdevice;
        out->subdevice = calloc(out->n_subdevice, sizeof(Iot__Service__Gateway__ActionOutScanSubDevice__SubDevice *));
        if (NULL == out->subdevice) {
            ret = ENOMEM;
            goto out;
        }
        for (int i = 0; i < out->n_subdevice; i++) {
            out->subdevice[i] = malloc(sizeof(Iot__Service__Gateway__ActionOutScanSubDevice__SubDevice));
            if (NULL == out->subdevice[i]) {
                ret = ENOMEM;
                goto out;
            }
            iot__service__gateway__action_out_scan_sub_device__sub_device__init(out->subdevice[i]);
            out->subdevice[i]->pid = action->subdevice[i]->pid;
            out->subdevice[i]->devid = action->subdevice[i]->devid;
            out->subdevice[i]->rssi = action->subdevice[i]->rssi;
        }
    }
    size_t buf_len = iot__service__gateway__action_out_scan_sub_device__get_packed_size(out);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
    }
    iot__service__gateway__action_out_scan_sub_device__pack(out, buf);
    ret = hey_action_msg_send(ctx, buf_len, buf);

out:
    if (out && out->subdevice) {
        for (int i = 0; i < out->n_subdevice; i++) {
            if (out->subdevice[i] == NULL)
                break;
            free(out->subdevice[i]);
        }
        free(out->subdevice);
    }
    free(out);
    free(buf);
    return ret;
}

/**
 * @brief scan sub device action stop of gateway service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t gateway_scan_sub_device_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t action_setup_sub_device_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__Gateway__ActionInSetupSubDevice *setup_sub_device = iot__service__gateway__action_in_setup_sub_device__unpack(NULL, len, value);
    if (NULL == setup_sub_device) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct gateway_setup_sub_device_in action = { 0 };
    action.bindkey.data = setup_sub_device->bindkey.data;
    action.bindkey.len = setup_sub_device->bindkey.len;
    action.pid = setup_sub_device->pid;
    action.devid = setup_sub_device->devid;
    action.pin.data = setup_sub_device->pin.data;
    action.pin.len = setup_sub_device->pin.len;
    action.ecdhpubkey.data = setup_sub_device->ecdhpubkey.data;
    action.ecdhpubkey.len = setup_sub_device->ecdhpubkey.len;
    ret = gateway_setup_sub_device_start_cb(ctx, &action, user_context);

    iot__service__gateway__action_in_setup_sub_device__free_unpacked(setup_sub_device, NULL);
    return ret;
}

static void action_setup_sub_device_stop_cb(void *cb_data, void *user_context)
{
    gateway_setup_sub_device_stop_cb(user_context);
}

/**
 * @brief setup sub device action send message of gateway service
 * @param ctx      [action context]
 * @param action   [setup sub device action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t gateway_setup_sub_device_send(struct hey_action_ctx *ctx, struct gateway_setup_sub_device_out *action)
{
    int32_t ret = 0;
    Iot__Service__Gateway__ActionOutSetupSubDevice *out = NULL;
    uint8_t *buf = NULL;
    out = malloc(sizeof(Iot__Service__Gateway__ActionOutSetupSubDevice));
    if (NULL == out) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__gateway__action_out_setup_sub_device__init(out);
    out->resp_case = action->resp_case;
    switch (out->resp_case) {
    case GATEWAY_SETUP_SUB_DEVICE_RESP_OUT_NOT_SET:
        break;
    case GATEWAY_SETUP_SUB_DEVICE_RESP_OUT_PROGRESS:
        out->progress = action->progress;
        break;
    case GATEWAY_SETUP_SUB_DEVICE_RESP_OUT_RESULT:
        out->result = action->result;
        break;
    default:
        break;
    }
    size_t buf_len = iot__service__gateway__action_out_setup_sub_device__get_packed_size(out);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
    }
    iot__service__gateway__action_out_setup_sub_device__pack(out, buf);
    ret = hey_action_msg_send(ctx, buf_len, buf);

out:
    free(out);
    free(buf);
    return ret;
}

/**
 * @brief setup sub device action stop of gateway service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t gateway_setup_sub_device_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static int32_t action_setup_device_start_cb(void *cb_data, struct hey_action_ctx *ctx, size_t len, uint8_t *value, void **user_context)
{
    int32_t ret = -1;
    Iot__Service__Gateway__ActionInSetupDevice *setup_device = iot__service__gateway__action_in_setup_device__unpack(NULL, len, value);
    if (NULL == setup_device) {
        hey_action_stop(ctx);
        return EINVAL;
    }

    struct gateway_setup_device_in action = { 0 };
    action.bindkey.data = setup_device->bindkey.data;
    action.bindkey.len = setup_device->bindkey.len;
    action.pid = setup_device->pid;
    action.devid = setup_device->devid;
    action.pin.data = setup_device->pin.data;
    action.pin.len = setup_device->pin.len;
    action.ecdhpubkey.data = setup_device->ecdhpubkey.data;
    action.ecdhpubkey.len = setup_device->ecdhpubkey.len;
    action.type = setup_device->type;
    ret = gateway_setup_device_start_cb(ctx, &action, user_context);

    iot__service__gateway__action_in_setup_device__free_unpacked(setup_device, NULL);
    return ret;
}

static void action_setup_device_stop_cb(void *cb_data, void *user_context)
{
    gateway_setup_device_stop_cb(user_context);
}

/**
 * @brief setup device action send message of gateway service
 * @param ctx      [action context]
 * @param action   [setup device action out]
 * @return int32_t [action send result, 0 means success]
 */
int32_t gateway_setup_device_send(struct hey_action_ctx *ctx, struct gateway_setup_device_out *action)
{
    int32_t ret = 0;
    Iot__Service__Gateway__ActionOutSetupDevice *out = NULL;
    uint8_t *buf = NULL;
    out = malloc(sizeof(Iot__Service__Gateway__ActionOutSetupDevice));
    if (NULL == out) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__gateway__action_out_setup_device__init(out);
    out->detail_case = action->detail_case;
    switch (out->detail_case) {
    case GATEWAY_SETUP_DEVICE_DETAIL_OUT_NOT_SET:
        break;
    case GATEWAY_SETUP_DEVICE_DETAIL_OUT_STATUS:
        out->status = action->status;
        break;
    case GATEWAY_SETUP_DEVICE_DETAIL_OUT_RESULT:
        out->result = action->result;
        break;
    case GATEWAY_SETUP_DEVICE_DETAIL_OUT_SERVERREJECTEDCODE:
        out->serverrejectedcode = action->serverrejectedcode;
        break;
    default:
        break;
    }
    size_t buf_len = iot__service__gateway__action_out_setup_device__get_packed_size(out);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
    }
    iot__service__gateway__action_out_setup_device__pack(out, buf);
    ret = hey_action_msg_send(ctx, buf_len, buf);

out:
    free(out);
    free(buf);
    return ret;
}

/**
 * @brief setup device action stop of gateway service
 * @param ctx      [action context]
 * @return int32_t [action stop result, 0 means success]
 */
int32_t gateway_setup_device_stop(struct hey_action_ctx *ctx)
{
    return hey_action_stop(ctx);
}

static Iot__Service__Gateway__NeighborTable *_gateway_neighbor_table = NULL;
struct gateway_neighbor_table *gateway_neighbor_table_unpack(const uint8_t *data, size_t len)
{
    _gateway_neighbor_table = iot__service__gateway__neighbor_table__unpack(NULL, len, data);
    if (NULL == _gateway_neighbor_table) {
        return NULL;
    }
    struct gateway_neighbor_table *hey_struct = malloc(sizeof(struct gateway_neighbor_table));
    if (NULL == hey_struct) {
        goto out1;
    }
    hey_struct->devaddress = _gateway_neighbor_table->devaddress;
    return hey_struct;
out1:
    iot__service__gateway__neighbor_table__free_unpacked(_gateway_neighbor_table, NULL);
    return NULL;
}

void gateway_neighbor_table_free_unpacked(struct gateway_neighbor_table *data)
{
    assert(NULL != data);
    iot__service__gateway__neighbor_table__free_unpacked(_gateway_neighbor_table, NULL);
    free(data);
}

int32_t gateway_neighbor_table_get_packed_size(const struct gateway_neighbor_table *data)
{
    assert(data);
    int ret = 0;
    Iot__Service__Gateway__NeighborTable *pb_struct = malloc(sizeof(Iot__Service__Gateway__NeighborTable));
    if (pb_struct == NULL) {
        return -1;
    }
    iot__service__gateway__neighbor_table__init(pb_struct);
    pb_struct->devaddress = data->devaddress;
    ret = iot__service__gateway__neighbor_table__get_packed_size(pb_struct);
    free(pb_struct);
    return ret;
}

int32_t gateway_neighbor_table_pack(const struct gateway_neighbor_table *data, uint8_t *out)
{
    assert(data);
    int ret = 0;
    Iot__Service__Gateway__NeighborTable *pb_struct = malloc(sizeof(Iot__Service__Gateway__NeighborTable));
    if (pb_struct == NULL) {
        return -1;
    }
    iot__service__gateway__neighbor_table__init(pb_struct);
    pb_struct->devaddress = data->devaddress;
    ret = iot__service__gateway__neighbor_table__pack(pb_struct, out);
    free(pb_struct);
    return ret;
}

static int32_t service_gateway_properties_write_cb(void *cb_data, size_t n_iid, uint32_t *iids,
                                                   size_t len, uint8_t *value)
{
    Iot__Service__Gateway__Properties *props = iot__service__gateway__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    int32_t ret = 0;
    struct gateway_properties properties = { 0 };
    struct hey_array_node **neighbortable = NULL;
    if (props->n_neighbortable) {
        neighbortable = calloc(props->n_neighbortable, sizeof(struct hey_array_node *));
        if (neighbortable == NULL) {
            ret = ENOMEM;
            goto out;
        }
        for (int i = 0; i < props->n_neighbortable; i++) {
            neighbortable[i] = malloc(sizeof(struct hey_array_node));
            if (neighbortable[i] == NULL) {
                ret = ENOMEM;
                goto out;
            }
            neighbortable[i]->id = props->neighbortable[i]->id;
            neighbortable[i]->data.data = props->neighbortable[i]->data.data;
            neighbortable[i]->data.len = props->neighbortable[i]->data.len;
        }
        properties.n_neighbortable = props->n_neighbortable;
        properties.neighbortable = neighbortable;
    }
    ret = gateway_properties_write_cb(n_iid, iids, &properties);

out:
    if (neighbortable) {
        for (int i = 0; i < props->n_neighbortable; i++) {
            free(neighbortable[i]);
        }
        free(neighbortable);
    }
    iot__service__gateway__properties__free_unpacked(props, NULL);
    return ret;
}

static int32_t service_gateway_properties_array_add_cb(void *cb_data, uint32_t iid, size_t len, uint8_t *value)
{
    switch(iid) {
    case GATEWAY_PROPERTY_NEIGHBORTABLE:
        return gateway_neighbortable_array_add_cb(len, value);
    default:
        return -1;
    }
}

static int32_t service_gateway_properties_array_del_cb(void *cb_data, uint32_t iid, size_t n_id, uint32_t *ids)
{
    switch(iid) {
    case GATEWAY_PROPERTY_NEIGHBORTABLE:
        return gateway_neighbortable_array_del_cb(n_id, ids);
    default:
        return -1;
    }
}

static int32_t service_gateway_properties_array_replace_cb(void *cb_data, uint32_t iid, uint32_t id, size_t len, uint8_t *value)
{
    switch(iid) {
    case GATEWAY_PROPERTY_NEIGHBORTABLE:
        return gateway_neighbortable_array_replace_cb(id, len, value);
    default:
        return -1;
    }
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_gateway_properties_write_cb,
    .array_add = service_gateway_properties_array_add_cb,
    .array_del = service_gateway_properties_array_del_cb,
    .array_replace = service_gateway_properties_array_replace_cb,
};

static const struct hey_action_ctx_callbacks scan_sub_device_cbs = {
    .start = action_scan_sub_device_start_cb,
    .stop = action_scan_sub_device_stop_cb
};

static const struct hey_action_ctx_callbacks setup_sub_device_cbs = {
    .start = action_setup_sub_device_start_cb,
    .stop = action_setup_sub_device_stop_cb
};

static const struct hey_action_ctx_callbacks setup_device_cbs = {
    .start = action_setup_device_start_cb,
    .stop = action_setup_device_stop_cb
};

static const struct hey_action_entry actions_iids[] = {
    [0] = { .iid = GATEWAY_ACTION_SCAN_SUB_DEVICE, .type = HEY_ACTION_IN_ONCE_OUT_STREAM, .cbs = &scan_sub_device_cbs },
    [1] = { .iid = GATEWAY_ACTION_SETUP_SUB_DEVICE, .type = HEY_ACTION_IN_ONCE_OUT_STREAM, .cbs = &setup_sub_device_cbs },
    [2] = { .iid = GATEWAY_ACTION_SETUP_DEVICE, .type = HEY_ACTION_IN_ONCE_OUT_STREAM, .cbs = &setup_device_cbs },
};

static int gateway_service_register(Iot__Service__Gateway__Properties *props)
{
    uint8_t *buf;
    size_t buf_len;
    buf_len = iot__service__gateway__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__gateway__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (struct hey_schema_property *)gateway_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    schema_srv.actions.iids = (struct hey_action_entry *)actions_iids;
    schema_srv.actions.n_iid = ACT_IID_CNT;
    schema_srv.events.iids = (uint32_t *)gateway_event_iids;
    schema_srv.events.n_iid = EV_IID_CNT;
    gateway_service = hey_service_register(GATEWAY_SERVICE, &schema_srv, NULL);
    if (NULL == gateway_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of gateway service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t gateway_properties_update(size_t count, uint32_t *enumerate, struct gateway_properties *properties)
{
    assert(count <= PROP_IID_CNT);
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__Gateway__Properties *props = NULL;
    uint8_t *buf = NULL;
    ArrayNode **neighbortable = NULL;
    props = malloc(sizeof(Iot__Service__Gateway__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__gateway__properties__init(props);
    if (properties->n_neighbortable) {
        neighbortable = calloc(properties->n_neighbortable, sizeof(ArrayNode *));
        if (NULL == neighbortable) {
            ret = ENOMEM;
            goto out;
        }
        for (int i = 0; i < properties->n_neighbortable; i++) {
            neighbortable[i] = malloc(sizeof(ArrayNode));
            if (NULL == neighbortable[i]) {
                ret = ENOMEM;
                goto out;
            }
            array_node__init(neighbortable[i]);
            neighbortable[i]->id = properties->neighbortable[i]->id;
            neighbortable[i]->data.data = properties->neighbortable[i]->data.data;
            neighbortable[i]->data.len = properties->neighbortable[i]->data.len;
        }
    }
    props->n_neighbortable = properties->n_neighbortable;
    props->neighbortable = neighbortable;

    size_t buf_len;
    buf_len = iot__service__gateway__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__gateway__properties__pack(props, buf);
    }

    struct hey_properties_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(gateway_service, &content);

out:
    free(props);
    free(buf);
    if (neighbortable) {
        for (int i = 0; i < properties->n_neighbortable; i++) {
            free(neighbortable[i]);
        }
        free(neighbortable);
    }
    return ret;
}

/**
 * @brief gateway service initialization
 * @param properties [gateway service properties]
 * @return int32_t   [initialize result]
*/
int32_t gateway_service_init(const struct gateway_properties *properties)
{
    int ret = 0;
    Iot__Service__Gateway__Properties *props = NULL;
    ArrayNode **neighbortable = NULL;
    props = malloc(sizeof(Iot__Service__Gateway__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__gateway__properties__init(props);
    if (NULL != properties) {
        if (properties->n_neighbortable) {
            neighbortable = calloc(properties->n_neighbortable, sizeof(ArrayNode *));
            if (NULL == neighbortable) {
                ret = ENOMEM;
                goto out;
            }
            for (int i = 0; i < properties->n_neighbortable; i++) {
                neighbortable[i] = malloc(sizeof(ArrayNode));
                if (NULL == neighbortable[i]) {
                    ret = ENOMEM;
                    goto out;
                }
                array_node__init(neighbortable[i]);
                neighbortable[i]->id = properties->neighbortable[i]->id;
                neighbortable[i]->data.data = properties->neighbortable[i]->data.data;
                neighbortable[i]->data.len = properties->neighbortable[i]->data.len;
            }
        }
        props->n_neighbortable = properties->n_neighbortable;
        props->neighbortable = neighbortable;
    }

    ret = gateway_service_register(props);

out:
    free(props);
    if (neighbortable) {
        for (int i = 0; i < properties->n_neighbortable; i++) {
            free(neighbortable[i]);
        }
        free(neighbortable);
    }
    return ret;
}

/**
 * @brief dev discovered notify of gateway service
 * @param event    [event content]
 * @param attr     [event details]
 * @return int64_t [event uuid, get error code from errno when return negative value]
*/
int64_t gateway_dev_discovered_notify(struct gateway_event_dev_discovered *event, struct hey_event_notify_attr *attr)
{
    int64_t ret = -1;

    Iot__Service__Gateway__EventDevDiscovered *ev = NULL;
    uint8_t *buf = NULL;
    ev = malloc(sizeof(Iot__Service__Gateway__EventDevDiscovered));
    if (NULL == ev) {
        errno = ENOMEM;
        return ret;
    }
    iot__service__gateway__event_dev_discovered__init(ev);
    ev->list = event->list;

    size_t buf_len;
    buf_len = iot__service__gateway__event_dev_discovered__get_packed_size(ev);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            errno = ENOMEM;
            goto out;
        }
        iot__service__gateway__event_dev_discovered__pack(ev, buf);
    }

    struct hey_event_notify_content content = {
        .iid = GATEWAY_EVENT_DEV_DISCOVERED,
        .importance = attr->importance,
        .uuid = attr->uuid,
        .ref_uuid = attr->ref_uuid,
        .timestamp = attr->timestamp,
        .len = buf_len,
        .value = buf,
    };
    ret = hey_event_notify(gateway_service, &content, gateway_dev_discovered_notify_result_cb, attr->ctx);

out:
    free(ev);
    free(buf);
    return ret;
}