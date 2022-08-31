#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end of the list
 * @head: pointer to the head of the list
 * @n: int to be added
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	while (temp->next)

		temp = temp->next;

	temp->next = new;
	new->prev = temp;
	
	return (new);
}
