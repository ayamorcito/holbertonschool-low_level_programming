#include "main.h"

/**
 * factorial - returns the lfactorial of a given number
 * @n: factorial to resolve
 * Return: result if correct, -1 if not
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
