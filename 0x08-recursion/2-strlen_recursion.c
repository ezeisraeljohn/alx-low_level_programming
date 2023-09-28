#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: the character array used
 *
 * Return: returns the calculated length
 */
int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s == '\0')
	{
		return 0;
	}
	else
	{
		return ((count + _strlen_recursion(s + 1)));
	}
}
