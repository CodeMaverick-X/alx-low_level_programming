#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
		for (j = 49; j <= 57; j++)
		{
			if (!(i == 48 && j == 49) && i < j)
			{
				putchar(',');
				putchar(' ');
			}
			if (i < j)
			{
				putchar(i);
				putchar(j);
			}
		}
	putchar('\n');
	return (0);
}
