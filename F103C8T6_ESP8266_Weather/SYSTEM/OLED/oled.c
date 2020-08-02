#include "global.h"
#include "oledfont.h"
u8 OLED_GRAM[128][8];

//���Ժ���
void OLED_ColorTurn(u8 i)
{
	if(i==0)
		{
			OLED_WR_Byte(0xA6,OLED_CMD);//������ʾ
		}
	if(i==1)
		{
			OLED_WR_Byte(0xA7,OLED_CMD);//��ɫ��ʾ
		}
}

//��Ļ��ת180��
void OLED_DisplayTurn(u8 i)
{
	if(i==0)
		{
			OLED_WR_Byte(0xC8,OLED_CMD);//������ʾ
			OLED_WR_Byte(0xA1,OLED_CMD);
		}
	if(i==1)
		{
			OLED_WR_Byte(0xC0,OLED_CMD);//��ת��ʾ
			OLED_WR_Byte(0xA0,OLED_CMD);
		}
}

//��ʼ�ź�
void I2C_Start(void)
{
	OLED_SDIN_Set();
	OLED_SCLK_Set();
	OLED_SDIN_Clr();
	OLED_SCLK_Clr();
}

//�����ź�
void I2C_Stop(void)
{
	OLED_SCLK_Set();
	OLED_SDIN_Clr();
	OLED_SDIN_Set();
}

//�ȴ��ź���Ӧ
void I2C_WaitAck(void) //�������źŵĵ�ƽ
{
	OLED_SCLK_Set();
	OLED_SCLK_Clr();
}

//д��һ���ֽ�
void Send_Byte(u8 dat)
{
	u8 i;
	OLED_SCLK_Clr();//��ʱ���ź�����Ϊ�͵�ƽ
	for(i=0;i<8;i++)
	{
		if(dat&0x80)//��dat��8λ�����λ����д��
		{
			OLED_SDIN_Set();
    }
		else
		{
			OLED_SDIN_Clr();
    }
		OLED_SCLK_Set();//��ʱ���ź�����Ϊ�ߵ�ƽ
		OLED_SCLK_Clr();//��ʱ���ź�����Ϊ�͵�ƽ
		dat<<=1;
  }
}

//����һ���ֽ�
//��SSD1306д��һ���ֽڡ�
//mode:����/�����־ 0,��ʾ����;1,��ʾ����;
void OLED_WR_Byte(u8 dat,u8 mode)
{
	I2C_Start();
	Send_Byte(0x78);
	I2C_WaitAck();
	if(mode){Send_Byte(0x40);}
  else{Send_Byte(0x00);}
	I2C_WaitAck();
	Send_Byte(dat);
	I2C_WaitAck();
	I2C_Stop();
}


//����OLED��ʾ 
void OLED_DisPlay_On(void)
{
	OLED_WR_Byte(0x8D,OLED_CMD);//��ɱ�ʹ��
	OLED_WR_Byte(0x14,OLED_CMD);//������ɱ�
	OLED_WR_Byte(0xAF,OLED_CMD);//������Ļ
}

//�ر�OLED��ʾ 
void OLED_DisPlay_Off(void)
{
	OLED_WR_Byte(0x8D,OLED_CMD);//��ɱ�ʹ��
	OLED_WR_Byte(0x10,OLED_CMD);//�رյ�ɱ�
	OLED_WR_Byte(0xAF,OLED_CMD);//�ر���Ļ
}

//�����Դ浽OLED	
void OLED_Refresh(void)
{
	u8 i,n;
	for(i=0;i<8;i++)
	{
	   OLED_WR_Byte(0xb0+i,OLED_CMD); //��������ʼ��ַ
	   OLED_WR_Byte(0x00,OLED_CMD);   //���õ�����ʼ��ַ
	   OLED_WR_Byte(0x10,OLED_CMD);   //���ø�����ʼ��ַ
	   for(n=0;n<128;n++)
	   {
		 OLED_WR_Byte(OLED_GRAM[n][i],OLED_DATA);
		} 
  }
}
//��������
void OLED_Clear(void)
{
	u8 i,n;
	for(i=0;i<8;i++)
	{
	   for(n=0;n<128;n++)
			{
			 OLED_GRAM[n][i]=0;//�����������
			}
  }
	OLED_Refresh();//������ʾ
}

