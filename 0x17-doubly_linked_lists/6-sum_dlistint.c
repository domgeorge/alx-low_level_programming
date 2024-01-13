#include "lists.h"

/**
 * sum_dlistint - sums up all data of linked list
 * @head: pointer to data getting summed
 * 
 * Return: sum result
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
