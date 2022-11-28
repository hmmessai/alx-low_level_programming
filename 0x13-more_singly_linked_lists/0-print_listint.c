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
	listint_t *new;

	printf("%d\n", h->n);
	new = h->next;
	nodes++;

	if (new != NULL || new->next != NULL)
	{
		printf("%d\n", new->n);
		new = new->next;
		nodes++;
	}



	return (nodes);
}
