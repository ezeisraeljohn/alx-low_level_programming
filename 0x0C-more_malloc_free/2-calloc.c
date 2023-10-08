#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory dynamically
 * @nmemb: number to initialize to the memory with
 * @size: the size of the memory
 *
 * Return: returns pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc = malloc(nmemb * sizeof(nmemb));

	if (calloc == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		calloc[i] = 0;
	}
	return (calloc);
}

