#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main Entry - point
 *
 * Description: 'This takes random numbers, give output'
 *
 * Return: Always 0 (Success)
 */

/**
 *main-This outputs the result of n
 */
int main(void)
{
/*This function, outputs the result of random numbers*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
