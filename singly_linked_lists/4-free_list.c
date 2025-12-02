#include "lists.h"

/**
 * free_list - Frees a linked list and its strings
 * @head: Pointer to the head of the list
 *
 * Description:
 *   Iterates through the list, freeing the memory allocated for
 *   each node's string and the node itself.
 *   After completion, all nodes and their strings are deallocated.
 */

void free_list(list_t *head)
{
	list_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
