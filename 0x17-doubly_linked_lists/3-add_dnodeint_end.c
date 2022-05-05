#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list
  * @head: head of the list
  * @n: where to place the new node
  *
  * Return: adds a new node at the end of a dlistint_t list
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nnode = NULL, *now = NULL;

	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	if (*head)
	{
		now = *head;
		while (now->next != NULL)
			now = now->next;

		nnode->next = NULL;
		nnode->prev = now;
		now->next = nnode;
		return (nnode);
	}

	nnode->next = *head;
	nnode->prev = NULL;
	*head = nnode;
	return (*head);
}
