#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers 
 *
 * Return: 0
 */

void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n < 98)
		{
			printf("%d, ",n);
		}
		else if (n == 98)
		{
			printf("%d",n);
		}
	}
}
