#include<stdio.h>
#include<string.h>
//#include"libserial.h"
extern int UART0_Open(char* port);
extern void UART0_Close(int fd);
extern int UART0_Init(int fd, int speed);
extern int UART0_Recv(int fd, char *rcv_buf,int data_len);
extern int UART0_Send(int fd, char *send_buf,int data_len);

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
