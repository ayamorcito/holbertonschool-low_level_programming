#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 *main - adds positive numbers
 *@argc: number of arguments used
 *@argv: array of pointers (arguments)
 *Return: 0 if correct, 1 if no arguments used
 */


int main(int argc, char *argv[])
{
	unsigned int i;
	int j, add;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (j = 1; j < argc; j++)
	{
		for (i = 0; i < strlen(argv[j]); i++)
		{
			if (!isdigit (argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	
		add += atoi(argv[j]);
	}
	printf("%d\n", add);
	return (0);
}
