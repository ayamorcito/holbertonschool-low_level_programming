#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @string: string to modify
 *
 * Return: the string all caps
 */
char *cap_string(char *string)
{
	int it, ct;

	char sep[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (it = 0; string[it] != '\0'; it++)
	{
		if (it == 0 && string[it] >= 97 && string[it] <= 122)
			string[it] -= 32;

		for (ct = 0; ct < 13; ct++)
		{
			if (string[it] == sep[ct])
			{
				if (string[it + 1] >= 97 && string[it + 1] <= 122)
				{
					string[it + 1] -= 32;
				}
			}
		}
	}

	return (string);
}
