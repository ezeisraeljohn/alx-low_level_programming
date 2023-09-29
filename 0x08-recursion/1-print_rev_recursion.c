#include "main.h"

/**
 * _print_rev_recursion - This prints a string in reverse
 * @s: the character array to use
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
