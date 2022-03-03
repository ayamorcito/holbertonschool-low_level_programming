#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to asing
 * Return: pointer to the allocated memory (Success), NULL (Error)
 */
void *malloc_checked(unsigned int b)
{	
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit (98);
	}
	return (mem);
}