//���� 
//x:0~127
//y:0~63
void OLED_DrawPoint(u8 x,u8 y)
{
	u8 i,m,n;
	i=y/8;
	m=y%8;
	n=1<<m;
	OLED_GRAM[x][i]|=n;
	
}

//���һ����
//x:0~127
//y:0~63
void OLED_ClearPoint(u8 x,u8 y)
{
	u8 i,m,n;
	i=y/8;
	m=y%8;
	n=1<<m;
	OLED_GRAM[x][i]=~OLED_GRAM[x][i];
	OLED_GRAM[x][i]|=n;
	OLED_GRAM[x][i]=~OLED_GRAM[x][i];
}


//����
//x:0~128
//y:0~64
void OLED_DrawLine(u8 x1,u8 y1,u8 x2,u8 y2)
{
	u8 i,k,k1,k2;
	if((x1<0)||(x2>128)||(y1<0)||(y2>64)||(x1>x2)||(y1>y2))return;
	if(x1==x2)    //������
	{
			for(i=0;i<(y2-y1);i++)
			{
				OLED_DrawPoint(x1,y1+i);
			}
  }
	else if(y1==y2)   //������
	{
			for(i=0;i<(x2-x1);i++)
			{
				OLED_DrawPoint(x1+i,y1);
			}
  }
	else      //��б��
	{
		k1=y2-y1;
		k2=x2-x1;
		k=k1*10/k2;
		for(i=0;i<(x2-x1);i++)
			{
			  OLED_DrawPoint(x1+i,y1+i*k/10);
			}
	}
}
//x,y:Բ������
//r:Բ�İ뾶
void OLED_DrawCircle(u8 x,u8 y,u8 r)
{
	int a, b,num;
    a = 0;
    b = r;
    while(2 * b * b >= r * r)      
    {
        OLED_DrawPoint(x + a, y - b);
        OLED_DrawPoint(x - a, y - b);
        OLED_DrawPoint(x - a, y + b);
        OLED_DrawPoint(x + a, y + b);
 
        OLED_DrawPoint(x + b, y + a);
        OLED_DrawPoint(x + b, y - a);
        OLED_DrawPoint(x - b, y - a);
        OLED_DrawPoint(x - b, y + a);
        
        a++;
        num = (a * a + b * b) - r*r;//���㻭�ĵ���Բ�ĵľ���
        if(num > 0)
        {
            b--;
            a--;
        }
    }
}



//��ָ��λ����ʾһ���ַ�,���������ַ�
//x:0~127
//y:0~63
//size:ѡ������ 12/16/24
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 size1)
{
	u8 i,m,temp,size2,chr1;
	u8 y0=y;
	size2=(size1/8+((size1%8)?1:0))*(size1/2);  //�õ�����һ���ַ���Ӧ������ռ���ֽ���
	chr1=chr-' ';  //����ƫ�ƺ��ֵ
	for(i=0;i<size2;i++)
	{
		if(size1==12)
        {temp=asc2_1206[chr1][i];} //����1206����
		else if(size1==16)
        {temp=asc2_1608[chr1][i];} //����1608����
		else if(size1==24)
        {temp=asc2_2412[chr1][i];} //����2412����
		else return;
				for(m=0;m<8;m++)           //д������
				{
					if(temp&0x80)OLED_DrawPoint(x,y);
					else OLED_ClearPoint(x,y);
					temp<<=1;
					y++;
					if((y-y0)==size1)
					{
						y=y0;
						x++;
						break;
          }
				}
  }
}


//��ʾ�ַ���
//x,y:�������  
//size1:�����С 
//*chr:�ַ�����ʼ��ַ 
void OLED_ShowString(u8 x,u8 y,u8 *chr,u8 size1)
{
	while((*chr>=' ')&&(*chr<='~'))//�ж��ǲ��ǷǷ��ַ�!
	{
		OLED_ShowChar(x,y,*chr,size1);
		x+=size1/2;
		if(x>128-size1)  //����
		{
			x=0;
			y+=2;
    }
		chr++;
  }
}

