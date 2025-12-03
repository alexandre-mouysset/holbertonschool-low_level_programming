#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Pointer to the head of the dlistint_t list
 *
 * Return: The total number of nodes in the list
 *
 * Description:
 *   Traverses the doubly linked list starting from the head,
 *   counting each node until the end of the list is reached.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
