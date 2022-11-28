#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head: the head of the list
 * @n: the value the new node will hold
 *
 * Return: the address of the new element
 *         NULL if it failed
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (0);

	new->n = n;
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}

	return (new);
}
