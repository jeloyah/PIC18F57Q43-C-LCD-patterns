
#include <xc.h>
#include "gpio.h"

void PortA_Initialize(void)
{
    /* Clear register */
    LATA = 0x00;
    
    /* RA0 as analog input, RA7:RA1 as digital I/O */
    ANSELA = 0x00;
    
    /* Disable Rpull-ups */
    WPUA = 0x00;
        
    /* RA7:RA1 as outputs, RA1 as input */
    TRISA = 0x00;
}

void PortB_Initialize(void)
{
    /* Clear register */
    LATB = 0x00;
    
    /* Pins as digital I/O */
    ANSELB = 0x00;
    
    /* Rpull-ups */
    WPUB = 0x10;
        
    /* Config inputs / outputs */
    TRISB = 0x10;
}

void PortC_Initialize(void)
{
    /* Clear register */
    LATC = 0x00;
    
    /* Pins as digital I/O */
    ANSELC = 0x00;
    
    /* Rpull-ups */
    WPUC = 0x00;
        
    /* Config inputs / outputs */
    TRISC = 0x00;
}
    
void PortD_Initialize(void)
{
    /* Clear register */
    LATD = 0x00;
    
    /* Pins as digital I/O */
    ANSELD = 0x00;
    
    /* Rpull-ups */
    WPUD = 0x00;
        
    /* Config inputs / outputs */
    TRISD = 0x00;
}
    
void PortE_Initialize(void)
{
    /* Clear register */
    LATE = 0x00;
    
    /* Pins as digital I/O */
    ANSELE = 0x00;
    
    /* Rpull-ups */
    WPUE = 0x00;
        
    /* Config inputs / outputs */
    TRISE = 0x00;
}    

void PortF_Initialize(void)
{
    /* Clear register */
    LATF = 0x00;
    
    /* Pins as digital I/O */
    ANSELF = 0x00;
    
    /* Rpull-ups */
    WPUF = 0x00;
        
    /* Config inputs / outputs */
    TRISF = 0x00;
}
