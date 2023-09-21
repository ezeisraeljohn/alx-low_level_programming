#include "main.h"

/**
 * _strcmp - This function compares strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: positive, negative or zero
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;

	for (; s1[i]; i++)
		;
	for (; s2[j]; j++)
		;
	if (i < j)
		return (-15);
	else if (i == j)
		return (0);
	else
		return (15);
}
