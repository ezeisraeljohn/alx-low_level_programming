#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, t;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');
		for (t = 1; t <= i; t++)
			_putchar('#');
		_putchar('\n');
	}
	(size <= 0) ? _putchar('\n') : 0;
}
