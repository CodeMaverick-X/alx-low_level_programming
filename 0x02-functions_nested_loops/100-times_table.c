#include <stdio.h>

/**
 * print_times_table - write a function that prints the n times table starting withe 0
 *
 * @n: the number inputed
 *
 * Return: void
 */

void print_times_table(int n)
{
	int l;
	int max = n;
	int i, h;
	for (l = 0; l <= max; l++)
	{
		for (i = 0; i <= max; i++)
		{
			h = i*l;
			if (i < max)
			{
				printf("%d, ", h);
			}
			else if (i == max)
			{
				printf("%d", h);
			}
		}
		printf("\n");
	}	
}
