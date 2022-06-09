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
	int max = nu;
	int i, h;
	for (l = 0; l <= max; l++)
	{
		printf(0, );
		for (i = 1; i <= max; i++)
		{
			h = i*l;
			if (h <= 9)
			{
				if (i < max)
				{
					printf("  %d, ", h);
				}
				else if (i == max)
				{
					printf("  %d", h);
				}
			}
			else if (h > 9 && h <= 99)
			{
				if (i < max)
				{
					printf(" %d, ", h);
				}
				else if (i == max)
				{
					printf(" %d", h);
				}
			}
			else if(h > 99)
			{
				if (i < max)
				{
					printf("%d, ", h);
				}
				else if (i == max)
				{
					printf("%d", h);
				}
			}
		}
		printf("\n");
	}	
}
