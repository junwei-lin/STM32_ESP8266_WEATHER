#ifndef __ESP8266_H
#define __ESP8266_H

#include "stm32f10x.h"
#include <string.h>
#include <stdlib.h>

typedef struct time_struct
{
	u8 hou;
	u8 min;
	u8 sec;
    u8 week;
	u8 sec_buf;
	u8 min_buf;
	u8 hou_buf;
	u8 week_buf;
	u16 year;
	u16 month;
	u16 day;
}Timer;

typedef struct flag_struct
{
	u8 timer_flag;
	u8 timer_update_flag;
}Flag;

typedef struct weather_msg
{
	char *name;
	char *country;
	u8   code;
	u8   temp;
}Weather;

#define tu_x 0
#define tu_y 18

#define time_x 43	
#define time_y 10

#define Update_time 300 //MIAO
extern Weather lweather;
extern Flag  lflag;
extern Timer time;
extern const u8 *wifi_name ;
extern const u8 *wifi_password ;

extern const u8 *wifi_api;
extern const u8 *port ;

extern const u8 *c_key ;
extern const u8 *c_location ;
extern const u8 *c_language ;

extern const u8 *time_api;

void delay_us(u16 time);
void delay_ms(u16 time);

u8* check_cmd(u8 *str);
void send_byte(uint8_t data);
void send_data(u8 *str);
u8 send_cmd(u8 *cmd,u8 *ack,u16 waittime);
char* my_strstr(char* str, char* sub);
void split(char *src, const char *separator, char **dest, int *num);

void Wifi_Connect(void);
void Get_Oneday_Weather(void);
void Get_Threeday_Weather(void);
void Get_Time(void);
void Power_Init(void);
u8 Check_date(u16 year,u16 month,u16 day);
#endif



