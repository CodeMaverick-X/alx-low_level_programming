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
	int len = -1;
	dlistint_t *tmp = head;

	if (!head)
		return (NULL);

	while(tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if ((index < 0) || (index > len))
		return (NULL);

	tmp = head;
	len = 0;

	while (len < index)
	{
		temp = temp->next;
		len++;
	}

	return (tmp);
}
