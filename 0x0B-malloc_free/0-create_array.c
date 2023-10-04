#include "main.h"
#include <stdlib.h>

/**
 * create_array - Initializes an array of character
 * with a specific character
 * @size: the size of the array
 * @c: the array
 *
 * Return: Null if size is 0 or returns a pointer to the array
 * or Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);/* returns NULL if malloc fails*/

	for (i = 0; i < size; i++)
	{
		*ptr = c;
		ptr++;
	}
	return (ptr);
	free(ptr);
}
