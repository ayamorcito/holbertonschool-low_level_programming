#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * to uppercase
 * @s: string to modify
 *
 * Return: string in uppercase
 */
char *string_toupper(char *alpha)
{
	int it;

	for (it = 0; alpha[it] != '\0'; it++)
	{
		if (alpha[it] >= 97 && alpha[it] <= 122)
			alpha[it] = alpha[it] - 32;
	}

	return (alpha);
}
