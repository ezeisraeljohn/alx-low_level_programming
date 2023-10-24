#include "lists.h"

/**
 * free_listint - frees memory allocated to a linked list of integers
 * @head: the head node
 */
void free_listint(listint_t *head)
{
	listint_t *current_temp;

	if (head == NULL)
		return; /* the list is empty, nothing to free */

	while (head != NULL)
	{
		current_temp = head;
		head = head->next;
		free(current_temp);
	}
}
