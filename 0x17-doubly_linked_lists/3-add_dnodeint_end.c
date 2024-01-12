#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head address of linked list
 * @n: number of new value for new node
 *
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	new->prev = temp;
	temp->next = new;
	return (new);
}
