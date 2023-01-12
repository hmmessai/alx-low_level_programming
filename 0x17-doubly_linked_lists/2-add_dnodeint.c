#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: head of the list
 * @n: the value the new node will hold
 * Return: the address of the new element
 * 	NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = temp;
	*head = newNode;

	

	return (newNode);
}
