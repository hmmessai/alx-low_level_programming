#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at the given position of the list
 *
 * @head: the head of the list
 * @idx: index of the list where the new node should be added
 * @n: the value that node will contain
 *
 * Return: the adderess of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	temp = *head;

	if (idx != 0)
	{

		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
	}

	if (temp == NULL && idx != 0)
                return (NULL);


	new = malloc(sizeof(listint_t));
        if (new == NULL)
                return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		*head = new;
	}

	return (new);
}
