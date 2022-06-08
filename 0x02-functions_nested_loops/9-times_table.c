#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int l, n;

	for (l = 48; l <= 57; l++)
	{
		for (n = 48; n <= 57; n++)
		{
			_putchar(n*l);
			if (n < 57)
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
