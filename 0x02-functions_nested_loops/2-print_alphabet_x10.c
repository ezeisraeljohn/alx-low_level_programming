#include "main.h"

/**
 * print_alphabet_x10 - Prints all lowercase alphabets
 * 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	i = '0';
	j = 'a'

	while (i <= '9')
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++
		}
		_putchar('\n');
		i++
	}
}
