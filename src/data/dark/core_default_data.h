/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include "lvgl.h"
#include "core/esp_ui_core_type.h"

#ifdef __cplusplus
extern "C" {
#endif

LV_IMG_DECLARE(esp_ui_phone_1024_600_wallpaper_drak_image);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_8);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_10);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_12);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_14);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_16);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_18);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_20);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_22);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_24);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_26);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_28);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_30);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_32);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_34);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_36);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_38);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_40);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_42);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_44);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_46);
LV_FONT_DECLARE(esp_ui_phone_1024_600_font_48);

/* Home */
#define ESP_UI_PHONE_1024_600_DARK_CORE_HOME_DATA_DEFAULT()                            \
    {                                                                                  \
        .background = {                                                                \
            .color = ESP_UI_CORE_COLOR(0x1A1A1A),                                      \
            .wallpaper_image_resource = ESP_UI_CORE_IMAGE(&esp_ui_phone_1024_600_wallpaper_drak_image), \
        },                                                                             \
        .text = {                                                                      \
            .default_fonts_num = 21,                                                   \
            .default_fonts = {                                                         \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(8, &esp_ui_phone_1024_600_font_8),        \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(10, &esp_ui_phone_1024_600_font_10),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(12, &esp_ui_phone_1024_600_font_12),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(14, &esp_ui_phone_1024_600_font_14),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(16, &esp_ui_phone_1024_600_font_16),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(18, &esp_ui_phone_1024_600_font_18),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(20, &esp_ui_phone_1024_600_font_20),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(22, &esp_ui_phone_1024_600_font_22),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(24, &esp_ui_phone_1024_600_font_24),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(26, &esp_ui_phone_1024_600_font_26),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(28, &esp_ui_phone_1024_600_font_28),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(30, &esp_ui_phone_1024_600_font_30),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(32, &esp_ui_phone_1024_600_font_32),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(34, &esp_ui_phone_1024_600_font_34),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(36, &esp_ui_phone_1024_600_font_36),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(38, &esp_ui_phone_1024_600_font_38),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(40, &esp_ui_phone_1024_600_font_40),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(42, &esp_ui_phone_1024_600_font_42),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(44, &esp_ui_phone_1024_600_font_44),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(46, &esp_ui_phone_1024_600_font_46),      \
                ESP_UI_CORE_FONT_CUSTOM_SIZE(48, &esp_ui_phone_1024_600_font_48),      \
            },                                                                         \
        },                                                                             \
        .container = {                                                                 \
            .styles = {                                                                \
                { .outline_width = 1, .outline_color = ESP_UI_CORE_COLOR(0xeb3b5a), }, \
                { .outline_width = 2, .outline_color = ESP_UI_CORE_COLOR(0xfa8231), }, \
                { .outline_width = 3, .outline_color = ESP_UI_CORE_COLOR(0xf7b731), }, \
                { .outline_width = 2, .outline_color = ESP_UI_CORE_COLOR(0x20bf6b), }, \
                { .outline_width = 1, .outline_color = ESP_UI_CORE_COLOR(0x0fb9b1), }, \
                { .outline_width = 3, .outline_color = ESP_UI_CORE_COLOR(0x2d98da), }, \
            },                                                                         \
        },                                                                             \
    }

/* manager */
#define ESP_UI_PHONE_1024_600_DARK_CORE_MANAGER_DATA_DEFAULT() \
    {                                                     \
        .app = {                                          \
            .max_running_num = 3,                         \
        },                                                \
        .flags = {                                        \
            .enable_app_save_snapshot = 1,                \
        },                                                \
    }

/* Core */
#define ESP_UI_PHONE_1024_600_DARK_CORE_INFO_DATA_DEFAULT_NAME    "EUI-Phone 1024x600"
#define ESP_UI_PHONE_1024_600_DARK_CORE_DATA_DEFAULT()                     \
    {                                                                      \
        .name = ESP_UI_PHONE_1024_600_DARK_CORE_INFO_DATA_DEFAULT_NAME,    \
        .screen_size = ESP_UI_CORE_OBJECT_SIZE_RECT(1024, 600),            \
        .home = ESP_UI_PHONE_1024_600_DARK_CORE_HOME_DATA_DEFAULT(),       \
        .manager = ESP_UI_PHONE_1024_600_DARK_CORE_MANAGER_DATA_DEFAULT(), \
    }

#ifdef __cplusplus
}
#endif
