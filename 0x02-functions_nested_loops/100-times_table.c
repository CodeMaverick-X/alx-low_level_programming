#include <stdio.h>

/**
 * print_times_table - write a function that prints the
 * n times table starting withe 0
 *
 * @n: the number inputed
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, value;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			value  = i * j;
			if (!(j == 0))
				printf(", %3d", value);
			else
				printf("%d", value);

		}
		printf("\n");
	}
}
