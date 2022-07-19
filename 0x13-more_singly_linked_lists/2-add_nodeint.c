#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - function that prints all the elements of a list
 * @h: list head
 * Return: the number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
