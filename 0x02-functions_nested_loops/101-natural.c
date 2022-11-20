#include <stdio.h>

/**
 * main - sums all tghe number uder 1024
 * that are multiples of 5 or 3
 * Return: void
 */

void main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i %  5 == 0)
		{
			sum = i + sum;
		}
	}
	printf("%d\n", sum);
}	
