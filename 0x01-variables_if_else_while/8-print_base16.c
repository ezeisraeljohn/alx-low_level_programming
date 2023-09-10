#include <stdio.h>

/**
 * main - Outputs All Hexadecimal Degits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for(i = '0'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
