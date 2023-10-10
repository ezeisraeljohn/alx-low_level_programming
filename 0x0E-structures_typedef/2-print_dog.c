#include <stdio.h>
#include "dog.h"

/**
 * print_dog - This prints the characteristics of the dog
 * @d: - pointer to the structure
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	if (d->age >= 0.0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
