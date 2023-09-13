#include "main.h"

/**
 * print_sign - checks for positive numbers
 * @n: operand
 *
 * Return: b
 */
int print_sign(int n)
{
	int b;

	if (n > 0)
	{
		b = 1;
		_putchar('+');
		return (b);
	}
	else if (n == 0)
	{
		b = 0;
		_putchar('0');
		return (b);
	}
	else
	{
		b = -1;
		_putchar('-');
		return (b);
	}
}
