#include "main.h"

/**
 * _isalpha - checks for uppercase character
 * Return: 1 if upper 0 ifnot
 * @c: character
 **/

int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
