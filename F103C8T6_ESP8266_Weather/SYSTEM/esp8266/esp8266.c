#include "cJSON.h"
#include "global.h"

Timer time;      //时间信息
Flag  lflag;     //标志位
Weather lweather;//天气信息


const u8 *wifi_name = "HZNU-1101";
const u8 *wifi_password ="123123abc";

const u8 *wifi_api = "api.seniverse.com";
const u8 *port ="80";

const u8 *c_key = "SOl1oWM_HihS05jcL";
const u8 *c_location = "hangzhou";
const u8 *c_language = "en";

const u8 *time_api = "quan.suning.com";



/*功能  ：配置所有引脚为模拟输入 */
void Power_Init(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	
 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOF, ENABLE);	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOG, ENABLE);	
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;	 
 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	
	
 	GPIO_Init(GPIOA, &GPIO_InitStructure);	  
	GPIO_Init(GPIOB, &GPIO_InitStructure);	  
	GPIO_Init(GPIOC, &GPIO_InitStructure);	  
	GPIO_Init(GPIOD, &GPIO_InitStructure);	  
	GPIO_Init(GPIOE, &GPIO_InitStructure);	  
	GPIO_Init(GPIOF, &GPIO_InitStructure);	  
	GPIO_Init(GPIOG, &GPIO_InitStructure);	  
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, DISABLE);	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, DISABLE);	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, DISABLE);	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, DISABLE);	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, DISABLE);	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOF, DISABLE);	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOG, DISABLE);	
	
}
/*功能  ：分割字符串 */
void split(char *src, const char *separator, char **dest, int *num) 
{
     char *pNext;
     int count = 0;
     
     if (src == NULL || strlen(src) == 0) //如果传入的地址为空或长度为0，直接终止 
        return;
        
     if (separator == NULL || strlen(separator) == 0) //如未指定分割的字符串，直接终止 
        return;
        
     pNext = (char *)strtok(src,separator); //必须使用(char *)进行强制类型转换(虽然不写有的编译器中不会出现指针错误)
     while(pNext != NULL) {
          *dest++ = pNext;
          ++count;
         pNext = (char *)strtok(NULL,separator);  //必须使用(char *)进行强制类型转换
    }  
    *num = count;
}     
/*功能  ：检测是否包含此子串 */
char* my_strstr(char* str, char* sub)
{
	int i,m,n;
	int str_len = strlen(str);
	int sub_len = strlen(sub);

	if (str_len < sub_len)	
	{
		return NULL;
	}

	if (str_len != 0 && sub_len == 0)		
	{

		return NULL;
	}

	if (str_len == 0 && sub_len == 0)
	{
		return NULL;
	}

	for (i = 0; i != strlen(str); ++i)
	{
		 m = 0; n = i;


		if (strlen(str + i) < sub_len)			
		{


			return NULL;
		}

		if (str[n] == sub[m])
		{
			while (str[n++] == sub[m++])
			{
				if (sub[m] == '\0')
				{
					return str + i;
				}
			}
		}
	}

	return NULL;
}
/*功能  ：us延时 */
void delay_us(u16 time)
{    
   u16 i=0;  
   while(time--)
   {
      i=10;  
      while(i--) ;    
   }
}
/*功能  ：ms延时 */
void delay_ms(u16 time)
{    
   u16 i=0;  
   while(time--)
   {
      i=12000;  
      while(i--) ;    
   }
}
/*功能  ：校验ESP8266的ACK*/
u8* check_cmd(u8 *str)
{
	
	char *strx=0;
	if(USART_RX_STA&0x8000)		
	{ 
		USART_RX_BUF[USART_RX_STA&0x7fff]=0;
		strx=my_strstr((char*)USART_RX_BUF,(char*)str);
	} 
	return (u8*)strx;
}
/*功能  ：发送一个字节*/
void send_byte(uint8_t data)
{
	USART_SendData(USART2,data);	
	while(!(USART2->SR & 1<<7));
}
/*功能  ：发送数据*/
void send_data(u8 *str)
{
	int len,i;
	u8* buf = str;
	len = strlen((const char*)buf);
	if(my_strstr((char*)str,( char*)'\0'))
	{
		len+=2;
	}
	for(i = 0;i < len;i++)
	{
		send_byte(*(buf++));
	}
}
/*功能  ：发送指令带校验 0成功 1失败 */
u8 send_cmd(u8 *cmd,u8 *ack,u16 waittime)
{
	u8 res = 0;
	USART_RX_STA = 0;
	memset(USART_RX_BUF,0,strlen((const char*)USART_RX_BUF));
	send_data(cmd);
	if(ack&&waittime)
	{
		while(--waittime)
		{
			delay_ms(10);
			if(USART_RX_STA&0x8000)
			{
				if(check_cmd(ack))
				{
					break;
				}
			}
		}
		if(0 == waittime)
			res = 1;
	}
	return res;
}
/*功能  ：退出透传 */
void Out_Trans(void)
{
	send_data("+++");
	delay_ms(500);

}
/*功能  ：连接wifi */
void Wifi_Connect(void)
{
	u8 *cmd;
	u8 i=0;
	Out_Trans();
	cmd = (u8*)malloc(100);
	send_data("AT+RST\r\n");
	OLED_Fill(14+10*i,27,22+10*i,39);i++; delay_ms(100);
	send_data("ATE0\r\n");
	OLED_Fill(14+10*i,27,22+10*i,39);i++; delay_ms(100);
	send_data("AT+CWMODE=1\r\n");
	OLED_Fill(14+10*i,27,22+10*i,39);i++;delay_ms(100);
	send_data("AT+CWQAP\r\n");
	OLED_Fill(14+10*i,27,22+10*i,39);i++; delay_ms(100);
	OLED_Fill(14+10*i,27,22+10*i,39);i++; delay_ms(100);
	sprintf((char *)cmd,"AT+CWJAP=\"%s\",\"%s\"\r\n",wifi_name,wifi_password);
	send_data(cmd);
	OLED_Fill(14+10*i,27,22+10*i,39);i++; delay_ms(100);
	OLED_Fill(14+10*i,27,22+10*i,39);i++; delay_ms(100);
	OLED_Fill(14+10*i,27,22+10*i,39);i++; delay_ms(100);
	OLED_Fill(14+10*i,27,22+10*i,39);i++; delay_ms(100);
	OLED_Fill(14+10*i,27,22+10*i,39); delay_ms(100);
	free(cmd);
	OLED_ShowString(32,44,(unsigned char *)"Connect!",16);
	OLED_Refresh();
	delay_ms(100);
	OLED_Clear();
	delay_ms(100);
	Show_Weather_Wait();
}
/*功能  ：获取天气 */
void Get_Oneday_Weather(void)
{
	u8 *cmd;
	cJSON *root,*results,*object,*location,*now;
    char *code,*temp;
	Out_Trans();
	cmd = (u8*)malloc(100);
	lweather.name = (char*)malloc(10);
	lweather.country = (char*)malloc(10);	
	send_data("AT+CIPCLOSE\r\n");
	sprintf((char *)cmd,"AT+CIPSTART=\"TCP\",\"%s\",%s\r\n",wifi_api,port);
	while(send_cmd(cmd,"ALREADY",100));
	while(send_cmd("AT+CIPMODE=1\r\n","OK",100));	
	while(send_cmd("AT+CIPSEND\r\n",">",100));
	sprintf((char *)cmd,"GET /v3/weather/now.json?key=%s&location=%s&language=%s&unit=c\r\n",c_key,c_location,c_language);
	while(send_cmd(cmd,"result",100));
	free(cmd);
	if((root = cJSON_Parse((const char*)USART_RX_BUF))!=NULL)
	{
		if((results = cJSON_GetObjectItem(root,"results"))!=NULL)
		{
			if((object = cJSON_GetArrayItem(results,0)) != NULL)
			{
				if((location = cJSON_GetObjectItem(object,"location"))!=NULL)
				{
					lweather.name = cJSON_GetObjectItem(location,"name")->valuestring;
					lweather.country = cJSON_GetObjectItem(location,"country")->valuestring;
				}
				if((now = cJSON_GetObjectItem(object,"now"))!=NULL)
				{
					code = cJSON_GetObjectItem(now,"code")->valuestring;
					temp = cJSON_GetObjectItem(now,"temperature")->valuestring;
				}
			}
		}
	}
	lweather.code = atoi(code);
	lweather.temp = atoi(temp);
	Show_frist_time();
	Show_weather();	
	Show_week();
	cJSON_Delete(root);
	lflag.timer_update_flag = 0;
	lflag.timer_update_flag = 0;
}
/*功能  ：获取时间 */
void Get_Time(void)
{
	int num = 0;
	cJSON *root;
	u8 *cmd;char *time_buf;
	char *revbuf[2] = {0};
	char *time_str[3] = {0},*date_str[3]={0};
	char *sysTime2;
	cmd = (u8*)malloc(100);
	Out_Trans();
	send_data("AT+CIPCLOSE\r\n");
	sprintf((char *)cmd,"AT+CIPSTART=\"TCP\",\"%s\",%s\r\n",time_api,port);
	while(send_cmd(cmd,"ALREADY",100));
	while(send_cmd("AT+CIPMODE=1\r\n","OK",100));	
	while(send_cmd("AT+CIPSEND\r\n",">",100));
	sprintf((char *)cmd,"GET /getSysTime.do HTTP/1.1\r\nHost: %s\r\nConnection: close\r\n\r\n",time_api);
	while(send_cmd(cmd,"sysTime2",100));
	free(cmd);
	time_buf = my_strstr(( char *)USART_RX_BUF,( char *)"{\"sysTime2\"");
	if((root = cJSON_Parse((const char*)time_buf))!=NULL)
	{
		sysTime2 = cJSON_GetObjectItem(root,"sysTime2")->valuestring;
	}
	split(sysTime2," ",revbuf,&num);
	split(revbuf[1],":",time_str,&num);
	time.hou = atoi(time_str[0]);
	time.min = atoi(time_str[1]);
	time.sec = atoi(time_str[2]);	
	split(revbuf[0],"-",date_str,&num);
	time.year = atoi(date_str[0]);
	time.month= atoi(date_str[1]);
	time.day = atoi(date_str[2]);	
	time.week = Check_date(time.year,time.month,time.day);
	cJSON_Delete(root);
	TIM2_Init(9999,7199);
	lflag.timer_flag =0;
}
/*功能  ：计算周几 */
u8 Check_date(u16 year,u16 month,u16 day)
{
	long totalday;
	u8 week;
	int monthday[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	int monthdayLeap[12]={0,31,60,91,121,152,182,213,244,274,305,335};
	totalday=(year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400;
	if((year%4==0)&&(year%100!=0)||(year%400==0))
	totalday+=monthdayLeap[month-1];
	else
	totalday+=monthday[month-1];
	totalday+=day;
	week=totalday%7;
	return week;
}

