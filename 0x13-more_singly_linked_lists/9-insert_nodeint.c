#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that sums node data
 * @head: list head
 * @idx: index
 * @n: data stored
 * Return: address of the new node or null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *new = NULL;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL || !head)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; ptr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		else
			ptr = ptr->next;
	}

	return (NULL);
}
