/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include "lvgl.h"
#include "widgets/status_bar/esp_ui_status_bar_type.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Icon Images */
// Battery
LV_IMG_DECLARE(esp_ui_phone_status_bar_battery_level_0_icon);
LV_IMG_DECLARE(esp_ui_phone_status_bar_battery_level_1_icon);
LV_IMG_DECLARE(esp_ui_phone_status_bar_battery_level_2_icon);
LV_IMG_DECLARE(esp_ui_phone_status_bar_battery_level_3_icon);
LV_IMG_DECLARE(esp_ui_phone_status_bar_battery_charge_icon);
// WiFi
LV_IMG_DECLARE(esp_ui_phone_status_bar_wifi_close_icon);
LV_IMG_DECLARE(esp_ui_phone_status_bar_wifi_level_1_icon);
LV_IMG_DECLARE(esp_ui_phone_status_bar_wifi_level_2_icon);
LV_IMG_DECLARE(esp_ui_phone_status_bar_wifi_level_3_icon);

/* Area */
#define ESP_UI_PHONE_1024_600_DARK_STATUS_BAR_AREA_DATA(w_percent, align) \
    {                                                                        \
        .size = ESP_UI_STYLE_SIZE_RECT_PERCENT(w_percent, 100),        \
        .layout_column_align = align,                                        \
        .layout_column_start_offset = 40,                                    \
        .layout_column_pad = 8,                                              \
    }

/* Status Bar */
#define ESP_UI_PHONE_1024_600_DARK_STATUS_BAR_DATA()                                                      \
    {                                                                                                        \
        .main = {                                                                                            \
            .size = ESP_UI_STYLE_SIZE_RECT_W_PERCENT(100, 50),                                         \
            .background_color = ESP_UI_STYLE_COLOR(0x38393A),                                                 \
            .text_font = ESP_UI_STYLE_FONT_SIZE(22),                                                  \
            .text_color = ESP_UI_STYLE_COLOR(0xFFFFFF),                                                       \
        },                                                                                                   \
        .area = {                                                                                            \
            .num = ESP_UI_STATUS_BAR_DATA_AREA_NUM_MAX,                                                      \
            .data = {                                                                                        \
                ESP_UI_PHONE_1024_600_DARK_STATUS_BAR_AREA_DATA(33, ESP_UI_STATUS_BAR_AREA_ALIGN_START),  \
                ESP_UI_PHONE_1024_600_DARK_STATUS_BAR_AREA_DATA(34, ESP_UI_STATUS_BAR_AREA_ALIGN_CENTER), \
                ESP_UI_PHONE_1024_600_DARK_STATUS_BAR_AREA_DATA(33, ESP_UI_STATUS_BAR_AREA_ALIGN_END),    \
            },                                                                                               \
        },                                                                                                   \
        .icon_common_size = ESP_UI_STYLE_SIZE_SQUARE(28),                                              \
        .battery = {                                                                                         \
            .area_index = ESP_UI_STATUS_BAR_DATA_AREA_NUM_MAX - 1,                                           \
            .icon_data = {                                                                                   \
                .icon = {                                                                                    \
                    .image_num = 5,                                                                          \
                    .images = {                                                                              \
                        ESP_UI_STYLE_IMAGE_RECOLOR_WHITE(&esp_ui_phone_status_bar_battery_level_0_icon),      \
                        ESP_UI_STYLE_IMAGE_RECOLOR_WHITE(&esp_ui_phone_status_bar_battery_level_1_icon),      \
                        ESP_UI_STYLE_IMAGE_RECOLOR_WHITE(&esp_ui_phone_status_bar_battery_level_2_icon),      \
                        ESP_UI_STYLE_IMAGE_RECOLOR_WHITE(&esp_ui_phone_status_bar_battery_level_3_icon),      \
                        ESP_UI_STYLE_IMAGE_RECOLOR_WHITE(&esp_ui_phone_status_bar_battery_charge_icon),       \
                    },                                                                                       \
                },                                                                                           \
            },                                                                                               \
        },                                                                                                   \
        .wifi = {                                                                                            \
            .area_index = ESP_UI_STATUS_BAR_DATA_AREA_NUM_MAX - 1,                                           \
            .icon_data = {                                                                                   \
                .icon = {                                                                                    \
                    .image_num = 4,                                                                          \
                    .images = {                                                                              \
                        ESP_UI_STYLE_IMAGE_RECOLOR_WHITE(&esp_ui_phone_status_bar_wifi_close_icon),           \
                        ESP_UI_STYLE_IMAGE_RECOLOR_WHITE(&esp_ui_phone_status_bar_wifi_level_1_icon),         \
                        ESP_UI_STYLE_IMAGE_RECOLOR_WHITE(&esp_ui_phone_status_bar_wifi_level_2_icon),         \
                        ESP_UI_STYLE_IMAGE_RECOLOR_WHITE(&esp_ui_phone_status_bar_wifi_level_3_icon),         \
                    },                                                                                       \
                },                                                                                           \
            },                                                                                               \
        },                                                                                                   \
        .clock = {                                                                                           \
            .area_index = 1,                                                                                 \
        },                                                                                                   \
        .flags = {                                                                                           \
            .enable_battery_icon = 1,                                                                        \
            .enable_battery_icon_common_size = 1,                                                            \
            .enable_battery_label = 1,                                                                       \
            .enable_wifi_icon = 1,                                                                           \
            .enable_wifi_icon_common_size = 1,                                                               \
            .enable_clock = 1,                                                                               \
        },                                                                                                   \
    }

#ifdef __cplusplus
}
#endif
