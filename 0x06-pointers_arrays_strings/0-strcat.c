#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: destination
 * @src: source
 *
 * Return: char destination
 */

char *_strcat(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	for (; dest[l] != '\0';)
	{
		l++;
	}

	for (; src[x] != '\0';)
	{
		dest[l] = src[x];
		l++;
		x++;
	}
	dest[l] = '\0';

	return (dest);
}
