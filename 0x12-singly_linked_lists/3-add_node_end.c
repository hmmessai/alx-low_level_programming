#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 *
 * @head: the first element of the list
 * @str: the string the new node is going to contain
 *
 * Return: the address of the new element 
 * 	or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len])
		len++;
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	while(1)
	{
		if ((*head)->next == NULL)
		{
			(*head)->next = new;
			break;
		}
		else
			*head = (*head)->next;
	}
	return (new);
}
