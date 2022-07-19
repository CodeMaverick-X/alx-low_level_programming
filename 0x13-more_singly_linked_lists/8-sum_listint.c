#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function that sums node data
 * @head: list head
 * Return: 1
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
