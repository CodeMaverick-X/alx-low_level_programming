#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list
 * @head: hed pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
