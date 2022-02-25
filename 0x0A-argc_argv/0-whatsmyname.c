#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - prints the name of the program
 *@argc: number of arguments used
 *@argv: array of pointers (arguments)
 *Return: 0 if correct
 */


int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
