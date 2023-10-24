#include "lists.h"

/**
 * *add_nodeint - Adds nodes to the beginning of the list
 * @head: pointer to a pointer to a node of type listint_t
 * @n: member of the node to be created
 *
 * Return: Returns pointer to a linstint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
