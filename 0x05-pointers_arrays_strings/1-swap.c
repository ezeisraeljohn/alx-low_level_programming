#include "main.h"

/**
 * swap_int - Swaps the values of integers
 * @a: first operand
 * @b: second operand
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
