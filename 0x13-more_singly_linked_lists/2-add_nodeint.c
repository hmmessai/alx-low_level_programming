#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of the list
 *
 * @head: the head of the list
 * @n: the value to add to the new node
 *
 * Return: the address of the new element
 *         NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (0);

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
