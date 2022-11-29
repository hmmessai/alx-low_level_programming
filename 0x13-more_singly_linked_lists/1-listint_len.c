#include "lists.h"

/**
 * listint_len - computes the elements inside of the linked list
 *
 * @h: the head of the linked list
 *
 * Return: the number of elements on a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	listint_t *new;

	if (h == NULL)
		return (0);

	new = h->next;
	elements++;

	while (new != NULL)
	{
		new = new->next;
		elements++;
	}

	return (elements);
}
