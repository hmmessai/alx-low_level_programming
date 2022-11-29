#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: the head of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rhead;
	listint_t *temp;

	rhead = *head;

	while (rhead != NULL)
	{
		temp = rhead;
		rhead = rhead->next;
		rhead->next = temp;
	}


	return (rhead);
}
