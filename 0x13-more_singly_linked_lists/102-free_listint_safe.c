#include "lists.h"

/**
 * detect_and_break_loop - Detects and breaks a loop in a linked list.
 * @h: Pointer to the first node in the linked list.
 *
 * Return: The first node in the loop, if detected; otherwise, NULL.
 */
listint_t *detect_and_break_loop(listint_t **h)
{
	listint_t *slow = *h, *fast = *h;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		/* Check for a loop */
		if (slow == fast)
		{
			slow = *h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			fast = fast->next; /**
					    *Move fast to the next node
					    * to keep one reference in the loop
					    */

			/* Break the loop */
			fast->next = NULL;
			return (fast);
		}
	}

	return (NULL);
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
	listint_t *loop_start;

	if (!h || !*h)
		return (0);

	loop_start = detect_and_break_loop(h);

	/* Free the non-loop part of the list */
	while (*h != loop_start)
	{
		listint_t *temp = *h;
		*h = (*h)->next;
		free(temp);
		len++;
	}

	/* Free the loop part of the list */
	while (*h != NULL)
	{
		listint_t *temp = *h;
		*h = (*h)->next;
		free(temp);
		len++;
	}

	return (len);
}

