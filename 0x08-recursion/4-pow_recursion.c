#include "main.h"
/**
 * _pow_recursion - Returns the power of a number
 * @x: The value to be raised
 * @y: The power in which it will be raised
 *
 * Return: The value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
