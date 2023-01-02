#include "search_algos.h"

/**
* binary_search - searches for a value in an array
* using the binary search algo
* @array: the array to be searched
* @size: size of the array
* @value: value to search for
* Return: the index of the value if found or `-1` otherwise
*/

int binary_search(int *array, size_t size, int value)
{
	int *tmp = array;
	int low = 0;
	int i;
	int high = size - 1;
	int mid;

	if (!array)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			if (i != high)
				printf("%d, ", tmp[i]);
			else
				printf("%d", tmp[i]);
		printf("\n");

		mid = (low + high) / 2;
		if (tmp[mid] < value)
			low = mid + 1;
		else if (tmp[mid] == value)
			return (mid);
		else if (tmp[mid] > value)
			high = mid - 1;
	}

	return (-1);
}
