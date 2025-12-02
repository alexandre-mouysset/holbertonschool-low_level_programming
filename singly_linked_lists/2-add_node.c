#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to the pointer of the head of the list
 * @str: String to store in the new node
 *
 * Return: Address of the new node, or NULL if it fails
 *
 * Description:
 *   Allocates memory for a new node, duplicates the given string,
 *   calculates its length, and inserts the node at the beginning of the list.
 *   If memory allocation fails, returns NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
