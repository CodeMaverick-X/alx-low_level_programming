#include <stdio.h>

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');

	return;
}
