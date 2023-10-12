#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all its parameters
 * arguements that is contained
 *@number: This specifies the starting point of the elipsis
 *
 * Return: Return the sum of the arguements
 */

int sum_them_all(const unsigned int number, ...)
{
	unsigned int i;
	va_list args;
	int sum = 0;
	int x;

	if (number == 0)
		return (0);
	va_start(args, number);
	for (i = 0; i < number; i++)
	{
	x = va_arg(args, int);
	sum += x;
	}
	va_end(args);
	return (sum);
}
