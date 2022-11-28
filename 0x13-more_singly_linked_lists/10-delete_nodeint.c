#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *h;
	listint_t *temp;
	listint_t *next;

	h = *head;

	if (h == NULL)
		return (-1);


	for (i = 0; i < index - 1 || h != NULL; i++)
		h = h->next;

	temp = h->next;
	next = temp->next;
	free(temp);
	h->next = next;

	return (1);
}
