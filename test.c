#include <avr/io.h>
#include <util/delay.h>

// Bit manipulation macros
#define sbi(a, b) ((a) |= 1 << (b))       //sets bit B in variable A
#define cbi(a, b) ((a) &= ~(1 << (b)))    //clears bit B in variable A
#define tbi(a, b) ((a) ^= 1 << (b))       //toggles bit B in variable A

void setup(void)
{
    // Set up on board LED output
    DDRB |= (1<<PB5);
}

int main(void)
{
    setup();

    for(;;)
    {
        sbi(PORTB, 5);
        _delay_ms(250);
        cbi(PORTB, 5);
        _delay_ms(250);
    }

    return 0;
}
