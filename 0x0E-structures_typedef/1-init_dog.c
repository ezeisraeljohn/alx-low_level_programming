#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes the variable of type
 * struct dog
 * @d: variable of type dog
 * @name: name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: the the structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
