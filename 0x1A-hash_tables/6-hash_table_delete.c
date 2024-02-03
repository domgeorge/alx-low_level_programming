#include "hash_tables.h"

/**
 * hash_table_delete - function deletes the hash table
 * @ht: pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *new;
	hash_node_t *ele;
	hash_node_t *j;
	unsigned long int i;

	new = ht;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ele = ht->array[i];
			while (ele != NULL)
			{
				j = ele->next;
				free(ele->key);
				free(ele->value);
				free(ele);
				ele = j;
			}
		}
	}
	free(new->array);
	free(new);
}
