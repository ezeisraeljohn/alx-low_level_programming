#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatinates string with a
 * given number of bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of string 2
 *
 * Return: the number of bytes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strnconcat;
	unsigned int str1_len, str2_len, length, i, j;

	str1_len = strlen(s1);
	str2_len = strlen(s2);
	length = str1_len + str2_len;
	strnconcat = malloc(length + 1);
	if (strnconcat == NULL)
		return (NULL);/* return NULL if the function fails*/

	/*if NULL is passed, treat it as an empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*if n is greater or equal to s2 then use all of s2 */
	for (i = 0; i < str1_len; i++)
		strnconcat[i] = s1[i];
	if (n >= str2_len)
	{
		for (j = 0; j < str2_len; j++)
			strnconcat[i + j] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++)
			strnconcat[i + j] = s2[j];
	}
	return (strnconcat);
}
