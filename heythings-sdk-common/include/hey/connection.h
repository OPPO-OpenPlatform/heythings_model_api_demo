/**
 * Copyright (c) 2008-2022, OPPO Mobile Comm Corp., Ltd
 * VENDOR_EDIT
 * @file connection.h
 * @brief HeyThings设备间连接操作接口
 * @version 0.1
 * @date 2021-09-07
 * @author WatWu
 */

#ifndef HEY_CONNECTION_H
#define HEY_CONNECTION_H

#include <stdint.h>
#include "types.h"

/**
 * @brief HeyThings连接套接字回调函数列表
 */
struct hey_socket_callbacks {
    /**
     * 连接异常，socket应关闭
     * @param cb_data [连接时传入的回调数据]
     */
    void (*error)(void *cb_data);

    /**
     * 连接已建立，可以使用socket了
     * @param cb_data [连接时传入的回调数据]
     */
    void (*writable)(void *cb_data);
};

/**
 * @brief HeyThings设备连接
 * @param domain_addr   [域网络地址]
 * @param cbs           [连接回调函数表]
 * @param cb_data       [连接回调数据]
 * @return hey_socket*  [连接套接字]
 */
struct hey_socket *hey_conn_open(uint32_t domain_addr, const struct hey_socket_callbacks *cbs, void *cb_data);

/**
 * @brief 关闭HeyThings连接
 * @param sock      [连接套接字]
 * @return int32_t  [关闭结果，0为成功]
 */
int32_t hey_conn_close(struct hey_socket *sock);

#endif
