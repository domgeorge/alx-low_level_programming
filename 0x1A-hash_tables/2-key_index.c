#include "hash_tables.h"

/**
 * key_index - function gives you index of a key
 * @key: pointer to key
 * @size: size
 *
 * Return: The index which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
