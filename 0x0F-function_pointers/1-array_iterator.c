#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @array: array
 * @size: size
 * action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
