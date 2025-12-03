#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a given index in a list
 * @head: Pointer to the head of the list
 * @index: Index of the node to retrieve (starting from 0)
 *
 * Return: Pointer to the node at the given index, or NULL if it does not exist
 *
 * Description:
 *   Traverses the doubly linked list from the head, counting nodes until the
 *   specified index is reached. Returns the pointer to the node if found,
 *   otherwise returns NULL.
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}
