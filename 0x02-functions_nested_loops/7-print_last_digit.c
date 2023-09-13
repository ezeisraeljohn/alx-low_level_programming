#include "main.h"

/**
 * print_last_digit - This function prints
 * the last digit
 * @a: The operand
 *
 * Return: return the last number
 */
int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
		a = -a;
		b = a % 10;
	}
	else if (a == INT_MAX)
	{
		b = 8;
	}
	else
	{
		b = a % 10;
	}
	_putchar(b + '0');
	return (b);
}
