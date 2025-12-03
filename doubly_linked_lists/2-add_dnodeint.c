#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Pointer to the pointer of the head of the list
 * @n: Integer value to store in the new node
 *
 * Return: Address of the new node, or NULL if memory allocation fails
 *
 * Description:
 *   Allocates memory for a new node, sets its integer value,
 *   inserts it at the beginning of the list, and updates pointers
 *   to maintain the doubly linked list structure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
