#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
