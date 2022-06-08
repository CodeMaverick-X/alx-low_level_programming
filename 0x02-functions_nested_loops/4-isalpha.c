#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 *
 * @c: reps the ascii code char
 *
 * Return: 1 if its an aplhabet and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
