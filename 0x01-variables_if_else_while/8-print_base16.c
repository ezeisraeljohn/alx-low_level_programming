#include <stdio.h>

/**
 * main - Outputs All Hexadecimal Degits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= 'f'; i++)
	{
		if (((i >= '0') && (i <= '9')) || ((i >= 'a') && (i <= 'f')))
			putchar(i);
		else
			continue;
	}
	putchar('\n');
	return (0);
}
