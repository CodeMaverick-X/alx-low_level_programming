#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element
 * to tyhe hash table
 *
 * @ht: ht is the hash table you wabìnt to add to
 * @key: the key of the element you want to add
 * @value: the value of the element you want to add
 *
 * Return: 1 if succeeded or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	hash_node_t *tmp;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);


	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new;
		return (1);
	}
	else
	{
		tmp = (ht->array)[index];
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		return (1);
	}


	return (0);

}
