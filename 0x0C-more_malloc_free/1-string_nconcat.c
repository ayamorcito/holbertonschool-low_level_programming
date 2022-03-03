#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: ssecond string to concatenate
 * @n: first n bytes to copy
 * Return: pointer to the array (Success), NULL (Error)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, st1 = 0, st2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (st1 = 0; s1[st1] != '\0'; st1++)
	{
	}
	for (st2 = 0; s2[st2] != '\0'; st2++)
	{
	}
	if (n > st2)
	{
		n = st2;
	}
	p = malloc(((st1 + n) + 1) * sizeof(char));
	if (p  == NULL)
		{
			return (NULL);
		}
		
		
			for (i = 0; i < st1; i++)
			{
				p[i] = s1[i];
			}
			for ( ; i < st1 + (n + 1); i++)
			{
				p[i] = s2[i];
			}
			p[i] = '\0';
			return (p);
		
}
