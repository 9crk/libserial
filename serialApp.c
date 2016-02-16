#include<stdio.h>
#include<string.h>
#include"libserial.h"

int main(int argc,char* argv[])
{
	int len,fd;
	char buff[20];
	int handle = UART_Open("/dev/ttyAM1");
	UART_Init(fd,115200);
	while(1){
		memset(buff,0,20);
		len = UART_Recv(fd,buff,10);
		UART_Send(fd,buff,len);
	}
	UART_Close(fd);
} 
