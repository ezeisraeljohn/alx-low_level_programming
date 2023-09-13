#include "main.h"

/**
 * print_to_98 - Prints to 98
 * @n: the parameter needed
 *
 * Return: the output
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 99)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else
	{
		while (n < 99)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
}


