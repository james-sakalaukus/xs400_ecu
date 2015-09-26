/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/
#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

#include <plib.h>
#include <delays.h>
#include <adc.h>
#include <string.h>

#include "pic18f26k80.h"
#include "configuration_bits.h"
#include "system.h"
#include "user.h"

/******************************************************************************/
/* Function Prototypes                                                        */
/******************************************************************************/



void setLcdBaud(void);
void clearScreen(void);

void writeDisplay();


/******************************************************************************/
/* User Global Variable Declaration                                           */
/******************************************************************************/


/******************************************************************************/
/* Main Program                                                               */
/******************************************************************************/

void main(void)
{
  // Configure the oscillator for the device
  ConfigureOscillator();

  // Initialize I/O and Peripherals for application
  InitApp();

  printf("\r\n\r\nOscillator and Peripherals initialized!\r\n");


  while(1) {
    

    if(unhandledIRQ == 1) {
      printf("A high priority IRQ was ignored\n");
      unhandledIRQ = 0;
    } else if(unhandledIRQ == 2) {
      printf("A low priority IRQ was ignored\n");
      unhandledIRQ = 0;
    }
  }
}
