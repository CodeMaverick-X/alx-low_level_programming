#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array -  function that creates an array of chars
 *
 * @size: size
 * @c: character
 *
 * Return: character
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	int i;

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);

}
