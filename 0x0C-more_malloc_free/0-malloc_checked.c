#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory location
 *
 * Return: return pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *create_memory;

	create_memory = malloc(b);
	if (create_memory == NULL)
		exit(98);
	return (create_memory);
}
