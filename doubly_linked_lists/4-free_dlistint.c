#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Description:
 *   Traverses the doubly linked list starting from the head,
 *   freeing each node to deallocate all memory used by the list.
 *   After this function, all nodes are properly freed.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary;

	while (head != NULL)
	{
		temporary = head;
		head = head->next;
		free(temporary);
	}
}
