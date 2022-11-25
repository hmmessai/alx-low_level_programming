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


	if (h == NULL)
                return (0);

	new = h->next;
	elementCount = 1;

	while (1)
	{
		if (new->next != NULL)
		{
			new = new->next;
			elementCount++;
		}
		else
		{
			elementCount++;
			break;
		}
	}
	return (elementCount);
}
