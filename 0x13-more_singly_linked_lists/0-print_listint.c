#include "lists.h"

/**
 * print_listint - Prints the elements of a list
 * @h: The head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
