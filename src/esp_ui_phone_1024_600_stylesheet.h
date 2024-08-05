/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include "esp_ui.h"
#include "stylesheet/dark/core_data.h"
#include "stylesheet/dark/app_table_data.h"
#include "stylesheet/dark/backstage_data.h"
#include "stylesheet/dark/gesture_data.h"
#include "stylesheet/dark/navigation_bar_data.h"
#include "stylesheet/dark/status_bar_data.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Home */
#define ESP_UI_PHONE_1024_600_DARK_HOME_DATA()                              \
    {                                                                               \
        .status_bar = ESP_UI_PHONE_1024_600_DARK_STATUS_BAR_DATA(),         \
        .navigation_bar = ESP_UI_PHONE_1024_600_DARK_NAVIGATION_BAR_DATA(), \
        .app_table = ESP_UI_PHONE_1024_600_DARK_APP_TABLE_DATA(),           \
        .backstage = ESP_UI_PHONE_1024_600_DARK_BACKSTAGE_DATA(),           \
        .flags = {                                                    \
            .enable_status_bar = 1,                                   \
            .enable_navigation_bar = 1,                               \
            .enable_app_table_flex = 1,                               \
            .enable_backstage = 1,                                    \
            .enable_backstage_flex = 1,                               \
        },                                                            \
    }

/* Manager */
#define ESP_UI_PHONE_1024_600_DARK_MANAGER_DATA()             \
    {                                                                 \
        .gesture = ESP_UI_PHONE_1024_600_DARK_GESTURE_DATA(), \
        .backstage = {                                  \
            .drag_snapshot_y_step = 10,                 \
            .drag_snapshot_y_threshold = 50,            \
            .drag_snapshot_angle_threshold = 60,        \
            .delete_snapshot_y_threshold = 50,          \
        },                                              \
        .flags = {                                      \
            .enable_gesture = 1,                        \
            .enable_backstage_snapshot_drag = 1,        \
        },                                              \
    }

/* Phone */
#define ESP_UI_PHONE_1024_600_DARK_STYLESHEET()               \
    {                                                                 \
        .core = ESP_UI_PHONE_1024_600_DARK_CORE_DATA(),       \
        .home = ESP_UI_PHONE_1024_600_DARK_HOME_DATA(),       \
        .manager = ESP_UI_PHONE_1024_600_DARK_MANAGER_DATA(), \
    }

#ifdef __cplusplus
}
#endif
