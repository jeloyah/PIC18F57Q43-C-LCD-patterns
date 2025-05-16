
#include <xc.h>
#include "main.h"
#include "clock.h"
#include "gpio.h"
#include "timer0.h"
#include "lcd.h"
#include "ioc.h"


void main(void) {
    
    /* System Clock Initialization */
	CLOCK_Initialize();
    
    /* Config PortA */
    PortA_Initialize();
    
    /* Config PortB */
    PortB_Initialize();

    /* Config PortC */
    PortC_Initialize();
    
    /* Config PortD */
    PortD_Initialize();
    
    /* Config PortE */
    PortE_Initialize();
    
    /* Config PortF */
    PortF_Initialize();
    
    /* Config Timer0 */
    TIMER0_Initialize();
    
    /* Config IOC */
    IOC_Initialize();
        
    /* Enable interrupts */
    ei();
       
    /* Config LCD */
    LCD_Initialize();
    
    /* Store new characters on LCD memory */
    LCD_writeCGRAM();
    
    LCD_CLEAR_DISPLAY();
        
    /* infinite loop */
    while(1)
    {
        
        /* Row 1, column 1 */
        LCD_LOCATE(1,1);
        /* Display character stored in address 0x00*/
        LCD_printchar(0x00);        
        
        /* Row 1, column 3 */
        LCD_LOCATE(1,3);
        /* Display character stored in address 0x01*/
        LCD_printchar(0x01);
        
        /* Row 1, column 5 */
        LCD_LOCATE(1,5);
        /* Display character stored in address 0x02*/
        LCD_printchar(0x02);
        
        /* Row 1, column 7 */
        LCD_LOCATE(1,7);
        /* Display character stored in address 0x03*/
        LCD_printchar(0x03);
        
        /* Row 1, column 9 */
        LCD_LOCATE(1,9);
        /* Display character stored in address 0x04*/
        LCD_printchar(0x04);
        
        /* Row 1, column 11 */
        LCD_LOCATE(1,11);
        /* Display character stored in address 0x05*/
        LCD_printchar(0x05);
        
        /* Row 1, column 13 */
        LCD_LOCATE(1,13);
        /* Display character stored in address 0x06*/
        LCD_printchar(0x06);
        
        /* Row 1, column 15 */
        LCD_LOCATE(1,15);
        /* Display character stored in address 0x07*/
        LCD_printchar(0x07);  
        
		/* Row 2, column 1 */
        LCD_LOCATE(2,3);
              
        /* Print a string of characters (must end with \n) */
	    LCD_printstring("**18F57Q43**\n");      
        
      
              
     } /* while */
        
    
    return;
} /* main*/