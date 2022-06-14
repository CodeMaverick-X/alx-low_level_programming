#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: a
 * @n: n
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i <= n; i++)
	{
		if (i != n)
		{
		printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}