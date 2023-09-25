#include "main.h"

/**
 * _strspn - Returns the number of byte of the string present
 * @s: pointer to the distination string
 * @accept: pointer to the second string
 *
 * Return the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 1;

	while (*s)
	{
		while (*s && *accept)
		{
			if (*s == *accept)
			{
				i++;
			accept++;
			}
			s++;
		}
		s++;
	}
	return (i);
}
