#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates strings
 * @s1: this is the first string
 * @s2: this is the second string
 *
 * Return: Return pointer to a memory containing
 * the contents of s1 and s2 and null terminated
 * when it is successful els return  Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, t, length, j, x;
	char *str_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	length = i + j;
	str_concat = (char *)malloc(length + 1);
	if (str_concat == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		str_concat[x] = s1[x];
	for(t = 0; s2[t] != '\0'; t++)
		str_concat[x + t] = s2[t];

	*(str_concat + length) = '\0';
	return (str_concat);
}
