#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "Key.h"
#include "OLED.h"
#include "Buzzer.h"

uint8_t KeyNum;


int main(void)
{
	LED_Init();
	Key_Init();
	OLED_Init();
	Buzzer_Init();
	
	LED1_ON();
	LED2_ON();
	
	OLED_ShowNum(4, 1, 202141, 6);
	OLED_ShowNum(4, 7, 83075, 6);
	while (1)
	{
		KeyNum = Key_GetNum();
		if (KeyNum == 1)
		{
			LED1_Turn();
		}
		if (KeyNum == 2)
		{
			LED2_Turn();
		}
		if (KeyNum == 3)
		{
			Buzzer_Turn();
		}
		if (GPIO_ReadOutputDataBit(GPIOA, GPIO_Pin_1) == 0)
		{
			OLED_ShowString(1, 1, "LED1 ON ");
		}
		else
		{
			OLED_ShowString(1, 1, "LED1 OFF");
		}
		if (GPIO_ReadOutputDataBit(GPIOA, GPIO_Pin_2) == 0)
		{
			OLED_ShowString(2, 1, "LED2 ON ");
		}
		else
		{
			OLED_ShowString(2, 1, "LED2 OFF");
		}
		if (GPIO_ReadOutputDataBit(GPIOB, GPIO_Pin_12) == 0)
		{
			OLED_ShowString(3, 1, "BEEF ON ");
		}
		else
		{
			OLED_ShowString(3, 1, "BEEF OFF");
		}
	}
}
