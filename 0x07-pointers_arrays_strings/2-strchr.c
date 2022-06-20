#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string
 * @c: chars
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	char **t = &s;
	int i;

	for (i = 0; **t != '\0'; i++)
	{
		if (**t == c)
		{
			return (**t);
		}
		**t++;
	}

	return (0);
}
