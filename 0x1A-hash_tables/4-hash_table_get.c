#include "hash_tables.h"

/**
 * hash_table_get - function retrieves a value associated with a key
 * @ht: pointer to const
 * @key: pointer to char
 *
 * Return: return value if success or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *i;
	unsigned long int drc;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	drc = key_index((const unsigned char *)key, ht->size);
	if (drc >= ht->size)
		return (NULL);

	i = ht->array[drc];
	while (i && strcmp(i->key, key) != 0)
		i = i->next;

	return ((i == NULL) ? NULL : i->value);
}
