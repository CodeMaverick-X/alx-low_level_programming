#include "main.h"

/**
 * int _islower(int c) - checks if char is lower
 *
 * Return: 1 for lower case. 0  for rest
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
