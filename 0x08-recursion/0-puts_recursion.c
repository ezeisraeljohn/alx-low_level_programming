#include "main.h"

/**
 * _puts_recursion - This function prints out a string
 * followed by a new line
 * @s: string array to be printed
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
