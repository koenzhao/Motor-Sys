#ifndef __DISPLAY_H__
#define __DISPLAY_H__
#define uint unsigned int
#define uchar unsigned char
sbit rs = P1^0; //1602 的数据/指令选择控制线
sbit rw = P1^1; //1602 的读写控制线
sbit en = P2^5; //1602 的使能控制线

//sbit rs = P3^5; //1602 的数据/指令选择控制线
//sbit en = P3^4; //1602 的使能控制线

extern void LCD_Display(uint location, uchar speed[]);
extern void lcd_init();
extern void lcd_wdat(uchar dat);
extern void lcd_wcom(uchar com);


#endif