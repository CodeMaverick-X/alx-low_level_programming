#include "main.h"
#include <stdio.h>

/**
 * times_table - a function that prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int l, n, h;

	for (l = 0; l <= 9; l++)
	{
		for (n = 0; n <= 9; n++)
		{
			h = n * l;
			if (n < 9)
			{
				printf("%d", h);
				printf(",");
				printf(" ");
			}
			else
			{
				printf("%d", h);
			}
		}
		printf("\n");
	}
}
