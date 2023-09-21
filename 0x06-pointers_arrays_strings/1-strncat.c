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
	int length;
	int i;

	for (length = 0; dest[length] != '\0'; length++)
		;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[length + i] = src[i];
	dest[length + i] = '\0';

	return (dest);
}
