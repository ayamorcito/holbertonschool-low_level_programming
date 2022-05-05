#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
  * @head: head of list
  * @n: where to place node
  *
  * Return: the address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode = NULL;

	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	if (*head)
	{
		nnode->next = *head;
		nnode->prev = (*head)->prev;
		(*head)->prev = nnode;
		*head = nnode;
		return (*head);
	}

	nnode->next = *head;
	nnode->prev = NULL;
	*head = nnode;
	return (*head);
}
