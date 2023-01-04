#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array
 * of integers using jumnp search
 *
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: returns the index of value if found or -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	int j, low = 0;
	int block = sqrt((int)size), high = low + block;

	if (!array)
		return (-1);

	while (high < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (value >= array[low] && high < (int)size && value <= array[high])
		{
			printf("Value found between indexes [%d] and [%d]\n", low, high);
			for (j = low; j <= high; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
		low = high;
		high = high + block;
	}
	if (value >= array[low])
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		printf("Value found between indexes [%d] and [%d]\n", low, high);
			for (j = low; j < (int)size; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
	}
	return (-1);
}
