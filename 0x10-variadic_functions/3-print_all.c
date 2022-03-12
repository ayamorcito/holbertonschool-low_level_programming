#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*p_s - Ptrints char *
*@str: given argument
*/
void p_s(va_list str)
{
	char *aux = va_arg(str, char *);

	if (aux == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", aux);
}
/**
 *p_c - Ptrints char *
 *@str: given argument
 */
void p_c(va_list str)
{
	printf("%c", (char) va_arg(str, int));
}
/**
 *p_f - Ptrints int
 *@str: given argument
 */
void p_f(va_list str)
{
	printf("%f", (float) va_arg(str, double));
}
/**
 *p_i - Ptrints float
 *@str: given argument
 */
void p_i(va_list str)
{
	printf("%d", va_arg(str, int));
}
/**
 *print_all - Prints any kind of argument given through a va_list
 *i:counter
 *j:counter for struct array
 *@format: const pointer to constanr array of char
 */
void print_all(const char * const format, ...)
{
	chfun pr[] = {
		{"s", p_s},
		{"c", p_c},
		{"i", p_i},
		{"f", p_f},
		{NULL, NULL}
	};

	int i = 0;
	int j = 0;
	char *a = ", ";
	char *b = "";

	va_list str;

	va_start(str, format);

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (pr[j].x != NULL)
		{
			if (pr[j].x[0] == format[i])
			{
				printf("%s", b);
				pr[j].f(str);
				b = a;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(str);
}
