#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers 
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n > 0)
	{
		for (; n <= 98; n++)
		{
			_putchar(n + '0');
		}
	}
	else if (n < 0)
	{
		for (; n <= 98; n--)
		{
			_putchar(n + '0');
		}
	}
}
