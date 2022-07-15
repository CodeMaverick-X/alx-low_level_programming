#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - func that adds a new node at the end of a list_t list.
 * @head: double pointer to head of the list
 * @str: new string to be added
 * Return: pointer to the new string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head == new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
