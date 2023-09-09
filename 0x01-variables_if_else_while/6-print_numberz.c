#include <stdio.h>
/**
 * main - Prints integer with putchar
 *
 * Remain: Always 0 (Success)
 */
int main(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
		putchar(i+'0');
	putchar('\n');
	return (0);
}
