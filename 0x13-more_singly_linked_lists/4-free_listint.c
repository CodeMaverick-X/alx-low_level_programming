#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that prints all the elements of a list
 * @head: list head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
