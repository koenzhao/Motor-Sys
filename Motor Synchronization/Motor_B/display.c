#include "includes.h"

void lcd_wcom(uchar com) //1602 写命令函数 单片机给 1602 写命令
{ 
	rs=0; //选择指令寄存器
	rw=0; //选择写
	P0=com; //把命令字送入
	delay_ms(1); //延时一小会儿， 让 1602 准备接收数据
	en=1; //使能线电平变化， 命令送入 1602 的 8 位数据口
	en=0;
}
void lcd_wdat(uchar dat) //1602 写数据函数
{
	rs=1; //选择数据寄存器
	rw=0; //选择写
	P0=dat; //把要显示的数据送入
	delay_ms(1); //延时一小会儿， 让 1602 准备接收数据
	en=1; //使能线电平变化， 数据送入 1602 的 8 位数据口
	en=0;
}

void LCD_Display(uint location, uchar Display_Part[])
{
	int i=0;
	lcd_wcom(location); 
	for(i=0;Display_Part[i] != 0;i++)
	{
		lcd_wdat(Display_Part[i]);
		delay_ms(1);
	}
}

void lcd_init() //1602 初始化函数
{
	lcd_wcom(0x38); //8 位数据， 双列， 5*7 字形
	lcd_wcom(0x0c); //开启显示屏， 关光标， 光标不闪烁
	lcd_wcom(0x06); //显示地址递增， 即写一个数据后， 显示位置右移一位
	lcd_wcom(0x01); //清屏
	LCD_Display(0x80,"Speed:");
	LCD_Display(0x80+0x09,"rpm");
}


