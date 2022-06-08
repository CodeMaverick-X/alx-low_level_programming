#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number
 *
 * @n: the number int
 *
 * Return: the last digit of the intiger
 */

int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		 _putchar(l + '0');
		 return (l);
	}
}
