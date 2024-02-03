#include "hash_tables.h"

/**
 * hash_table_set - function adds an element to hash table
 * @ht: pointer to hash table
 * @key: Key
 * @value: Value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *when;
	char *dupv;
	unsigned long int drc;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	dupv = strdup(value);
	if (dupv == NULL)
		return (0);

	drc = key_index((const unsigned char *)key, ht->size);
	for (i = drc; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dupv;
			return (1);
		}
	}

	when = malloc(sizeof(hash_node_t));
	if (when == NULL)
	{
		free(dupv);
		return (0);
	}
	when->key = strdup(key);
	if (when->key == NULL)
	{
		free(when);
		return (0);
	}
	when->value = dupv;
	when->next = ht->array[drc];
	ht->array[drc] = when;

	return (1);
}
