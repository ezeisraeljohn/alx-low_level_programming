#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - This prints strings
 * @number: The number of strings passed
 * @separator: seperates strings
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int number, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, number);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < number; i++)
	{
		str = va_arg(args, char *);
		printf("%s", (str == NULL) ? "(nil)" : str);
		if ((i != (number - 1) && (separator != NULL)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
