#include <stdlib.h>
#include "lists.h"

/**
 * pop_listin - deletes the head node of a listint_t linked list, and returns the head node’s data
 * @head: first node of the list_t list to be freed
 */
int pop_listint(listint_t **head)
{
	int temp;
	
	if (*head == NULL)
		return(0); 
	
	if (*head != NULL)
	{
		temp = (*head)->n;
		*head = (*head)->next;
	}
	if ((*head)->next == NULL)
	{
		free(*head);
	}
	return(temp);
}
