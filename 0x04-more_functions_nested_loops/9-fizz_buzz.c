#include <stdio.h>

/**
 * main - Prints out fizz and buzz
 * for multiples of 3 and 5 respectively
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
			if (i < 100)
				printf(" ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			if (i < 100)
				printf(" ");
		}
		else
		{
			printf("%d", i);
			if (i < 100)
				printf(" ");
		}
	}
	printf("\n");
	return (0);
}
