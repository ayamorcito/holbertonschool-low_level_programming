#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: first node of the list_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (NULL);
		free(*(head));
		*head = temp;
		free(temp);
	}
}
