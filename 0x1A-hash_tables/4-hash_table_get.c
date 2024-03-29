#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value
 * associated with a key
 * @ht: the hash table to look into
 * @key: the key you are looking for
 * Return: the value associated with the element
 * or NULL if the jey could not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht || !key || !strcmp(key, ""))
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	if ((ht->array)[index] == NULL)
	{
		return (NULL);
	}

	tmp = (ht->array)[index];

	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}

	return (NULL);

}
