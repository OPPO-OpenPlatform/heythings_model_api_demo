/* Generated by the heythings model compiler.  DO NOT EDIT! */
/* Generated from: doubleModeChiller.proto */

#include <errno.h>
#include <assert.h>
#include "doubleModeChiller.pb-c.h"
#include "double_mode_chiller_service.h"
#include "hey/schema.h"

#define DOUBLE_MODE_CHILLER_SERVICE 
#define PROP_IID_CNT 73
#define EV_IID_CNT 1

static const struct hey_schema_property double_mode_chiller_properties_iids[] = {
    [0] = { .iid = 1, .type = HEY_PROPERTY_TYPE_GENERIC },
    [1] = { .iid = 2, .type = HEY_PROPERTY_TYPE_GENERIC },
    [2] = { .iid = 3, .type = HEY_PROPERTY_TYPE_GENERIC },
    [3] = { .iid = 4, .type = HEY_PROPERTY_TYPE_GENERIC },
    [4] = { .iid = 5, .type = HEY_PROPERTY_TYPE_GENERIC },
    [5] = { .iid = 6, .type = HEY_PROPERTY_TYPE_GENERIC },
    [6] = { .iid = 7, .type = HEY_PROPERTY_TYPE_GENERIC },
    [7] = { .iid = 8, .type = HEY_PROPERTY_TYPE_GENERIC },
    [8] = { .iid = 9, .type = HEY_PROPERTY_TYPE_GENERIC },
    [9] = { .iid = 10, .type = HEY_PROPERTY_TYPE_GENERIC },
    [10] = { .iid = 11, .type = HEY_PROPERTY_TYPE_GENERIC },
    [11] = { .iid = 12, .type = HEY_PROPERTY_TYPE_GENERIC },
    [12] = { .iid = 13, .type = HEY_PROPERTY_TYPE_GENERIC },
    [13] = { .iid = 14, .type = HEY_PROPERTY_TYPE_GENERIC },
    [14] = { .iid = 15, .type = HEY_PROPERTY_TYPE_GENERIC },
    [15] = { .iid = 16, .type = HEY_PROPERTY_TYPE_GENERIC },
    [16] = { .iid = 17, .type = HEY_PROPERTY_TYPE_GENERIC },
    [17] = { .iid = 18, .type = HEY_PROPERTY_TYPE_GENERIC },
    [18] = { .iid = 19, .type = HEY_PROPERTY_TYPE_GENERIC },
    [19] = { .iid = 20, .type = HEY_PROPERTY_TYPE_GENERIC },
    [20] = { .iid = 21, .type = HEY_PROPERTY_TYPE_GENERIC },
    [21] = { .iid = 22, .type = HEY_PROPERTY_TYPE_GENERIC },
    [22] = { .iid = 23, .type = HEY_PROPERTY_TYPE_GENERIC },
    [23] = { .iid = 24, .type = HEY_PROPERTY_TYPE_GENERIC },
    [24] = { .iid = 25, .type = HEY_PROPERTY_TYPE_GENERIC },
    [25] = { .iid = 26, .type = HEY_PROPERTY_TYPE_GENERIC },
    [26] = { .iid = 27, .type = HEY_PROPERTY_TYPE_GENERIC },
    [27] = { .iid = 28, .type = HEY_PROPERTY_TYPE_GENERIC },
    [28] = { .iid = 29, .type = HEY_PROPERTY_TYPE_GENERIC },
    [29] = { .iid = 30, .type = HEY_PROPERTY_TYPE_GENERIC },
    [30] = { .iid = 31, .type = HEY_PROPERTY_TYPE_GENERIC },
    [31] = { .iid = 32, .type = HEY_PROPERTY_TYPE_GENERIC },
    [32] = { .iid = 33, .type = HEY_PROPERTY_TYPE_GENERIC },
    [33] = { .iid = 34, .type = HEY_PROPERTY_TYPE_GENERIC },
    [34] = { .iid = 35, .type = HEY_PROPERTY_TYPE_GENERIC },
    [35] = { .iid = 36, .type = HEY_PROPERTY_TYPE_GENERIC },
    [36] = { .iid = 37, .type = HEY_PROPERTY_TYPE_GENERIC },
    [37] = { .iid = 38, .type = HEY_PROPERTY_TYPE_GENERIC },
    [38] = { .iid = 39, .type = HEY_PROPERTY_TYPE_GENERIC },
    [39] = { .iid = 40, .type = HEY_PROPERTY_TYPE_GENERIC },
    [40] = { .iid = 41, .type = HEY_PROPERTY_TYPE_GENERIC },
    [41] = { .iid = 42, .type = HEY_PROPERTY_TYPE_GENERIC },
    [42] = { .iid = 43, .type = HEY_PROPERTY_TYPE_GENERIC },
    [43] = { .iid = 44, .type = HEY_PROPERTY_TYPE_GENERIC },
    [44] = { .iid = 45, .type = HEY_PROPERTY_TYPE_GENERIC },
    [45] = { .iid = 46, .type = HEY_PROPERTY_TYPE_GENERIC },
    [46] = { .iid = 47, .type = HEY_PROPERTY_TYPE_GENERIC },
    [47] = { .iid = 48, .type = HEY_PROPERTY_TYPE_GENERIC },
    [48] = { .iid = 49, .type = HEY_PROPERTY_TYPE_GENERIC },
    [49] = { .iid = 50, .type = HEY_PROPERTY_TYPE_GENERIC },
    [50] = { .iid = 51, .type = HEY_PROPERTY_TYPE_GENERIC },
    [51] = { .iid = 52, .type = HEY_PROPERTY_TYPE_GENERIC },
    [52] = { .iid = 53, .type = HEY_PROPERTY_TYPE_GENERIC },
    [53] = { .iid = 54, .type = HEY_PROPERTY_TYPE_GENERIC },
    [54] = { .iid = 55, .type = HEY_PROPERTY_TYPE_GENERIC },
    [55] = { .iid = 56, .type = HEY_PROPERTY_TYPE_GENERIC },
    [56] = { .iid = 57, .type = HEY_PROPERTY_TYPE_GENERIC },
    [57] = { .iid = 58, .type = HEY_PROPERTY_TYPE_GENERIC },
    [58] = { .iid = 59, .type = HEY_PROPERTY_TYPE_GENERIC },
    [59] = { .iid = 60, .type = HEY_PROPERTY_TYPE_GENERIC },
    [60] = { .iid = 61, .type = HEY_PROPERTY_TYPE_GENERIC },
    [61] = { .iid = 62, .type = HEY_PROPERTY_TYPE_GENERIC },
    [62] = { .iid = 63, .type = HEY_PROPERTY_TYPE_GENERIC },
    [63] = { .iid = 64, .type = HEY_PROPERTY_TYPE_GENERIC },
    [64] = { .iid = 65, .type = HEY_PROPERTY_TYPE_GENERIC },
    [65] = { .iid = 66, .type = HEY_PROPERTY_TYPE_GENERIC },
    [66] = { .iid = 67, .type = HEY_PROPERTY_TYPE_GENERIC },
    [67] = { .iid = 68, .type = HEY_PROPERTY_TYPE_GENERIC },
    [68] = { .iid = 69, .type = HEY_PROPERTY_TYPE_GENERIC },
    [69] = { .iid = 70, .type = HEY_PROPERTY_TYPE_GENERIC },
    [70] = { .iid = 71, .type = HEY_PROPERTY_TYPE_GENERIC },
    [71] = { .iid = 73, .type = HEY_PROPERTY_TYPE_GENERIC },
    [72] = { .iid = 74, .type = HEY_PROPERTY_TYPE_GENERIC },
};
static const uint32_t double_mode_chiller_event_iids[] = { 72 };
static struct hey_service *double_mode_chiller_service;

