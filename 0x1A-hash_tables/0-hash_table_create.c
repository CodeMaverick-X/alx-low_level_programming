#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * of size (size) and an array
 *
 * @size: size of tyhe array/ table
 *
 * Return: table on success or NuLL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;


	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc((size_t)ht->size, sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);

	return (ht);
}
