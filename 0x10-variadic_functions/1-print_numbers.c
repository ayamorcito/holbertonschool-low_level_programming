#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: parameters given
 * @separator: is the string to be printed between numbers
 **/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ap);


	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1 || separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		printf("%d%s", va_arg(ap, int), separator);
	}
	printf("\n");

	va_end(ap);
}
