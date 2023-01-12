#include "lists.h"

/**
 * sum_dlistint - sums all the data in the dlistint_t list
 * @head: the head of the list
 * Return: the sum of all the data
 *	0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}

	sum += head->n;

	return (sum);
}
