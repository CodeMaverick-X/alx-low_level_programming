#include "main.h"

/**
 * _abs - Write a function that computes the absolute value of an integer
 *
 *@n: the number as intigere
 *
 * Return: returns the absolute value of the inpute
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
