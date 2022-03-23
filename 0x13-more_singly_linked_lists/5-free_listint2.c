#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: first node of the list_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	{
		temp = ('\0');
		free(head);
		*head = temp;
	}
}
