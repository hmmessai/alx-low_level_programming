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

	printf("[%d] %s\n", h->len, h->str);
	a = h->next;
	nodeTotal = 1;

	while (1)
	{

		if (a->next != NULL) 
		{
			if (a->str == NULL)
                        	printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", a->len, a->str);
			a = a->next;
			nodeTotal++;
		}
		else
		{
			if (a->str == NULL)
                                printf("[0] (nil)");
                        else
                                printf("[%d] %s\n", a->len, a->str);

			nodeTotal++;
			return(nodeTotal);
		}
	}
}
