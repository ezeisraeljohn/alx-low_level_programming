#include "main.h"

/**
 * puts2 - Skips one character and prints the next
 * @str: The operand used
 *
 * Return: Nothing;
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
