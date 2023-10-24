#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: a pointer to the head node
 * @number: the integer value to store
 *
 * Return: a pointer to the new head, else NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int number)
{
	listint_t *lastNode, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL); /* failure to allocate memory */

	new_node->n = number;
	new_node->next = NULL;

	/* check if the node is empty */
	if (*head == NULL)
	{
		*head = new_node; /* insert at the beginning */
	}
	else
	{
		/* the list is not empty */
		lastNode = *head;

		/* find the tail and insert new node there */
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = new_node;
	}

	return (new_node);
}
