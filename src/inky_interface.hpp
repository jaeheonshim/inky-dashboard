#ifndef INKY_INTERFACE_T
#define INKY_INTERFACE_T

#include "lvgl/lvgl.h"
#include <stdio.h>

constexpr int HOLD_VSYS_EN = 2;
constexpr int STATUS_LED = 6;
constexpr int WIFI_LED = 7;

#define INKY_BLACK lv_color_make(0, 0, 0)
#define INKY_WHITE lv_color_make(1, 1, 1)
#define INKY_GREEN lv_color_make(2, 2, 2)
#define INKY_BLUE lv_color_make(3, 3, 3)
#define INKY_RED lv_color_make(4, 4, 4)
#define INKY_YELLOW lv_color_make(5, 5, 5)
#define INKY_ORANGE lv_color_make(6, 6, 6)

void inky_flush_cb(lv_display_t *, const lv_area_t *, uint8_t *);
void lv_task_handler_callback();
void inky_sleep(int wake_in_minutes);
int connect_wifi();
int inky_init();

#endif /* INKY_INTERFACE_T */