#include "lists.h"

/**
 * free_list - frees a list list_t
 *
 * @head: the address to the list to be freed
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	free(head);

	while (1)
	{
		if (temp == NULL)
		{
			free(temp);
			return;
		}

		else
		{
			temp = temp->next;
			free(temp);
		}

	}
}
