#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: the first element of the list
 * @str: the string to be contained in to the newly added node
 *
 * Return: address of the new element or
 * 	NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[len])
	{
		len++;
	}
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
