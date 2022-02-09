#include "main.h"

/**
 * print_square - draws a straight line in the terminal
 * Return: void
 * @size: number of times the character # should be printed
 **/

void print_square(int size)
{

	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0 ; a < size ; a++)
		{
			for (b = 0 ; b < size ; b++)
			{
				if (b == size)
				{ _putchar('\n');
				}
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
