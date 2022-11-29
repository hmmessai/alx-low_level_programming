#include "lists.h"

/**
 * print_listint_safe - prints a list
 *
 * @head: the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *h)
{
	const void *ptr;
	size_t nodes = 1;

	if (h == NULL)
		exit(98);

	while (h != NULL)
	{
		ptr = h;
		printf("[%p] %d\n", ptr, h->n);
		h = h->next;
		nodes++;
	}


        return (nodes);
}
