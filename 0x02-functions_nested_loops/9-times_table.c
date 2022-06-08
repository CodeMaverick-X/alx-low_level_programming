#include "main.h"
#include <stdio.h>

/**
 * times_table - a function that prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int l, n;

	for (l = 0; l <= 9; l++)
	{
		for (n = 0; n <= 9; n++)
		{
			printf("%d*%d",n l);
			if (n < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			else
				break;
		}
		_putchar('\n');
	}
}
