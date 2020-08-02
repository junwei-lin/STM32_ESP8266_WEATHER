#include "global.h"
/*********************************************************
*项目 ：电子气象时钟
*作者 ：H.han.lin
*版本 ：V1.0 
*概述 ：STM32F103C8T6主控以HSE为SYSCLK，串口2发送AT指令控
        制ESP8266连接wifi，分别与心知天气接口和苏宁时间接
		口获取实时天气与时间并通过年月日计算出为周几，通过
		OLED显示，TIM2 1S定时实现本地的走时，每5分钟更新一
		次天气信息。（可调）预计续航为5小时，可充电。
**********************************************************/
int main(void)
{
	Power_Init();
	OLED_Init();
	Esp8266_Init();
	Show_Wait();
	Wifi_Connect();
	Get_Time();
	Get_Oneday_Weather();
	while(1)
	{
		Show_Time();
		if(lflag.timer_update_flag)
		{
			Get_Oneday_Weather();
		}
	}	


 }

