#include <lpc214x.h>

void delay();
void main(void)
{
	IO0DIR |= (1<<9) | (1<<10) | (1<<11) | (1<<12) | (1<<13) | (1<<14) | (1<<15) | (1<<16); //Setting as output ports 9 to 16
	while(1)
	{
		while(1)
		{
		for(unsigned int i = 100; i<256;i++)
		{
			IOSET0 |= i; // Setting the pin to i
			delay(); 		// Waiting some time with below function.
			IOCLR0  |= ~(i); // Clearing the pin of the i
		}
		}
	}
	
}

void delay()
{
	for(unsigned int i = 0;i<30000;i++);
}