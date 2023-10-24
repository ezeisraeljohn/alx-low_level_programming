#include "lists.h"

/**
 * listint_len - This returns the number of elements in list
 * @head: pointer to the first node in the list
 *
 * Return: returns the number of elements in the list
 */
size_t listint_len(const listint_t *head)
{
	int num_el = 0;

	if (head == NULL)
		return (0);/*The list is empty*/

	/*Count the elements*/
	while (head != NULL)
	{
		num_el++;
		head = head->next;
	}
	return (num_el);
}
