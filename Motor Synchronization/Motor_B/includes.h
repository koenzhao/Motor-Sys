#ifndef __INCLUDES_H__
#define __INCLUDES_H__

#include <reg52.h>

#include "init.h"
#include "delay.h"
#include "PWM.h"
#include "display.h"
#include "encoder.h"
#include "keyboard.h"
#include "UART.h"
#include "PID.h"

#define uchar unsigned char
#define uint unsigned int
#define ulong unsigned long
#define lint long int

//extern char speed[3];
extern char UART_Data;

#endif