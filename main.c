
#include <avr/io.h>
#include <util/delay.h>
#include "UART/uart.h"

char d = 'h'   ;
// g³ówna funkcja programu - main()

int main( void )
 {
	uart_Init(__UBRR);
// sekcja inicjalizacji peryferiów

// g³ówna pêtla programu
    while(1) {
     if(d!='d')d = uart_getc();
  if(d=='d'){
  uart_putc(d);  }

   uart_puts("pp");
  _delay_ms(1000);
  uart_putint(1234);
    }

}