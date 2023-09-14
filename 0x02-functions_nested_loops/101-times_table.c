#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Print multiples table
 * @n: The number to be used
 *
 * Return: the multiple table
 */
void print_times_table(int n)
{
	if ((n >= 0) && (n <= 15))
	{
		int i;
		int j;
		int table;

		for (i = 0; i < n i++)
		{
			for (j = 0; j < n j++)
			{
				table = i * j;
				if (j == 0)
					printf("%d", table);
				else
					printf(", %d", table);
			}
		}
	}
}
			


