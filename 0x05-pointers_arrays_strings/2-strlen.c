#include "main.h"

/**
 * _strlen - Counts the length of a string
 * @s: the operand used
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;
	int count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
