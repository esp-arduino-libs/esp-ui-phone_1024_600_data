/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include "lvgl.h"
#include "widgets/backstage/esp_ui_backstage_type.h"

#ifdef __cplusplus
extern "C" {
#endif

LV_IMG_DECLARE(esp_ui_phone_1024_600_backstage_trash_image);

#define ESP_UI_PHONE_1024_600_DARK_BACKSTAGE_SNAPSHOT_DATA_DEFAULT()   \
    {                                                                  \
        .main_size = ESP_UI_CORE_OBJECT_SIZE_RECT(706, 450),           \
        .title = {                                                     \
            .main_size = ESP_UI_CORE_OBJECT_SIZE_RECT(706, 36),        \
            .main_layout_column_pad = 10,                              \
            .icon_size = ESP_UI_CORE_OBJECT_SIZE_SQUARE(36),           \
            .text_font = ESP_UI_CORE_FONT_DEFAULT_SIZE(22),            \
            .text_color = ESP_UI_CORE_COLOR(0xFFFFFF),                 \
        },                                                             \
        .image = {                                                     \
            .main_size = ESP_UI_CORE_OBJECT_SIZE_RECT(706, 414),       \
            .radius = 22,                                              \
        },                                                             \
    }

#define ESP_UI_PHONE_1024_600_DARK_BACKSTAGE_DATA_DEFAULT()                      \
    {                                                                            \
        .main = {                                                                \
            .size = ESP_UI_CORE_OBJECT_SIZE_RECT_PERCENT(100, 100),              \
            .layout_row_pad = 10,                                                \
            .layout_top_pad = 20,                                                \
            .layout_bottom_pad = 20,                                             \
            .background_color = ESP_UI_CORE_COLOR(0x1A1A1A),                     \
        },                                                                       \
        .memory = {                                                              \
            .main_size = ESP_UI_CORE_OBJECT_SIZE_RECT_W_PERCENT(100, 22),        \
            .main_layout_x_right_offset = 10,                                    \
            .label_text_font = ESP_UI_CORE_FONT_DEFAULT_SIZE(20),                \
            .label_text_color = ESP_UI_CORE_COLOR(0xFFFFFF),                     \
            .label_unit_text = "KB",                                             \
        },                                                                       \
        .snapshot_table = {                                                      \
            .main_size = ESP_UI_CORE_OBJECT_SIZE_RECT_PERCENT(100, 100),         \
            .main_layout_column_pad = 40,                                        \
            .snapshot = ESP_UI_PHONE_1024_600_DARK_BACKSTAGE_SNAPSHOT_DATA_DEFAULT(), \
        },                                                                       \
        .trash_icon = {                                                          \
            .default_size = ESP_UI_CORE_OBJECT_SIZE_SQUARE(48),                  \
            .press_size = ESP_UI_CORE_OBJECT_SIZE_SQUARE(43),                    \
            .image = ESP_UI_CORE_IMAGE(&esp_ui_phone_1024_600_backstage_trash_image), \
        },                                                                       \
        .flags = {                                                               \
            .enable_memory = 1,                                                  \
            .enable_table_height_flex = 1,                                       \
            .enable_table_snapshot_use_icon_image = 0,                           \
            .enable_hide_when_no_snapshot = 1,                                   \
        },                                                                       \
    }

#ifdef __cplusplus
}
#endif
