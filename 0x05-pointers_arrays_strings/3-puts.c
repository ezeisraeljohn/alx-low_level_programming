#include "main.h"

/**
 * 3-puts: This prints out string to the
 * standard output
 * @str: Operand to use
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;
	int print;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
