#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: intiger
 *
 * Return: intiger
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
