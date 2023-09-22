#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int j;

	if (n < 0)
	{
		_putchar('-');
		j = -n;
	}
	else
		j = n;
	if (j / 10)
		print_number(j / 10);
	_putchar(j % 10 + '0');
}
