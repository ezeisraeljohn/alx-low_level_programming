#include "main.h"

/**
 * print_rev - Prints string in reverse
 * @s: operand used
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;
	int j;
	int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (j = count - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
