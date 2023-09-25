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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