static int32_t service_double_mode_chiller_properties_write_cb(void *cb_data, size_t n_iid, uint32_t *iids,
                                                               size_t len, uint8_t *value)
{
    Iot__Service__DoubleModeChiller__Properties *props = iot__service__double_mode_chiller__properties__unpack(NULL, len, value);
    if (NULL == props) {
        return EINVAL;
    }

    int32_t ret = 0;
    struct double_mode_chiller_properties properties = { 0 };
    properties.ggopening1 = props->ggopening1;
    properties.ggopening1peer = props->ggopening1peer;
    properties.ggopening2 = props->ggopening2;
    properties.ggopening2peer = props->ggopening2peer;
    properties.motorcoiltemp1 = props->motorcoiltemp1;
    properties.motorcoiltemp1peer = props->motorcoiltemp1peer;
    properties.conapptemp = props->conapptemp;
    properties.conapptemppeer = props->conapptemppeer;
    properties.eatemp = props->eatemp;
    properties.eatemppeer = props->eatemppeer;
    properties.averagecurrent = props->averagecurrent;
    properties.averagecurrentpeer = props->averagecurrentpeer;
    properties.acoilpressure = props->acoilpressure;
    properties.acoilpressurepeer = props->acoilpressurepeer;
    properties.acrunningtime = props->acrunningtime;
    properties.acrunningtimepeer = props->acrunningtimepeer;
    properties.oiltemp = props->oiltemp;
    properties.oiltemppeer = props->oiltemppeer;
    properties.evaapptemp = props->evaapptemp;
    properties.evaapptemppeer = props->evaapptemppeer;
    properties.acstartupnum = props->acstartupnum;
    properties.acstartupnumpeer = props->acstartupnumpeer;
    properties.chwsupplywatertemp = props->chwsupplywatertemp;
    properties.chwreturnwatertemp = props->chwreturnwatertemp;
    properties.consattemp = props->consattemp;
    properties.consattemppeer = props->consattemppeer;
    properties.consatpres = props->consatpres;
    properties.consatprespeer = props->consatprespeer;
    properties.cwsupplywatertemp = props->cwsupplywatertemp;
    properties.cwreturnwatertemp = props->cwreturnwatertemp;
    properties.runningload = props->runningload;
    properties.runningloadpeer = props->runningloadpeer;
    properties.evasattemp = props->evasattemp;
    properties.evasattemppeer = props->evasattemppeer;
    properties.evasatpres = props->evasatpres;
    properties.evasatprespeer = props->evasatprespeer;
    properties.l1current = props->l1current;
    properties.l1currentpeer = props->l1currentpeer;
    properties.l2current = props->l2current;
    properties.l2currentpeer = props->l2currentpeer;
    properties.l3current = props->l3current;
    properties.l3currentpeer = props->l3currentpeer;
    properties.conflowsta = props->conflowsta;
    properties.conflowstapeer = props->conflowstapeer;
    properties.evaflowsta = props->evaflowsta;
    properties.evaflowstapeer = props->evaflowstapeer;
    properties.autoturnontemp = props->autoturnontemp;
    properties.autoturnofftemp = props->autoturnofftemp;
    properties.coolingcapacity = props->coolingcapacity;
    properties.cop = props->cop;
    properties.cwtargetreturntemp = props->cwtargetreturntemp;
    properties.supplywaterrate = props->supplywaterrate;
    properties.runningpower = props->runningpower;
    properties.runningpowerpeer = props->runningpowerpeer;
    properties.mannulautosta = props->mannulautosta;
    properties.chwtargetsupplytemp = props->chwtargetsupplytemp;
    properties.chwtargetsupplytemppeer = props->chwtargetsupplytemppeer;
    properties.abvoltage = props->abvoltage;
    properties.abvoltagepeer = props->abvoltagepeer;
    properties.bcvoltage = props->bcvoltage;
    properties.bcvoltagepeer = props->bcvoltagepeer;
    properties.cavoltage = props->cavoltage;
    properties.cavoltagepeer = props->cavoltagepeer;
    properties.maxrunningload = props->maxrunningload;
    properties.maxrunningloadpeer = props->maxrunningloadpeer;
    properties.oilpumppres = props->oilpumppres;
    properties.oilpumpprespeer = props->oilpumpprespeer;
    properties.oiltankpres = props->oiltankpres;
    properties.oiltankprespeer = props->oiltankprespeer;
    properties.hvibrationvalue = props->hvibrationvalue;
    properties.vvibrationvalue = props->vvibrationvalue;
    properties.power = props->power;
    properties.faultsta = props->faultsta;
    ret = double_mode_chiller_properties_write_cb(n_iid, iids, &properties);

    iot__service__double_mode_chiller__properties__free_unpacked(props, NULL);
    return ret;
}

