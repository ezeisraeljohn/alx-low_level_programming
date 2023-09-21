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
	int count;

	count = 0;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}	
	for (j = 0; src[j] != '\0'; j++)
		dest[count] = src[j];
	dest[count] = '\0';
	return (dest);
}

