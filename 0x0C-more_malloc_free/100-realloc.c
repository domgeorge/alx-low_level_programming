#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copies memory
 * @dest: destination
 * @src: source
 * @n: size of memory to copy
 * Return: Returns memory copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to modify
 * @old_size: previous memory size
 * @new_size: updated memory size
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == 0)
		return (0);

	_memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (new_ptr);
}
