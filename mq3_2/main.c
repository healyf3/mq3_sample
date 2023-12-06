#include <atmel_start.h>
#include <stdio.h>

static FILE mystdout = FDEV_SETUP_STREAM(USART_0_write, NULL, _FDEV_SETUP_WRITE);


int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

    int a = 0;
    stdout = &mystdout;
    
   // static FILE mystdout = FDEV_SETUP_STREAM(USART_0_write, NULL, _FDEV_SETUP_WRITE);


    
	/* Replace with your application code */
	while (1) {
       //
       
        a = ADC_0_get_conversion(5);
        printf("mq3 val: %d\n\r", a);
       // USART_0_write('hello');
       // USART_0_test_usart_basic();
    }        
}
