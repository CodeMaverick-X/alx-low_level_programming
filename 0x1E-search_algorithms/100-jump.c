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
	int diff, tmp, jmp_linear = 0;
	int jump_step;

	jump_step = sqrt((double)size);
	for (tmp = 0; tmp < (int)size;)
	{
		printf("Value checked array[%d] = [%d]\n", tmp, array[tmp]);
		if (array[tmp] >= value && jmp_linear == 0)
		{
			diff = tmp - jump_step;
			printf("Value found between indexes [%d] and [%d]\n", diff, tmp);
			tmp -= jump_step;
			jmp_linear = 1;
		}
		if (value == array[tmp])
			return (tmp);
		else if (jmp_linear)
			tmp++;
		else if (jmp_linear == 0)
			tmp += jump_step;
	}
	return (-1);
}
