#include <stdlib.h>
#include <string.h>

/**
 * _memcpy - This copies the content of the previous
 * memory to the new memory
 * @dest: destination memeory
 * @src: source memroy
 * @n: The size to copy
 *
 * Return: pointer to the new memory
 */
void *_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int i;
	char *destination = dest;
	const char *source = (const char *) src;

	for (i = 0; i < n; i++)
		*(destination + i) = *(source + i);
	return (dest);
}
/**
 * _realloc - reallocates memory block
 * @ptr: A pointer to the memory block to be reallocated
 * @old_size: The size in byte of the previously allocated
 * memory (using malloc)
 * @new_size: The desired new size in bytes for the
 * reallocated memory
 *
 * Return: pointer to the reallocated memory or NULL
 * for error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *realloc;
	unsigned int size;

	size = new_size > old_size ? old_size : new_size;

	realloc = malloc(new_size);

	if (realloc == NULL)
		return (NULL);

	if (ptr == NULL)
		return (malloc(new_size));/*return the new memory if old memory is null */

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);/*return null if the size of the new block is zero*/

	}
	if (new_size == old_size)
		return (ptr);

	 _memcpy(realloc, ptr, size);
	free(ptr);

	return (realloc);
}

