#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

    int a = 0;
    
	/* Replace with your application code */
	while (1) {
        a = ADC_0_get_conversion(5);
    }        
}
