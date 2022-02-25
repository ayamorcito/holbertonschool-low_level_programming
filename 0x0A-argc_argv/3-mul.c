#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - print the result of the multiplication, followed by a new line
 *@argc: number of arguments used
 *@argv: array of pointers (arguments)
 *Return: 0 if correct, 1 if no arguments used
 */


int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	return (0);
}
