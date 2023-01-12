#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head of the list
 * @n: the value the node will hold
 * Return: the address of the new element
 *	NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *h = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (h != NULL)
	{
		while (h->next)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;
	new->next = NULL;

	return (new);
}

