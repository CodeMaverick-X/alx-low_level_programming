#include <stdio.h>
/**
 * *malloc_checked - function that allocates memory
 *
 * @b: intiger
 *
 * Return: pionter to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
