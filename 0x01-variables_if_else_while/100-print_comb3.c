#include <stdio.h>

/**
 * main - Prints all double combo of digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	/* Loop for the digits */
	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
			}
			if ((i != '8') && (j != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}

