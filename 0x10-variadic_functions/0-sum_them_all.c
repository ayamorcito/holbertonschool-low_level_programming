#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameters given
 * Return: the sum of all parameters,0 if no parameter given
 **/


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list(ap);


	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}

	va_end(ap);
	return (sum);
}