//m^n
u32 OLED_Pow(u8 m,u8 n)
{
	u32 result=1;
	while(n--)
	{
	  result*=m;
	}
	return result;
}

////��ʾ2������
////x,y :�������	 
////len :���ֵ�λ��
////size:�����С
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size1)
{
	u8 t,temp;
	for(t=0;t<len;t++)
	{
		temp=(num/OLED_Pow(10,len-t-1))%10;
			if(temp==0)
			{
				OLED_ShowChar(x+(size1/2)*t,y,'0',size1);
      }
			else 
			{
			  OLED_ShowChar(x+(size1/2)*t,y,temp+'0',size1);
			}
  }
}
//����д�����ݵ���ʼλ��
void OLED_WR_BP(u8 x,u8 y)
{
	OLED_WR_Byte(0xb0+y,OLED_CMD);//��������ʼ��ַ
	OLED_WR_Byte(((x&0xf0)>>4)|0x10,OLED_CMD);
	OLED_WR_Byte((x&0x0f)|0x01,OLED_CMD);
}

//x0,y0���������
//x1,y1���յ�����
//BMP[]��Ҫд���ͼƬ����
void OLED_ShowPicture(u8 x0,u8 y0,u8 x1,u8 y1,u8 BMP[])
{
	u32 j=0;
	u8 x=0,y=0;
	if(y%8==0)y=0;
	else y+=1;
	for(y=y0;y<y1;y++)
	 {
		 OLED_WR_BP(x0,y);
		 for(x=x0;x<x1;x++)
		 {
			 OLED_WR_Byte(BMP[j],OLED_DATA);
			 j++;
     }
	 }
}
//OLED�ĳ�ʼ��
void OLED_Init(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);	 //ʹ��A�˿�ʱ��
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5|GPIO_Pin_7;	 
 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;//�ٶ�50MHz
 	GPIO_Init(GPIOA, &GPIO_InitStructure);	  //��ʼ��GPIOD3,6
 	GPIO_SetBits(GPIOA,GPIO_Pin_5|GPIO_Pin_7);	
	
	
	
	OLED_WR_Byte(0xAE,OLED_CMD);//--turn off oled panel
	OLED_WR_Byte(0x00,OLED_CMD);//---set low column address
	OLED_WR_Byte(0x10,OLED_CMD);//---set high column address
	OLED_WR_Byte(0x40,OLED_CMD);//--set start line address  Set Mapping RAM Display Start Line (0x00~0x3F)
	OLED_WR_Byte(0x81,OLED_CMD);//--set contrast control register
	OLED_WR_Byte(0xCF,OLED_CMD);// Set SEG Output Current Brightness
	OLED_WR_Byte(0xA1,OLED_CMD);//--Set SEG/Column Mapping     0xa0���ҷ��� 0xa1����
	OLED_WR_Byte(0xC8,OLED_CMD);//Set COM/Row Scan Direction   0xc0���·��� 0xc8����
	OLED_WR_Byte(0xA6,OLED_CMD);//--set normal display
	OLED_WR_Byte(0xA8,OLED_CMD);//--set multiplex ratio(1 to 64)
	OLED_WR_Byte(0x3f,OLED_CMD);//--1/64 duty
	OLED_WR_Byte(0xD3,OLED_CMD);//-set display offset	Shift Mapping RAM Counter (0x00~0x3F)
	OLED_WR_Byte(0x00,OLED_CMD);//-not offset
	OLED_WR_Byte(0xd5,OLED_CMD);//--set display clock divide ratio/oscillator frequency
	OLED_WR_Byte(0x80,OLED_CMD);//--set divide ratio, Set Clock as 100 Frames/Sec
	OLED_WR_Byte(0xD9,OLED_CMD);//--set pre-charge period
	OLED_WR_Byte(0xF1,OLED_CMD);//Set Pre-Charge as 15 Clocks & Discharge as 1 Clock
	OLED_WR_Byte(0xDA,OLED_CMD);//--set com pins hardware configuration
	OLED_WR_Byte(0x12,OLED_CMD);
	OLED_WR_Byte(0xDB,OLED_CMD);//--set vcomh
	OLED_WR_Byte(0x40,OLED_CMD);//Set VCOM Deselect Level
	OLED_WR_Byte(0x20,OLED_CMD);//-Set Page Addressing Mode (0x00/0x01/0x02)
	OLED_WR_Byte(0x02,OLED_CMD);//
	OLED_WR_Byte(0x8D,OLED_CMD);//--set Charge Pump enable/disable
	OLED_WR_Byte(0x14,OLED_CMD);//--set(0x10) disable
	OLED_WR_Byte(0xA4,OLED_CMD);// Disable Entire Display On (0xa4/0xa5)
	OLED_WR_Byte(0xA6,OLED_CMD);// Disable Inverse Display On (0xa6/a7) 
	OLED_WR_Byte(0xAF,OLED_CMD);
	OLED_Clear();
    OLED_DisplayTurn(1);
	OLED_ColorTurn(0);
}


