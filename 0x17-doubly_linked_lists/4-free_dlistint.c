#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list.
  * @head: head of the list
  *
  * 
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *now = head, *next = NULL;

	while (now != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}
}
