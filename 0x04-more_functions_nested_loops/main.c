#include "stdio.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
void print_most_numbers(void);
int main(void)
{
	print_most_numbers();
	return (0);
}
/**
 *  * print_most_numbers - prints out all the numbers
 *   * except 2 and 4
 *    *
 *     * Return: void
 *      */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i == '2') || (i == '4'))
			continue;
		else
			putchar(i);
		putchar('\n');
	}
}
