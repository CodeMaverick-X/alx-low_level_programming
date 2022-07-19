#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that prints all the elements of a list
 * @head: list head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
