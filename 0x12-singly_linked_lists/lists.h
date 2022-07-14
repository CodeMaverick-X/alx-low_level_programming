#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string
 * @len: lenght pof string
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char str;
	unsigned int len;
	list_t next;
} list_t;

size_t print_list(const list_t *h);

#endif
