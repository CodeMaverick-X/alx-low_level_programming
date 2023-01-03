#ifndef SEARCH_A
#define SEARCH_A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
