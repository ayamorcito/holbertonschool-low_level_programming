#ifndef VARARGS
#define VARARGS

#include <stdarg.h>
#include <stdlib.h>



/**
 * struct op - model for structs
 * @c: something
 * @f: something
 **/

typedef struct op
{
	char *c;
	void (*f)(va_list p);
} opp;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
