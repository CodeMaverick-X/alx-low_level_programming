#include "main.h"

/**
 * print_most_numbers - function that prints the numbers
 */

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		if (n != '2' && n != '4')
			_putchar(n);
	_putchar('\n');
}
