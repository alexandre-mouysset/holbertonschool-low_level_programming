#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Pointer to the pointer of the head of the list
 * @n: Integer value to store in the new node
 *
 * Return: Address of the new node, or NULL if memory allocation fails
 *
 * Description:
 *   Allocates memory for a new node, sets its integer value,
 *   and inserts it at the end of the doubly linked list.
 *   Updates the previous and next pointers to maintain the list structure.
 *   If the list is empty, the new node becomes the head.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
