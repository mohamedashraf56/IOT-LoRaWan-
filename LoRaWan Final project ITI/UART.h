/*
 * UART.h
 *
 *  Created on: Aug 9, 2022
 *      Author: Nasser
 */

#ifndef UART_H_
#define UART_H_



int UART_VIDint(void);
void UART_send_char(uint8 data);
uint8 UART_U8recievechar(void);
void UART_send_string(char *arr);
void UART_recieve_string(void);
int Uart_Transmit (uint8* Data, uint8 len);
void Uart_Receive_with_recieve_interrupt (uint8* Data, uint8 Len);
void Uart_Receive_with_NO_recieve_interrupt (uint8* Data, uint8 Len);


#endif /* UART_H_ */
