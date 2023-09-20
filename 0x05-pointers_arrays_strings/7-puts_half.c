#include "main.h"

/**
 * puts_half - Prints half of the string
 * @str: operand used
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i;
	int count;
	int half;
	int j;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
		count++;

	/* Calculate the starting index for the second half*/
	half = (count + 1) / 2;
	for (j = half; str[j] != '\0'; j++)
		_putchar(str[j]);

	_putchar('\n');
}

