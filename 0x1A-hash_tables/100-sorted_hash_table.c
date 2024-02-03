#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - function creates a sorted shash table
 * @size: size
 *
 * Return: NULL if error otherwise a ptr
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - function adds an elem to sorted shash table
 * @ht: pointer to shash table
 * @key: pointer to char
 * @value: pointer to char for value
 *
 * Return: 0 if failed, -1 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *when;
	shash_node_t *j;
	char *dupv;
	unsigned long int drc;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	dupv = strdup(value);
	if (dupv == NULL)
		return (0);

	drc = key_index((const unsigned char *)key, ht->size);
	j = ht->shead;
	while (j)
	{
		if (strcmp(j->key, key) == 0)
		{
			free(j->value);
			j->value = dupv;
			return (1);
		}
		j = j->snext;
	}

	when = malloc(sizeof(shash_node_t));
	if (when == NULL)
	{
		free(dupv);
		return (0);
	}
	when->key = strdup(key);
	if (when->key == NULL)
	{
		free(dupv);
		free(when);
		return (0);
	}
	when->value = dupv;
	when->next = ht->array[drc];
	ht->array[drc] = when;

	if (ht->shead == NULL)
	{
		when->sprev = NULL;
		when->snext = NULL;
		ht->shead = when;
		ht->stail = when;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		when->sprev = NULL;
		when->snext = ht->shead;
		ht->shead->sprev = when;
		ht->shead = when;
	}
	else
	{
		when = ht->shead;
		while (j->snext != NULL && strcmp(j->snext->key, key) < 0)
			j = j->snext;
		when->sprev = j;
		when->snext = j->snext;
		if (j->snext == NULL)
			ht->stail = when;
		else
			j->snext->sprev = when;
		j->snext = when;
	}

	return (1);
}

/**
 * shash_table_get - function retrieves value in sorted shash table
 * @ht: pointer to shash table
 * @key: pointer to char
 *
 * Return: NULL if not found else the value associated with key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *ele;
	unsigned long int drc;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	drc = key_index((const unsigned char *)key, ht->size);
	if (drc >= ht->size)
		return (NULL);

	ele = ht->shead;
	while (ele != NULL && strcmp(ele->key, key) != 0)
		ele = ele->snext;

	return ((ele == NULL) ? NULL : ele->value);
}

/**
 * shash_table_print - function prints sorted shash table
 * @ht: pointer to the shash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ele;

	if (ht == NULL)
		return;

	ele = ht->shead;
	printf("{");
	while (ele != NULL)
	{
		printf("'%s': '%s'", ele->key, ele->value);
		ele = ele->snext;
		if (ele != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function prints sorted shash table in reverse
 * @ht: pointer to the shash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ele;

	if (ht == NULL)
		return;

	ele = ht->stail;
	printf("{");
	while (ele != NULL)
	{
		printf("'%s': '%s'", ele->key, ele->value);
		ele = ele->sprev;
		if (ele != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - function deletes a sorted shash table
 * @ht: pointer to the shash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *new;
	shash_node_t *ele;
	shash_node_t *j;

	new = ht;

	if (ht == NULL)
		return;

	ele = ht->shead;
	while (ele)
	{
		j = ele->snext;
		free(ele->key);
		free(ele->value);
		free(ele);
		ele = j;
	}

	free(head->array);
	free(head);
}
