#include "search_algos.h"

/**
* linear_search - search for a value in an array using linear
* search.
* @array: array to be searched
* @size: size of the array
* @value: vulue to search for
* Return: return the first index found for that value or -1 otherwise
*/

int linear_search(int *array, size_t size, int value)
{
	int *tmp = array;
	size_t i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, tmp[i]);
		if (tmp[i] == value)
			return (i);
	}
	return (-1);
}
