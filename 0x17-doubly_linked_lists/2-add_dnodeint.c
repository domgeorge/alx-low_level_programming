#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning of list
 * @head: address of head linked lst
 * @n: number
 *
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	add->prev = NULL;
	if ((*head) == NULL)
	{
		*head = add;
		return (add);
	}
	else
	{
		(*head)->prev = add;
		add->next = *head;
		*head = add;
		return (add);
	}
}
