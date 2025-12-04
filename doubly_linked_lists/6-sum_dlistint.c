#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the integers in a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all node values, or 0 if the list is empty
 *
 * Description:
 *   Traverses the doubly linked list from the head, adding up the integer
 *   values stored in each node. Returns the total sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
