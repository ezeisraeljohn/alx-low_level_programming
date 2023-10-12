#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * print_numbers - This prints numbers
 * @separator: string to seperate each number
 * @number: The numbers to be printed out
 *
 * Description - This is a variadic function
 * That takes in a number of integer arguements (number)
 * ane prints out each number seperated by the string
 * (seperator)
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int number, ...)
{
	unsigned int i, j, sep_len, num;
	va_list args;

	va_start(args, number);
	sep_len = strlen(separator);

	for (i = 0; i < number; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		for (j = 0; j < sep_len; j++)
		{
			if (i != (number - 1) && separator != NULL)
				printf("%c", separator[j]);
		}
	}
	printf("\n");
	va_end(args);
}
