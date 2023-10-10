#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free space asigned for a dog object
 * @_dog: pointer to an instance of the dog structure
 */
void free_dog(dog_t *_dog)
{
	if (_dog == NULL)
		return;

	if (_dog->name != NULL)
		free(_dog->name);
	if (_dog->owner != NULL)
		free(_dog->owner);
	free(_dog);
}
