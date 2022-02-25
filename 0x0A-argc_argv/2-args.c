#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - prints the arguments it receives
 *@argc: number of arguments used
 *@argv: array of pointers (arguments)
 *Return: 0 if correct
 */


int main(int argc, char *argv[])
{
	int i;


	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
