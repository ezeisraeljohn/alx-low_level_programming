#include "main.h"

/**
 * print_sign - checks for positive numbers
 * @n: operand
 *
 * Return: d
 */
int print_sign(int n)
{
	int d;
	
	if (n > 0)
	{
		d = 1;
		_putchar('+');
		return (d);
	}
	else if (n == 0)
	{
		d = 0;
		_putchar('0');
		return (d);
	}
	else
	{
		d = -1;
		_putchar('-');
		return (d);
	}
}
