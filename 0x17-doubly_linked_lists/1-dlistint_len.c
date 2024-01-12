#include "lists.h"
/**
 * dlistint_len - length of linked list
 * @h: head of list
 * Return: no of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
