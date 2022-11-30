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
	listint_t *new;

	temp = *head;
	new = temp;

	if (temp == NULL)
	{
		printf("Freed !\n");
		return;
	}

	while (new != NULL)
	{
		temp = temp->next;
		free(new);
		new = temp;
	}


	*head = NULL;
}
