#include "main.h"

/**
 * _abs - Prints the absolute value of a number
 * @b: value to be checked
 *
 * Return: b
 */
int _abs(int a)
{
	int b;

	if (a > 0)
	{
		b = -1 * a;
		return (b);
	}
	else
	{
		b = a;
		return (b);
	}
}
	
