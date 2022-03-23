#include "lists.h"

/**
* print_listint - prints all elements of list_tint list
* @h: header of the list
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int nodecn = 0;

	while (h != NULL)
	{
		if ((*h).n == '\0')
			printf("[0] (nil)\n");

		else
			printf("%i\n", h->n);

		h = h->next;
		nodecn++;
	}

	return (nodecn);
}
