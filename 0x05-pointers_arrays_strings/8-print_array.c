#include "main.h"
#include <stdio.h>

/**
 * print_array - This prints elements of an array
 * @a: first operand
 * @n: second operand
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{	printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
	_putchar('\n');
}
