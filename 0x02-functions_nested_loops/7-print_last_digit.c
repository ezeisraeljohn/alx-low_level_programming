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

	if (a >= 0)
	{
		b = a % 10;
	}
	else if (a = –2147483648)
	{
		b = 8;
	}
	else
	{
		a = -a;
		b = a % 10;
	}
	_putchar(b + '0');
	return (b);
}
