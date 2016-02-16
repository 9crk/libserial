#ifndef _LIBSERIAL_H
#define _LIBSERIAL_H
int UART0_Open(char* port);
void UART0_Close(int fd);
int UART0_Init(int fd, int speed);
int UART0_Recv(int fd, char *rcv_buf,int data_len);
int UART0_Send(int fd, char *send_buf,int data_len);

#endif
