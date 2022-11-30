#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: head of the list to be printed
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{

	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->next != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
		else
		{
			printf("%d\n", h->n);
			nodes++;
			break;
		}
		nodes++;
	}

	return (nodes);
}
