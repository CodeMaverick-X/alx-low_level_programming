#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 *
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	char *z = str;
	int n;

	for (; *z != '\0';)
	{
		z++;
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	for (; n < len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
