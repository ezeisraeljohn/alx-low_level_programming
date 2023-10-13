#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - This function prints everything passed to it
 * @format: pointer to the print specifier
 *
 * Return: Nothing
 */
int print_format(char n);
void print_all(const char * const format, ...)
{
	int i, len_starter, int_num;
	int check_for_print;
	double f_num;
	char cha;
	char *cha_ptr;
	va_list args;

	va_start(args, format);
	len_starter = strlen(format);
	i = 0;

	while (i < len_starter)
	{
		check_for_print = print_format(format[i]);
		switch (format[i])
		{
		case 'c':
			cha = va_arg(args, int);
			printf("%c", cha);
			break;
		case 'i':
			int_num = va_arg(args, int);
			printf("%d", int_num);
			break;
		case 'f':
			f_num = va_arg(args, double);
			printf("%f", f_num);
			break;

		case 's':
			cha_ptr = va_arg(args, char *);
			if (cha_ptr == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", cha_ptr);
			break;
		}
		if ((i != len_starter - 1) && check_for_print)
		printf(", ");
		i++;
	}
	printf("\n");
}

/**
 * print_format - adds comma and space before printing
 * next string or character etc
 * @n: character to check
 *
 * Return: 1 if true or 0 if false
 *
 */
int print_format(char n)
{
	if (n == 'c' || n == 'f' || n == 's' || n == 'i')
		return (1);
	else
		return (0);
}
