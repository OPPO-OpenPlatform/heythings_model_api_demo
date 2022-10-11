/**
 * Copyright (c) 2008-2022, OPPO Mobile Comm Corp., Ltd
 * VENDOR_EDIT
 * @file type.h
 * @brief Heythings API 数据结构类型定义
 * @version 0.1
 * @date 2021-01-27
 * @author WatWu
 */

#ifndef HEY_TYPE_H
#define HEY_TYPE_H

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

struct hey_service;    // 本地服务抽象，向SDK注册服务内容后返回
struct hey_socket;     // 设备套接字，使用家庭地址发起连接后返回
struct hey_action_ctx; // 动作上下文，主动开始一个动作或者被动接收动作会返回

struct hey_job_ctx {
    void *job_ptr;
    void (*cancel_cb)(struct hey_job_ctx *ctx);
};

/*
 * @brief event notification detailed parameters
 */
struct hey_event_notify_attr {
    uint8_t importance;      // the importance of this notification
    uint64_t uuid;           // fill in 0 for new events, fill in the uuid generated by the previous call for resending events
    uint64_t ref_uuid;       // the related event uuid of this notification
    uint64_t timestamp;      // the UTC timestamp when this event happen, unit: ms
    struct hey_job_ctx *ctx; // callback data for user
};

struct hey_binary_data {
    size_t len;
    uint8_t *data;
};

struct hey_array_node {
    uint32_t id;
    struct hey_binary_data data;
};

enum hey_operation_errcode {
    HEY_NOERR = 0, // 操作已成功完成
    HEY_SDK_ERR = -1,
    HEY_DISCONNECT = -2,

    HEY_EPERM = 1,      // 不允许的操作（如：尝试读取无权读取的属性）
    HEY_ENOENT = 2,     // 无此元素（如数组内元素ID无效）
    HEY_EFINISHED = 3,  // 事务已结束
    HEY_EINTR = 4,      // 正在进行的操作被中断
    HEY_EIO = 5,        // 业务层处理出错
    HEY_ENXIO = 6,      // 无此特性（iid无效）
    HEY_ETIME = 8,      // 事务处理超时
    HEY_EACCESS = 13,   // 禁止访问
    HEY_EBUSY = 16,     // 设备忙
    HEY_ENOSVC = 19,    // 无此服务（siid无效）
    HEY_EINVAL = 22,    // 请求参数无效
    HEY_ENOSPC = 27,    // 存储空间满，超出最大限制
    HEY_ENOCMD = 38,    // 无法识别的消息类型
    HEY_EALREADY = 114, // 操作已经在进行

    ERROR_END
};

#endif