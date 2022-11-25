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

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
