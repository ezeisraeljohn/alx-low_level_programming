#include "main.h"
#include <stddef.h>

/**
 * inCharSet - checks if a character is in a set of characters
 * @c: character to be checked
 * @accept: string containing the characters to match
 * Return: 1 if c is in accept, 0 otherwise
 */
int inCharSet(char c, char *accept)
{
	int j = 0;

	while (accept[j])
		if (c == accept[j++])
			return (1);
	return (0);
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (s[j])
		if (inCharSet(s[j++], accept))
			return (s + j - 1);
	return (NULL);
}
