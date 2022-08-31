#include "lists.h"
/**
 * sum_dlistint - suma list
 * @head: head pointer
 *
 * Return: sum if not empty and 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
