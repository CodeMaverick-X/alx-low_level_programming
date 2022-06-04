#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digt;

	for (digt = 0; digt <= 9; digt++)
	{
		putchar(digt + '0');
		if (digt < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