/*---------------------------------------------zijixie--------------------------------------------------*/
void OLED_DrawRect(u8 x0,u8 y0,u8 x1,u8 y1)
{
	OLED_DrawLine(x0,y0,x0,y1);
	OLED_DrawLine(x0,y1,x1,y1);
	OLED_DrawLine(x0,y0,x1,y0);
    OLED_DrawLine(x1,y0,x1,y1+1);
}

void OLED_Fill(u8 x0,u8 y0,u8 x1,u8 y1)
{
	u8 i,m,n,x,y;
	if(x0 >= x1 || y0 >= y1) return ;
	for(x = x0;x <= x1;x++)
	{
		for(y = y0;y <= y1;y++)
		{
			i=y/8;
			m=y%8;
			n=1<<m;
			OLED_GRAM[x][i]|=n;
		}
	}
	OLED_Refresh();
}


void OLED_ShowTimeNum(u8 x,u8 y,u8 num,u8 size)
{
	u8 i,m,n=0,temp,chr1,size3;float buf;
	u8 x0=x,y0=y;
	buf = ((size/16)+(((size/2)%8)?1:0))*(size/2)/16.0;
	if(buf-(int)buf) 
	buf++;
	size3=buf;
	while(size3--)
	{
		chr1=num*buf+n;
		n++;
			for(i=0;i<16;i++)
			{
				if(size==32)
				temp=Olednum[chr1][i];
				//if(size1==40)
						for(m=0;m<8;m++)
							{
								if(temp&0x01)OLED_DrawPoint(x,y);
								else OLED_ClearPoint(x,y);
								temp>>=1;
								y++;
							}
							x++;
							if((x-x0)==size/2)
							{x=x0;y0=y0+8;}
							y=y0;
			 }
	}
}

