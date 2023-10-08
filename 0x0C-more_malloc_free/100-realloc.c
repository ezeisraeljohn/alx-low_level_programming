#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: A pointer to the memory block to be reallocated
 * @old_size: The size in byte of the previously allocated
 * memory (using malloc)
 * @new_size: The desired new size in bytes for the 
 * reallocated memory
 *
 * Return pointer to the reallocated memory or NULL 
 * for error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
		return (malloc(new_size));
	
	if(new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
