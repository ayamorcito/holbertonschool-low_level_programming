#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a *p to a newly allocated space in memory, whith a copy of the string
 * @str: string to copy
 * Return: pointer to the array (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, sz;
	
	if (str == NULL)
	{
		return (NULL);
	}
	else 
	{
		for (sz = 0; str[sz] != '\0'; sz++)

			sz++;

		p = (char *) malloc((sz + 1) * sizeof(char));
		
		if (p  == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i <= sz; i++)
			{
			p[i] = str[i];
			}
			return (p);
		}
	}
}
