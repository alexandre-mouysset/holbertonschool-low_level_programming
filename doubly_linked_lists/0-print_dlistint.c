#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: Pointer to the head of the dlistint_t list
 *
 * Return: The number of nodes in the list
 *
 * Description:
 *   Iterates through the doubly linked list starting from the head,
 *   printing the integer stored in each node. Counts and returns
 *   the total number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
