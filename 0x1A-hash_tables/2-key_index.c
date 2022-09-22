#include "hash_tables.h"
/**
 * key_index - the function that gives you the
 * index for a key/ hash function
 *
 * @key: the key to be hashed
 * @size: the size of the table
 *
 * Return: the index that the key value pair should be stored
 * in the table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, indx;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	
	indx = hash % size;

	return (indx);

}
