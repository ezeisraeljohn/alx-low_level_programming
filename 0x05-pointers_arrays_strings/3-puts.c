#include "main.h"

/**
 * _puts: This prints out string to the
 * standard output
 * @str: Operand to use
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
