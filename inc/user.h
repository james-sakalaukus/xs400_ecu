#ifndef USER_H
#define USER_H

#include <xc.h>             /* XC8 General Include File */
#include <stdint.h>         /* For uint8_t definition */

#include "system.h"
#include "pic18f26k80.h"

#include <adc.h>

/******************************************************************************/
/* User Level #define Macros                                                  */
/******************************************************************************/
#define heartbeat LATCbits.LATC3
#define heartbeatTris TRISCbits.TRISC3

// Digital Signals
#define coilA LATAbits.LATA7
#define coilB LATAbits.LATA6

#define leftTurn LATCbits.LATC1
#define rightTurn LATCbits.LATC2

#define injectA LATCbits.LATC7
#define injectB LATCbits.LATC6

#define fuelPump LATCbits.LATC5

#define lightsOn LATCbits.LATC4

// Analog Signal ADC Channels
#define mapSensorChannel ADC_CH0
#define o2AChannel ADC_CH1
#define o2BChannel ADC_CH2
#define tpsChannel ADC_CH8
#define matChannel ADC_CH9

// Interrupts
#define tachIrq1 LATBbits.LATB2
#define tachIrq2 LATBbits.LATB3

#define DelayUs(dly_us) __delay_us(dly_us)

/******************************************************************************/
/* Global Variables                                                           */
/******************************************************************************/
volatile uint8_t uart1CharacterReceived;
volatile uint8_t uart2CharacterReceived;
volatile uint8_t unhandledIRQ;
volatile uint8_t receivedCharacter;

/******************************************************************************/
/* User Function Prototypes                                                   */
/******************************************************************************/
void putch(uint8_t data);
void InitApp(void);
void delay();
void doHeartBeat();
void DelayMs(uint32_t dly_ms);


#endif
