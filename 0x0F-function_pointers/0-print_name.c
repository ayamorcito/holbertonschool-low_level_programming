#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @f: pointer to func
 * @name: name to print
 *
 **/

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
	return;

	f(name);
}
