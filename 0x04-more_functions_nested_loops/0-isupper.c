#include "main.h"

/**
 * _isupper - Returns 1 if the value is uppercase
 * @c: operand to check
 *
 * Return: 1
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
