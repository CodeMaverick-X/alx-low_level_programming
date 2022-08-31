#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head pointer
 * @index: idex of node to get from
 *
 * Return: return the nth node of the lsit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int size = 0;
	dlistint_t *tmp = head;

	if (!head)
		return (NULL);

	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}

	return (NULL);
}
