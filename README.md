# STM32-ESP8266-电子气象时钟  #
> 做这个东西主要是因为在B站上看了很多视频，所以想着自己也来做一个看看。
> 原理也非常的简单，但是第一次做这种带电池的，在功耗方面没有怎么考虑到，算是很大的败笔，还有外壳本身是要3D打印的，但是，懒，就买了积木，没想到....一言难尽，后续有一丢丢可能会完善它。
  

## 硬件方案 ##
以STM32F103C8T6做主控，感觉非常的奢侈了，别问，问就是为了成本，自己做的最小系统板等于不要钱。用esp8266模块从网络上获取时间与天气信息，按键控制300mah锂电池供电，可用充电模块充电。

感觉做这种esp8266项目用STM32做控制，用AT指令固件太浪费了，功耗还高，还是那种直接arduino的好，但是我不会，嘿嘿。


## 软件方案 ##
STM32通过串口发送AT指令控制ESP8266与网站建立透传，通过HTTP协议发送GET请求，获取天气与时间信息，并显示出来，5分钟更新一次信息。



## 实物 ##

![avatar](https://github.com/junwei-lin/STM32_ESP8266_WEATHER/blob/master/F103C8T6_ESP8266_Weather/WEATHER.JPG)

## 使用说明： ##
因为没有使用配网所以换了wifi环境的话需要进入esp8266.c对wifi名称与密码进行修改。

但机智的我觉得，你大概都不记得家里的wifi密码，这里教你一招。
搜索栏输入cmd打开控制台。

输入netsh wlan show profiles name=你的wifi名 key=clear
出来的关键信息就是你的WiFi密码。(●'◡'●)