#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: head of list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
