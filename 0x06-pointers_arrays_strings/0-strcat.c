#include "main.h"

/**
 * _strncat - This concatenates two strings
 * @dest: First operand
 * @src: Second operand
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int length;
	int i;

	for (length = 0; dest[length] != '\0'; length++)
		;
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[length + i] = src[i];
	dest[length + i] = '\0';

	return (dest);
}
