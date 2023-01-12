#include "lists.h"

/**
 * dlistint_len - evaluates the number of elements in a doubly linked list
 * @h: head of the list
 * Return: the number of elements in a doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);
	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
