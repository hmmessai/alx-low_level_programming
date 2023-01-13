#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a list
 * @head: the head of the list
 * @index: the index of the node we want
 * Return: the nth node of the list
 *	NULL if it failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	size_t count = 0;

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}

	return (head);
}