static const struct hey_properties_callbacks props_cbs = {
    .write = service_double_mode_chiller_properties_write_cb
};

static int double_mode_chiller_service_register(Iot__Service__DoubleModeChiller__Properties *props)
{
    uint8_t *buf;
    size_t buf_len;
    buf_len = iot__service__double_mode_chiller__properties__get_packed_size(props);
    if (buf_len == 0) {
        buf = NULL;
    } else {
        buf = malloc(buf_len);
        if (!buf) {
            return ENOMEM;
        }
        iot__service__double_mode_chiller__properties__pack(props, buf);
    }

    struct hey_schema_service schema_srv;
    hey_schema_service_init(&schema_srv);
    schema_srv.properties.iids = (struct hey_schema_property *)double_mode_chiller_properties_iids;
    schema_srv.properties.n_iid = PROP_IID_CNT;
    schema_srv.properties.value = buf;
    schema_srv.properties.len = buf_len;
    schema_srv.properties.cbs = &props_cbs;
    schema_srv.events.iids = (uint32_t *)double_mode_chiller_event_iids;
    schema_srv.events.n_iid = EV_IID_CNT;
    double_mode_chiller_service = hey_service_register(DOUBLE_MODE_CHILLER_SERVICE, &schema_srv, NULL);
    if (NULL == double_mode_chiller_service) {
        free(buf);
        return errno;
    }

    free(buf);
    return 0;
}

