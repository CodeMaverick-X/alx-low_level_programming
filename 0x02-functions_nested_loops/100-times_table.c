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
	int z = 0;
	if (!(n > 15 || n < 0))
	{
	for (l = 0; l <= max; l++)
	{
		printf("%d, ", z);
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
	else
		break;
	
}
