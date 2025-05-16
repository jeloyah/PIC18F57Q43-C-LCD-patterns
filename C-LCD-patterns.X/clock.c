
#include <xc.h>
#include "clock.h"

void CLOCK_Initialize(void)
{
	/* HFINTOSC enabled */
    OSCEN = 0x40;
    
    /* HFINTOSC = 16 MHz */
	OSCFRQ = 0x05;
    
    /* Clock source = HFINTOSC, Clock Divider = 0 */
    OSCCON1 = 0x60;
}
