#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t list
 *
 * @head: head of the list
 * @index: the index to be returned
 *
 * Return: the address to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
