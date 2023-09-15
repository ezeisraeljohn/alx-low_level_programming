#include "main.h"

/**
 * print_line - Prints line in the standard output
 * @n: parameter used
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
