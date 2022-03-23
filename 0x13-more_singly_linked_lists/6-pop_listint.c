#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head of linked list, returns the node’s data
 * @head: first node of the list_t list to be freed
 * Return: int value in head
 **/
int pop_listint(listint_t **head)
{
	int val;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	if (*head != NULL)
	{
		temp = *head;
		val = (*head)->n;
		*head = (temp)->next;
		free(temp);
	}
	return (val);
}
