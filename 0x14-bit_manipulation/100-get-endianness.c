#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1if small endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	return (*c);
}
