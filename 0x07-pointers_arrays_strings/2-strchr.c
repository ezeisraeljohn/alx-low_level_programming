#include "main.h"
#include <stddef.h>

/**
 * _strchr - Returns a pointer to the first occurence
 * of c in the string s
 * @s: The string considered
 * @c: The character looked for
 *
 * Return: the character considered
 */
char *_strchr(char *s, char c)
{
	/* loops that checks for presence of character */
	while (*s)
	{
		if (*s == c)
			return (s);
		if (*s != c)
			return (NULL);
		s++;
	}
	return (NULL);
}
