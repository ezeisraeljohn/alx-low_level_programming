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

	b = a % 10;
	_putchar(b + '0');
	return (b);
}
