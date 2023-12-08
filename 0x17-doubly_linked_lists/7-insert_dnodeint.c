#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert a new node
 * at a given position.
 * @h: pointer to the pointer to the head of the doubly linked list.
 * @idx: index where the new node should be added.
 * @n: value to be assigned to the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nn, *tmp = *h;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (tmp != NULL)
	{
		if (count == idx - 1)
		{
			nn = malloc(sizeof(dlistint_t));
			if (nn == NULL)
				return (NULL);

			nn->n = n;
			nn->prev = tmp;
			nn->next = tmp->next;

			if (tmp->next != NULL)
				tmp->next->prev = nn;

			tmp->next = nn;
			return (nn);
		}

		tmp = tmp->next;
		count++;
	}

	return (NULL);
}
