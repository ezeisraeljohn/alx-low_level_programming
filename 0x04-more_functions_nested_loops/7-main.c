#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
void print_diagonal(int n);
int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}
/**
 *  * print_diagonal - the slashes diagonally
 *   *@n: parameter used
 *    *
 *     * Return: void
 *      */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{

		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		if (n > 0)
			putchar('\\');
		else
			putchar('\n');
	}
	putchar('\n');
}
