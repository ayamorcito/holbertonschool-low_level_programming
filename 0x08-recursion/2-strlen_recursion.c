#include "main.h"

/**
 * _strlen_recursion - returns the lenght of the string
 * @s: string to be printed
 * Return: i 
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}

		i += _strlen_recursion(s + 1) + 1;
		return (i);
}
