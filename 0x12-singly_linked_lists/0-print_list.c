#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: the pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodeTotal;
	list_t *a;

	if (h == NULL)
		return (0);

	if (h->str != NULL)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	a = h->next;
	nodeTotal = 1;

	while (1)
	{
		if (a->next != NULL)
		{
			if (a->str != NULL)
				printf("[%d] %s\n", a->len, a->str);
			else
				printf("[0] (nil)\n");
			a = a->next;
			nodeTotal++;
		}
		else
		{
			if (a->str != NULL)
				printf("[%d] %s\n", a->len, a->str);
			else
				printf("[0] (nil)\n");

			nodeTotal++;
			return (nodeTotal);
		}
	}
}
