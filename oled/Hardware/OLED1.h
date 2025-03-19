#ifndef __OLED1_H
#define __OLED1_H

void OLED_Init1(void);
void OLED_Clear1(void);
void OLED_ShowChar1(uint8_t Line, uint8_t Column, char Char);
void OLED_ShowString1(uint8_t Line, uint8_t Column, char *String);
void OLED_ShowNum1(uint8_t Line, uint8_t Column, uint32_t Number, uint8_t Length);
void OLED_ShowSignedNum1(uint8_t Line, uint8_t Column, int32_t Number, uint8_t Length);
void OLED_ShowHexNum1(uint8_t Line, uint8_t Column, uint32_t Number, uint8_t Length);
void OLED_ShowBinNum1(uint8_t Line, uint8_t Column, uint32_t Number, uint8_t Length);


#endif
