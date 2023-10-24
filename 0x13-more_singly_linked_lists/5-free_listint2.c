#include "lists.h"

/**
 * free_listint2 - frees memory allocated to a linked list of integers
 * while avoiding dangling pointers
 * @head: a pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return; /* the list is already empty, there's nothing to be free'd */

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}

