#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: Operand
 *
 * Return: b
 */
int _isalpha(int c)
{
	char b;

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		b = 1;
	else
		b = 0;
	return (b);
}
