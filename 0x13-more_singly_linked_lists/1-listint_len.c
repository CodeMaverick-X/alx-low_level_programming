#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - function that prints all the elements of a list
 * @h: list head
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
