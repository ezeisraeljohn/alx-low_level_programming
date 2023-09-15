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
			printf(" ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	return (0);
}
