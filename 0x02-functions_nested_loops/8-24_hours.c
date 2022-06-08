#include "main.h"

/**
 * jack_bauer - Write a function that prints every minute 
 *
 * Return: void
 */

void jack_bauer(void)
{
	char h, k, m, n;

	for (h = '0'; h < '3'; h++)
	{
		for (k = '0'; k < '4'; k++)
		{
			for (m = '0'; m < '6'; m++)
			{
				for (n = '0'; n <= 9; n++)
				{
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
