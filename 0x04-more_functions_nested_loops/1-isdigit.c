#include "main.h"

/**
 * _isdigit - Checks if a number is a digit or not
 * @c: parameter used
 *
 * Return: 1 if digit of 0 if not
 */
int _isdigit(int c);
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

