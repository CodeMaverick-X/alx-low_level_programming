#include "main.h"

/**
 * jack_bauer - Write a function that prints every minute 
 *
 * Return: void
 */

void jack_bauer(void)
{
	char h, k, m, n;

	for (h = '0'; h <= '2'; h++)
	{
		for (k = '0'; k <='4'; k++)
		{
			for (m = '0'; m <= '5'; m++)
			{
				for (n = '0'; n <= 9; n++)
				{
					if (h >= '2' && k >= '4')
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
