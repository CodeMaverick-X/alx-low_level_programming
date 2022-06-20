#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: destination
 * @src: source
 * @n: intiger
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