/*����  ����ʾ����ȡģ�õ����ַ� */
void OLED_ShowTimeNumtu(u8 x,u8 y,u8 width,u8 height,u8 BMP[])
{
	u8 i,m,temp,bytenum,x0=x,y0=y;
	bytenum = ((height/8)+((height%8)?1:0))*width;
	for(i=0;i<bytenum;i++)
	{
		temp=BMP[i];
		for(m=0;m<8;m++)
		{
			if(temp&0x01)OLED_DrawPoint(x,y);
			else OLED_ClearPoint(x,y);
			temp>>=1;
			y++;
		}
		x++;
		if((x-x0)==width)
		{x=x0;y0=y0+8;}
		y=y0;
	 }
		OLED_Refresh();
}
/*����  ����ʾ�ȴ�wifi���ӽ��� */
void Show_Wait(void)
{
	OLED_ShowString(16,1,(unsigned char *)"Waiting Wifi",16);
	OLED_DrawRect(12,25,114,41);
	OLED_Refresh();
}
/*����  ����ʾ�ȴ�����ʱ���ȡ���� */
void Show_Weather_Wait(void)
{
	OLED_ShowString(16,24,(unsigned char *)"Waiting Weat",16);
	OLED_Refresh();
}
/*����  ����ʾʱ�� */
void Show_Time(void)
{
	if(	lflag.timer_flag)
	{
		if(time.week_buf != time.week)
		{
			Show_week();
		}
		if(time.hou_buf != time.hou)
		{
			OLED_ShowTimeNum(time_x,time_y,time.hou/10,32);
			OLED_ShowTimeNum(16+time_x,time_y,time.hou%10,32);
						OLED_Refresh();
		}	
		if(time.min_buf != time.min)	
		{
			OLED_ShowTimeNum(48+time_x,time_y,time.min/10,32);
			OLED_ShowTimeNum(64+time_x,time_y,time.min%10,32);
						OLED_Refresh();
		}	
			
			lflag.timer_flag = 0;
	}
}
/*����  ����ʾ��һ��ʱ�� */
void Show_frist_time(void)
{
	OLED_Clear();
	delay_ms(6);
	OLED_ShowTimeNum(48+time_x,time_y,time.min/10,32);
	OLED_ShowTimeNum(64+time_x,time_y,time.min%10,32);
	OLED_ShowTimeNum(32+time_x,time_y,10,32);
	OLED_ShowTimeNum(time_x,time_y,time.hou/10,32);
	OLED_ShowTimeNum(16+time_x,time_y,time.hou%10,32);
	OLED_Refresh();
}
/*����  ����ʾ���� */
void Show_weather(void)
{	
	if(lweather.code==0||lweather.code==1)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_qing);OLED_ShowString(45,45,(unsigned char *)"Sunny",12);}
	else if(lweather.code==4)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_yun);OLED_ShowString(45,45,(unsigned char *)"Cloudy",12);}
	else if(lweather.code==5||lweather.code==6||lweather.code==7||lweather.code==8)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_qingyun);OLED_ShowString(45,45,(unsigned char *)"Cloudy",12);}
	else if(lweather.code==9)
	    {OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_yin);OLED_ShowString(45,45,(unsigned char *)"Overcast",12);}
	else if(lweather.code==10)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_zhenyu);OLED_ShowString(45,45,(unsigned char *)"Shower",12);}
	else if(lweather.code==11)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_leizhenyu);OLED_ShowString(45,45,(unsigned char *)"Thunder",12);}
	else if(lweather.code==12)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_binbao);OLED_ShowString(45,45,(unsigned char *)"Hail",12);}
	else if(lweather.code==13||lweather.code==14||lweather.code==15)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_yu);OLED_ShowString(45,45,(unsigned char *)"Rain",12);}
	else if(lweather.code==16||lweather.code==17||lweather.code==18)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_baoyu);OLED_ShowString(45,45,(unsigned char *)"Storm",12);}
	else if(lweather.code==20)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_yujiaxue);OLED_ShowString(45,45,(unsigned char *)"Sleet",12);}
	else if(lweather.code==21)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_zhenxue);OLED_ShowString(45,45,(unsigned char *)"S Snow",12);}
	else if(lweather.code==22||lweather.code==23||lweather.code==24||lweather.code==25)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_xue);OLED_ShowString(45,45,(unsigned char *)"Snow",12);}
	else if(lweather.code==26||lweather.code==27||lweather.code==28||lweather.code==29)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_shachenbao);OLED_ShowString(45,45,(unsigned char *)"Duststorm",12);}
	else if(lweather.code==30||lweather.code==31)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_wumai);OLED_ShowString(45,45,(unsigned char *)"Haze",12);}
	else if(lweather.code==32)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_feng);OLED_ShowString(45,45,(unsigned char *)"Windy",12);}
	else if(lweather.code==33)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_dafeng);OLED_ShowString(45,45,(unsigned char *)"Blustery",12);}		
	else if(lweather.code==34||lweather.code==35||lweather.code==35)
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_jufeng);OLED_ShowString(45,45,(unsigned char *)"Hurricane",12);}		
	else 
		{OLED_ShowTimeNumtu(tu_x,tu_y,40,40,(unsigned char *)gImage_weizhi);OLED_ShowString(45,45,(unsigned char *)"Unknown",12);}	
		
	OLED_ShowString(50,30,(unsigned char *)lweather.country,12);
	OLED_ShowString(73,30,(unsigned char *)lweather.name,12);
	OLED_ShowTimeNumtu(113,45,12,12,(unsigned char *)du);
	OLED_ShowNum(100,45,lweather.temp,2,12);

}
/*����  ����ʾ����*/
void Show_week(void)
{	
	char * weekname[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	OLED_ShowString(0,0,(unsigned char *)weekname[time.week],12);
	OLED_Refresh();
	
}

