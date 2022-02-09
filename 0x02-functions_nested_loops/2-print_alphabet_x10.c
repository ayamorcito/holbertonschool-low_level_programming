#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10 in lowercase
 * Return: void
 **/

void print_alphabet_x10(void)
{
	int ch, i = 0;

	while (i < 10)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		i++;
		_putchar('\n');
	}
}
