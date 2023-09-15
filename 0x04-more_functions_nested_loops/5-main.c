#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
void more_numbers(void);
int main(void)
{
	more_numbers();
	return (0);
}
/**
 *  * more_numbers - prints numbers from 1 to 14
 *   * 10 times
 *    *
 *     * Return: void
 *      */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if ((j > 9))
			{
				putchar((j % 10) + '0');
			}
			else
			{
				putchar(j + '0');
			}
		}
		putchar('\n');
	}
}
