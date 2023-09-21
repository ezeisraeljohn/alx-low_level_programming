#include "main.h"

/**
 * _strcat - This concatinates strings
 * @dest: First parameter string
 * @src: Second parameter string
 *
 * Return: Concatinated strings
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	for (; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}

