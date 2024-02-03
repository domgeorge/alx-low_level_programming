#include "hash_tables.h"

/**
 * hash_table_print - function that prints the hash table
 * @ht: pointer to const
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ele;
	unsigned long int i;
	unsigned char j;

	j = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (j == 1)
				printf(", ");

			ele = ht->array[i];
			while (ele != NULL)
			{
				printf("'%s': '%s'", ele->key, ele->value);
				ele = ele->next;
				if (ele != NULL)
					printf(", ");
			}
			j = 1;
		}
	}
	printf("}\n");
}
