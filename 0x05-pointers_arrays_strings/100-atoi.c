#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: operand to convert
 *
 * Return: the converted string
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	for (; *s; s++)
	{
		if (*s == '-')
			sign = -1;
		else if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0');
		else if (result > 0)
			break;
	}

	return (sign * result);
}

