#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates an new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: return pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = strdup(name);
	dog->owner = strdup(owner);

	if (dog->name == (NULL) || dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;
	return (dog);
}

