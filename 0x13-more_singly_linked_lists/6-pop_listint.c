#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: the head of the list
 *
 * Return: the head nodes data(n)
 */

int pop_listint(listint_t **head)
{
	int num;

	if (*head == NULL)
		return (0);

	free(*head);

	return (*head->n);
}
