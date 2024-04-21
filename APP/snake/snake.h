#ifndef __SANKE_H
#define __SANKE_H	 
#include "system.h"
#include "SysTick.h"

//贪吃蛇主函数
void show(void);//游戏画面
extern u8 key;
void LCD_ShowPictureEx(u16 x, u16 y, u16 wide, u16 high);
void Test_Show_CH_Font16(u16 x,u16 y,u8 index,u16 color);
void Test_Show_CH_Font24(u16 x,u16 y,u8 index,u16 color);

#endif
