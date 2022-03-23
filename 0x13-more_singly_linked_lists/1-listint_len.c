#include "lists.h"

/**
* listint_len - counts number of elements in a linked listint_t list
* @h: header of the list
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int cn = 0;

	while (h != NULL)
	{
		h = h->next;
		cn++;
	}

	return (cn);
}
