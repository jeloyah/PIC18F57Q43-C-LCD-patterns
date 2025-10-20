
#include <xc.h>
#include "ioc.h"

void IOC_Initialize(void)
{
    /* Clear the bit IOCIF by clearing all bits in IOCxF register  */
    IOCCF = 0x00; 
        
    /* Interrupt-on-change enabled */
    /* PIE0 = 0x80; */
    PIE0bits.IOCIE = 1;

    /* Interrupt on change enabled on RC7 (falling edge) */
    /* IOCCN = 0x80;     */
    IOCCNbits.IOCCN7 = 1;
}

void __interrupt(__irq(IRQ_IOC)) IOC_ISR(void) 
{                
        /* Clear the bit IOCIF by clearing all bits in IOCxF register  */
        IOCCF = 0x00; 
        
        /* Check if RC7 = 0 */
        /* if ((PORTC&0x80) == 0x00) */
        if (PORTCbits.RC7 == 0)
        {
         /* Hard coded reset, since pin MCLR(RE3) is used by debugger */   
         RESET();
        }
            
}


