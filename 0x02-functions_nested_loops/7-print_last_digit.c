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
	int c;

	c = a < 0 ? -a : a;
	b = c % 10;
	_putchar(b + '0');
	return (b);
}
