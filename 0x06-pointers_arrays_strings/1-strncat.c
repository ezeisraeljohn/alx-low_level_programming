#include "main.h"

/**
 * _strncat - This concatenates two strings
 * @dest: First operand
 * @src: Second operand
 * @n: Third operand
 *
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[i];
	dest[i + j] = '\0';

	return (dest);
}

