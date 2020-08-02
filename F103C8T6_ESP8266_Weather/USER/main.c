#include "global.h"
/*********************************************************
*��Ŀ ����������ʱ��
*���� ��H.han.lin
*�汾 ��V1.0 
*���� ��STM32F103C8T6������HSEΪSYSCLK������2����ATָ���
        ��ESP8266����wifi���ֱ�����֪�����ӿں�����ʱ���
		�ڻ�ȡʵʱ������ʱ�䲢ͨ�������ռ����Ϊ�ܼ���ͨ��
		OLED��ʾ��TIM2 1S��ʱʵ�ֱ��ص���ʱ��ÿ5���Ӹ���һ
		��������Ϣ�����ɵ���Ԥ������Ϊ5Сʱ���ɳ�硣
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

