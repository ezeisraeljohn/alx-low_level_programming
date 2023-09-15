#include "main.h"

/**
 * print_triangle - Prints triangle
 * with hastags
 * @size: parameter
 *
 * Return: the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int i = 1; i <= size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
