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
	int n;
	int m; 

	for (; *(dest + l) != '\0';)
	{
		l++;
	}

	for (; *(src + x) != '\0';)
	{
		x++;
	}


	for (n = 0; n < l; n++)
	{
		cncat[n] = dest[n];
	}
	

	for (m = 0; m < x; m++)
	{
		cncat[m + n] = src[m];
	}

	return (cncat);
}
