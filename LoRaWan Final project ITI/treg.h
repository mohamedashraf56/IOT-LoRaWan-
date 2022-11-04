/*
 * treg.h
 *
 *  Created on: Aug 9, 2022
 *      Author: Nasser
 */

#ifndef TREG_H_
#define TREG_H_

#define TCCR0 *((uint8*)(0x53))
#define TIFR *((uint8*)(0x58))
#define TCNT0 *((uint8*)(0x52))
#define OCR0 *((uint8*)(0x5C))
#define TIMSK *((uint8*)(0x59))
#define SREG *((uint8*)(0x5F))




#endif /* TREG_H_ */
