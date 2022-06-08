#include "main.h"

/**
 * jack_bauer - Write a function that prints every minute
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h, k, m, n;

	for (h = 48; h <= 50; h++)
	{
		for (k = 48; k <= 57; k++)
		{
			for (m = 48; m <= 53; m++)
			{
				for (n = 48; n <= 57; n++)
				{
					if (h >= 50 && k >= 52)
						break;
					_putchar(h);
					_putchar(k);
					_putchar(':');
					_putchar(m);
					_putchar(n);
					_putchar('\n');
				}
			}
		}
	}
}
