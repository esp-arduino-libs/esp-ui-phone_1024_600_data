/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include "core_default_data.h"
#include "app_table_default_data.h"
#include "backstage_default_data.h"
#include "gesture_default_data.h"
#include "navigation_bar_default_data.h"
#include "status_bar_default_data.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Home */
#define ESP_UI_PHONE_1024_600_DARK_HOME_DATA_DEFAULT()                              \
    {                                                                               \
        .status_bar = ESP_UI_PHONE_1024_600_DARK_STATUS_BAR_DATA_DEFAULT(),         \
        .navigation_bar = ESP_UI_PHONE_1024_600_DARK_NAVIGATION_BAR_DATA_DEFAULT(), \
        .app_table = ESP_UI_PHONE_1024_600_DARK_APP_TABLE_DATA_DEFAULT(),           \
        .backstage = ESP_UI_PHONE_1024_600_DARK_BACKSTAGE_DATA_DEFAULT(),           \
        .flags = {                                                    \
            .enable_status_bar = 1,                                   \
            .enable_navigation_bar = 1,                               \
            .enable_app_table_flex = 1,                               \
            .enable_backstage = 1,                                    \
            .enable_backstage_flex = 1,                               \
        },                                                            \
    }

/* Manager */
#define ESP_UI_PHONE_1024_600_DARK_MANAGER_DATA_DEFAULT()             \
    {                                                                 \
        .gesture = ESP_UI_PHONE_1024_600_DARK_GESTURE_DATA_DEFAULT(), \
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
#define ESP_UI_PHONE_1024_600_DARK_DATA_DEFAULT()                     \
    {                                                                 \
        .core = ESP_UI_PHONE_1024_600_DARK_CORE_DATA_DEFAULT(),       \
        .home = ESP_UI_PHONE_1024_600_DARK_HOME_DATA_DEFAULT(),       \
        .manager = ESP_UI_PHONE_1024_600_DARK_MANAGER_DATA_DEFAULT(), \
    }

#ifdef __cplusplus
}
#endif
