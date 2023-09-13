#include "main.h"

/**
 * _islower - This function detects lower case key
 * @c: operand for the function
 *
 * Return: 0 for lowercase and 1 for uppercase
 */
int _islower(int c)
{
	char b;

	if ((c >= 'a') && (c <= 'z'))
		b = 1;
	else
		b = 0;
	return (b);
}