/**
 * @brief update properties of double mode chiller service
 * @param count      [the number of properties to be updated]
 * @param enumerate  [the iid enumeration of properties to be updated]
 * @param properties [properties structure with updated content]
 * @return int32_t   [update result]
 */
int32_t double_mode_chiller_properties_update(size_t count, uint32_t *enumerate, struct double_mode_chiller_properties *properties)
{
    assert(count <= PROP_IID_CNT);
    if (NULL == properties) {
        return EINVAL;
    }

    int ret = 0;
    Iot__Service__DoubleModeChiller__Properties *props = NULL;
    uint8_t *buf = NULL;
    props = malloc(sizeof(Iot__Service__DoubleModeChiller__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__double_mode_chiller__properties__init(props);
    props->ggopening1 = properties->ggopening1;
    props->ggopening1peer = properties->ggopening1peer;
    props->ggopening2 = properties->ggopening2;
    props->ggopening2peer = properties->ggopening2peer;
    props->motorcoiltemp1 = properties->motorcoiltemp1;
    props->motorcoiltemp1peer = properties->motorcoiltemp1peer;
    props->conapptemp = properties->conapptemp;
    props->conapptemppeer = properties->conapptemppeer;
    props->eatemp = properties->eatemp;
    props->eatemppeer = properties->eatemppeer;
    props->averagecurrent = properties->averagecurrent;
    props->averagecurrentpeer = properties->averagecurrentpeer;
    props->acoilpressure = properties->acoilpressure;
    props->acoilpressurepeer = properties->acoilpressurepeer;
    props->acrunningtime = properties->acrunningtime;
    props->acrunningtimepeer = properties->acrunningtimepeer;
    props->oiltemp = properties->oiltemp;
    props->oiltemppeer = properties->oiltemppeer;
    props->evaapptemp = properties->evaapptemp;
    props->evaapptemppeer = properties->evaapptemppeer;
    props->acstartupnum = properties->acstartupnum;
    props->acstartupnumpeer = properties->acstartupnumpeer;
    props->chwsupplywatertemp = properties->chwsupplywatertemp;
    props->chwreturnwatertemp = properties->chwreturnwatertemp;
    props->consattemp = properties->consattemp;
    props->consattemppeer = properties->consattemppeer;
    props->consatpres = properties->consatpres;
    props->consatprespeer = properties->consatprespeer;
    props->cwsupplywatertemp = properties->cwsupplywatertemp;
    props->cwreturnwatertemp = properties->cwreturnwatertemp;
    props->runningload = properties->runningload;
    props->runningloadpeer = properties->runningloadpeer;
    props->evasattemp = properties->evasattemp;
    props->evasattemppeer = properties->evasattemppeer;
    props->evasatpres = properties->evasatpres;
    props->evasatprespeer = properties->evasatprespeer;
    props->l1current = properties->l1current;
    props->l1currentpeer = properties->l1currentpeer;
    props->l2current = properties->l2current;
    props->l2currentpeer = properties->l2currentpeer;
    props->l3current = properties->l3current;
    props->l3currentpeer = properties->l3currentpeer;
    props->conflowsta = properties->conflowsta;
    props->conflowstapeer = properties->conflowstapeer;
    props->evaflowsta = properties->evaflowsta;
    props->evaflowstapeer = properties->evaflowstapeer;
    props->autoturnontemp = properties->autoturnontemp;
    props->autoturnofftemp = properties->autoturnofftemp;
    props->coolingcapacity = properties->coolingcapacity;
    props->cop = properties->cop;
    props->cwtargetreturntemp = properties->cwtargetreturntemp;
    props->supplywaterrate = properties->supplywaterrate;
    props->runningpower = properties->runningpower;
    props->runningpowerpeer = properties->runningpowerpeer;
    props->mannulautosta = properties->mannulautosta;
    props->chwtargetsupplytemp = properties->chwtargetsupplytemp;
    props->chwtargetsupplytemppeer = properties->chwtargetsupplytemppeer;
    props->abvoltage = properties->abvoltage;
    props->abvoltagepeer = properties->abvoltagepeer;
    props->bcvoltage = properties->bcvoltage;
    props->bcvoltagepeer = properties->bcvoltagepeer;
    props->cavoltage = properties->cavoltage;
    props->cavoltagepeer = properties->cavoltagepeer;
    props->maxrunningload = properties->maxrunningload;
    props->maxrunningloadpeer = properties->maxrunningloadpeer;
    props->oilpumppres = properties->oilpumppres;
    props->oilpumpprespeer = properties->oilpumpprespeer;
    props->oiltankpres = properties->oiltankpres;
    props->oiltankprespeer = properties->oiltankprespeer;
    props->hvibrationvalue = properties->hvibrationvalue;
    props->vvibrationvalue = properties->vvibrationvalue;
    props->power = properties->power;
    props->faultsta = properties->faultsta;

    size_t buf_len;
    buf_len = iot__service__double_mode_chiller__properties__get_packed_size(props);
    if (buf_len > 0) {
        buf = malloc(buf_len);
        if (NULL == buf) {
            ret = ENOMEM;
            goto out;
        }
        iot__service__double_mode_chiller__properties__pack(props, buf);
    }

    struct hey_properties_content content = {
        .n_iid = count,
        .iids = enumerate,
        .len = buf_len,
        .value = buf
    };
    ret = hey_properties_update(double_mode_chiller_service, &content);

out:
    free(props);
    free(buf);
    return ret;
}

/**
 * @brief double mode chiller service initialization
 * @param properties [double mode chiller service properties]
 * @return int32_t   [initialize result]
*/
int32_t double_mode_chiller_service_init(const struct double_mode_chiller_properties *properties)
{
    int ret = 0;
    Iot__Service__DoubleModeChiller__Properties *props = NULL;
    props = malloc(sizeof(Iot__Service__DoubleModeChiller__Properties));
    if (NULL == props) {
        ret = ENOMEM;
        goto out;
    }
    iot__service__double_mode_chiller__properties__init(props);
    if (NULL != properties) {
        props->ggopening1 = properties->ggopening1;
        props->ggopening1peer = properties->ggopening1peer;
        props->ggopening2 = properties->ggopening2;
        props->ggopening2peer = properties->ggopening2peer;
        props->motorcoiltemp1 = properties->motorcoiltemp1;
        props->motorcoiltemp1peer = properties->motorcoiltemp1peer;
        props->conapptemp = properties->conapptemp;
        props->conapptemppeer = properties->conapptemppeer;
        props->eatemp = properties->eatemp;
        props->eatemppeer = properties->eatemppeer;
        props->averagecurrent = properties->averagecurrent;
        props->averagecurrentpeer = properties->averagecurrentpeer;
        props->acoilpressure = properties->acoilpressure;
        props->acoilpressurepeer = properties->acoilpressurepeer;
        props->acrunningtime = properties->acrunningtime;
        props->acrunningtimepeer = properties->acrunningtimepeer;
        props->oiltemp = properties->oiltemp;
        props->oiltemppeer = properties->oiltemppeer;
        props->evaapptemp = properties->evaapptemp;
        props->evaapptemppeer = properties->evaapptemppeer;
        props->acstartupnum = properties->acstartupnum;
        props->acstartupnumpeer = properties->acstartupnumpeer;
        props->chwsupplywatertemp = properties->chwsupplywatertemp;
        props->chwreturnwatertemp = properties->chwreturnwatertemp;
        props->consattemp = properties->consattemp;
        props->consattemppeer = properties->consattemppeer;
        props->consatpres = properties->consatpres;
        props->consatprespeer = properties->consatprespeer;
        props->cwsupplywatertemp = properties->cwsupplywatertemp;
        props->cwreturnwatertemp = properties->cwreturnwatertemp;
        props->runningload = properties->runningload;
        props->runningloadpeer = properties->runningloadpeer;
        props->evasattemp = properties->evasattemp;
        props->evasattemppeer = properties->evasattemppeer;
        props->evasatpres = properties->evasatpres;
        props->evasatprespeer = properties->evasatprespeer;
        props->l1current = properties->l1current;
        props->l1currentpeer = properties->l1currentpeer;
        props->l2current = properties->l2current;
        props->l2currentpeer = properties->l2currentpeer;
        props->l3current = properties->l3current;
        props->l3currentpeer = properties->l3currentpeer;
        props->conflowsta = properties->conflowsta;
        props->conflowstapeer = properties->conflowstapeer;
        props->evaflowsta = properties->evaflowsta;
        props->evaflowstapeer = properties->evaflowstapeer;
        props->autoturnontemp = properties->autoturnontemp;
        props->autoturnofftemp = properties->autoturnofftemp;
        props->coolingcapacity = properties->coolingcapacity;
        props->cop = properties->cop;
        props->cwtargetreturntemp = properties->cwtargetreturntemp;
        props->supplywaterrate = properties->supplywaterrate;
        props->runningpower = properties->runningpower;
        props->runningpowerpeer = properties->runningpowerpeer;
        props->mannulautosta = properties->mannulautosta;
        props->chwtargetsupplytemp = properties->chwtargetsupplytemp;
        props->chwtargetsupplytemppeer = properties->chwtargetsupplytemppeer;
        props->abvoltage = properties->abvoltage;
        props->abvoltagepeer = properties->abvoltagepeer;
        props->bcvoltage = properties->bcvoltage;
        props->bcvoltagepeer = properties->bcvoltagepeer;
        props->cavoltage = properties->cavoltage;
        props->cavoltagepeer = properties->cavoltagepeer;
        props->maxrunningload = properties->maxrunningload;
        props->maxrunningloadpeer = properties->maxrunningloadpeer;
        props->oilpumppres = properties->oilpumppres;
        props->oilpumpprespeer = properties->oilpumpprespeer;
        props->oiltankpres = properties->oiltankpres;
        props->oiltankprespeer = properties->oiltankprespeer;
        props->hvibrationvalue = properties->hvibrationvalue;
        props->vvibrationvalue = properties->vvibrationvalue;
        props->power = properties->power;
        props->faultsta = properties->faultsta;
    }

    ret = double_mode_chiller_service_register(props);

out:
    free(props);
    return ret;
}

/**
 * @brief invalid alarm notify of double mode chiller service
 * @param event    [event content]
 * @param attr     [event details]
 * @return int64_t [event uuid, get error code from errno when return negative value]
*/
int64_t double_mode_chiller_invalid_alarm_notify(struct double_mode_chiller_event_invalid_alarm *event, struct hey_event_notify_attr *attr)
{
    int64_t ret = -1;

    struct hey_event_notify_content content = {
        .iid = DOUBLE_MODE_CHILLER_EVENT_INVALID_ALARM,
        .importance = attr->importance,
        .uuid = attr->uuid,
        .ref_uuid = attr->ref_uuid,
        .timestamp = attr->timestamp,
        .len = 0,
        .value = NULL,
    };
    ret = hey_event_notify(double_mode_chiller_service, &content, double_mode_chiller_invalid_alarm_notify_result_cb, attr->ctx);

    return ret;
}
