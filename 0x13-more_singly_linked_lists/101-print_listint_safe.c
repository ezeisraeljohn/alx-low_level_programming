#include "lists.h"

/**
 * contains - Checks if a node is in the list of visited nodes.
 * @list: The list
 * @node: The node
 *
 * Return: zero
 */
int contains(listint_t *list, listint_t *node)
{
	while (list)
	{
		if (list == node)
			return (1);
		list = list->next;
	}
	return (0);
}

/**
 * add_to_visited - Adds a node to the list of visited nodes.
 * @list: The list
 * @node: The node
 */
void add_to_visited(listint_t **list, listint_t *node)
{
	node->next = *list;
	*list = node;
}

/**
 * handle_loop - Handles a loop if detected.
 * @loop_start: start of the loop
 * @h: pointer to the head
 */
void handle_loop(listint_t *loop_start, listint_t **h)
{
	listint_t *last;
	(void)h;

	last = loop_start;

	while (last->next != loop_start)
	{
		last = last->next;
	}
	last->next = NULL;
}

/**
 * free_listint_safe - Safely frees a linked list with potential loops.
 * @h: Pointer to the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current = *h;
	listint_t *temp;
	listint_t *visited_nodes = NULL;

	while (current)
	{
		/* Check if the current node has been visited before*/
		if (contains(visited_nodes, current))
		{
			/* Handle the loop or break if needed*/
			handle_loop(current, h);
			break;
		}

		/* Mark the current node as visited*/
		add_to_visited(&visited_nodes, current);

		temp = current;
		current = current->next;

		len++;
		free(temp);
	}

	return (len);
}

/**
 * print_listint_safe - Prints the linked list safely.
 * @head: Pointer to the first node in the linked list (const).
 *
 * Return: Number of elements in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	const listint_t *current = head;

	while (current)
	{
		printf("%d\n", current->n);
		len++;

		current = current->next;
	}

	return (len);
}
