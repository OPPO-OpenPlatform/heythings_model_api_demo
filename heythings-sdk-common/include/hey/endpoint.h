/**
 * Copyright (c) 2008-2022, OPPO Mobile Comm Corp., Ltd
 * VENDOR_EDIT
 * @file endpoint.h
 * @brief HeyThings设备间连接操作接口
 * @version 0.1
 * @date 2021-12-24
 * @author JiangXin
 */

#ifndef HEY_ENDPOINT_H
#define HEY_ENDPOINT_H

#include <stdint.h>

struct hey_endpoint;

struct hey_header {
    uint8_t flags;
    uint8_t type;
    uint16_t len;
    uint32_t src; //对于接受到的数据包, 如果原包不包含该字段, sdk需填充该字段, 指示来源. 同时修改flags
    uint32_t dst;
    uint32_t transaction_id;
};

struct hey_msg {
    struct hey_header header;
    uint16_t payload_len;
    uint8_t *payload;
};

/**
 * @brief 用于判断数据来源通道
 */
enum hey_msgrt_transport {
    HEY_MSGRT_UNSAFE = 0x01,
    HEY_MSGRT_CLOUD = 0x02,
    HEY_MSGRT_HAN = 0x04,
    HEY_MSGRT_ALL = HEY_MSGRT_UNSAFE | HEY_MSGRT_CLOUD | HEY_MSGRT_HAN,
};

struct hey_endpoint_operations {
    enum hey_msgrt_transport mask;
    void (*ep_close)(struct hey_endpoint *ep);
    void (*ep_send)(struct hey_endpoint *ep, struct hey_msg *msg);
};

struct hey_endpoint {
    char *name;
    const struct hey_endpoint_operations *ops;
    uint32_t addr;
    uint32_t mask;
};

int32_t hey_endpoint_init(struct hey_endpoint *ep, struct hey_endpoint_operations *operations, uint32_t addr, uint32_t mask);

int32_t hey_endpoint_register(struct hey_endpoint *ep);

int32_t hey_endpoint_msg_route(struct hey_endpoint *ep, struct hey_msg *msg);

int32_t hey_endpoint_unregister(struct hey_endpoint *ep);

#endif
