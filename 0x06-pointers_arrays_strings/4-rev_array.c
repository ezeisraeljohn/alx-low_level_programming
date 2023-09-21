#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses content of an array
 * @a: array in question
 * @n: The number of arrays
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i != (n - 1))
			printf(", ");
		printf("%d", a[i]);
	}
	_putchar('\n');
}
