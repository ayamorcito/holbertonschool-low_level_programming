#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * Return: 1 is alpha 0 ifnot
 * @ch: character
 **/

int _isalpha(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
