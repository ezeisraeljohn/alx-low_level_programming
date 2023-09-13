#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints to 98
 * @n: the parameter needed
 *
 * Return: the output
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
}


