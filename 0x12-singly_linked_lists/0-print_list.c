#include "lists.h"
/**
 * size_t print_list - func that prints all the elements of a list.
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{

	list_t *ptr = h;
	size_t count = 0;	

	while (ptr->next != NULL)
	{
		if (ptr->str)
		{
		printf("[%u] %s\n",ptr->len, ptr->str);
		}
		else
			printf("[0] (nil)\n");
		count++;
		ptr = ptr->next;
	}
	return (count);
}
