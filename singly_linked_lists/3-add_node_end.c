#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: Pointer to the pointer of the head of the list
 * @str: String to store in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 *
 * Description:
 *   Allocates memory for a new node, duplicates the given string,
 *   calculates its length, and inserts the node at the end of the list.
 *   If the list is empty, the new node becomes the head.
 *   Returns NULL if memory allocation fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->len = i;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last = *head;

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
