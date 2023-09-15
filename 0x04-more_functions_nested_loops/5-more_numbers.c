#include "main.h"

/**
 * more_numbers - prints numbers from 1 to 14
 * 10 times
 *
 * Return: void
 */
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
				_putchar ((j / 10 ) + '0');

				_putchar ((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
