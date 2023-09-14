#include "main.h"

/**
 * jack_bauer - Prints all hours in the day
 *
 * Return: Will print out the hours
 */
void jack_bauer(void)
{
	int hours;
	int minutes;
	
	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + minutes / 10);
			_putchar('0' + minutes % 10);
			_putchar('\n');
		}

	}
}
