#include "main.h"

/**
 * print_diagonal - the slashes diagonally
 *@n: parameter used
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		if (n > 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
