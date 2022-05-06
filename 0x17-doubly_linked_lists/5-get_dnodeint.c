#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: Head of the list. Pointer to a structure dlistint_s
 * @index: index of the node, starting from 0
 * Return: nth node of a dlistint_t linked list.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;

	if (head == NULL)
		return (0);

	aux = head;

	while (index > 0)
	{
		if (aux->next == NULL)
			return (NULL);

		aux = aux->next;
		index--;
	}
	return (aux);
}
