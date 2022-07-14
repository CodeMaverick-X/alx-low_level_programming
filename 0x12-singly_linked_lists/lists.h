#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char str;
	unsigned int len;
	list_t next;
} list_t;

size_t print_list(const list_t *h);

#endif
