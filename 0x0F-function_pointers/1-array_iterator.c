#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a
 * parameter on each element of an array
 * @array: Array to be worked on
 * @size: The size of the array
 * @action: the action to be carried out on the
 * elements of the array
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
