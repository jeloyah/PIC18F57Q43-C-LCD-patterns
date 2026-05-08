#include <xc.h>
#include "timer1.h"

/* Config Timer1 */
void TIMER1_Initialize(void)
{
	/* Timer1 disabled; 16-bit R/W; asynchronous; prescaler=1:1 */
	T1CON = 0x04;
    
    /* HFINTOSC as source clock */
	T1CLK = 0x03;   
    
    /* Reload TMR1 value */
    TMR1 = 0x0000;
}

void TIMER1_Delay_ms(unsigned short Time)
{
       
    /* Timer1 enabled */
	T1CON |= 0x01; 
    
    while (Time != 0x00)
    {
    
        /* Wait for TMR1IF = 1 */
        while ((PIR3 & 0x10) != 0x10)
              ;
        
        /* Decrement Time variable */
        Time-=1;
        
        /* Clear TMR1IF bit */
        PIR3 &= 0xEF;
             
        /* Reload TMR1 value */
        TMR1 = 0x0000;
        
    }
    
    /* Timer1 disabled */
	T1CON &= 0xFE;
}