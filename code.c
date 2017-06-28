#define  F_CPU 16000000
#include <avr/io.h>
int main(void)
{
   DDRC=0xff;
   DDRB=0x00;
   char x;
    while (1) 
    {
x=PINB&0b00001111; //masking  upper 4 bits
if (x==0b00000010) // check if 2 is pressed
{
PORTC=0b00001010;  } // bot will move forward
else if (x==0b00000100) //  check if 4 is pressed
{
PORTC=0b00000010; 
} // bot will turn left
else if (x==0b00000110) // check if 6 is pressed
{
PORTC=0b00001000;
} // bot will turn right
else if (x==0b00001000) // check if 8 is pressed
{
PORTC=0b00000101;
} // bot will move back
else if (x==0b00000101) // check if 5 is pressed
{
PORTC=0b00000000;
} // bot will stop
    }
}
