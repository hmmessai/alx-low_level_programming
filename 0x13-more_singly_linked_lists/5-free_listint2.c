#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: the head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	while (temp != NULL)
	{
		*head = *head->next;
		free(temp);
		temp = *head;
	}

	head = NULL;
}
