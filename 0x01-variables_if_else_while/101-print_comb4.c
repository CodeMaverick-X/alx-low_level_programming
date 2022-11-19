#include <stdio.h>
/**
 * main - random print
 * Return: 0 always
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
		for (j = 49; j <= 57; j++)
			for (k = 50; k <= 57; k++)
			{
				if (!(i == 48 && j == 49 && k == 50) && i < j && j < k)
				{
					putchar(',');
					putchar(' ');
				}
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
				}
			}
	putchar('\n');
	return (0);
}
