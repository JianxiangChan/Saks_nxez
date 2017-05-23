#include "led_flash.h"

Ret led_gpio_init(void)
{
	return_val_if_fail(-1 != wiringPiSetup(), RET_FAIL);
	return RET_OK;
}

Ret led_ctr_init()




