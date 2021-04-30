#pragma once
#include "lvgl/lvgl.h"
#include "lv_examples/lv_examples.h"
#include "lv_drivers/win32drv/win32drv.h"
#include "lv_ext/lv_obj_ext_func.h"
#include "Matrix/matrix.h"
#include "stdlib.h"

extern "C" {
    LV_FONT_DECLARE(Font_MicrosoftYaHei_16);
    LV_FONT_DECLARE(Font_MicrosoftYaHei_20);
    LV_FONT_DECLARE(Font_MicrosoftYaHei_28);
    LV_FONT_DECLARE(Font_MicrosoftYaHei_50);
}

void GameSetup();
