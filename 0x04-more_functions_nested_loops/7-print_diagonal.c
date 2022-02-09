#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * Return: void
 * @n: number of times the character _ should be printed
 **/

void print_diagonal(int n)
{

	int a, b;

	if (n <= 0)
	{ 
		_putchar('\n');
	}
	for (a = 0 ; a < n ; a++)
	{
		for (b = a ; b > 0 ; b--)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
