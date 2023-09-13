#include "main.h"

/**
 * _islower - This function detects lower case key
 *
 * Return: b
 */
int _islower(int c)
{
	char b;

	if((c >= 'a') && (c <= 'z'))
		b = 0;
	else
		b = 1;
	return b;
}
