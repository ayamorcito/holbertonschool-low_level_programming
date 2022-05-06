#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: Head of the list
 * Return: the sum of all data, 0 if empty
 **/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	size_t sum;

	if (aux == NULL)
		return (0);

	for (sum = 0; aux != NULL;)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
