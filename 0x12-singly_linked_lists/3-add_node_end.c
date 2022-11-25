#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 *
 * @head: the first element of the list
 * @str: the string the new node is going to contain
 *
 * Return: the address of the new element
 *	or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new;
		return (new);
	}

	while(1)
	{
		if (temp->next == NULL)
		{
			temp->next = new;
			break;
		}
		else
			temp = temp->next;
	}
	return (new);
}
