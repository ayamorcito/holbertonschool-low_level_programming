#include "main.h"

/**
 * _islower - checks for lowercase character
 * Return: 1 if lower 0 ifnot
 * @ch: character
 **/

int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
