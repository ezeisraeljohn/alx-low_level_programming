#include "main.h"
/**
 * _memcpy - Copies byte from source to
 * destination
 * @dest: Desination memory area
 * @src: Source memory area
 * @n: number of bytes to be copied
 *
 * Return: The copied memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	char *original_dest = dest;

	while (n--)
		*dest++ = *src++;

	return (original_dest);
}
