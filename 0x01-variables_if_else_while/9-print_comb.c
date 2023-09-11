#include <stdio.h>

/**
 * main - Prints all possible combo of digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
