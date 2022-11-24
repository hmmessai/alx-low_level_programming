#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: pointer to some list_t list
 *
 * Return: the number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	list_t *new;
	unsigned int elementCount;

	new = h->next;
	elementCount = 1;
	while (1)
	{
		if(new->next != NULL)
			elementCount++;
		else
		{
			elementCount++;
			break;
		}
	}
	return (elementCount);
}
