#include <string.h>
#include <stdlib.h>

/**
 * array_range - Creates an array assigning it
 * the values of min and max inclusive
 * @min: The min value to be included
 * @max: The max value to be included
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size = (max + 1) - min;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[i] = i;
		min++;
	}

	return (arr);
}
