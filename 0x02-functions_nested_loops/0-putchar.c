#include "main.h"

/*
 * main - prints _putchar and a new line
 * return: allways 0 if corect, other if not
*/

int main(void)
{
	int a;
	char nombre[] = "_putchar";

	for (a = 0 ; a < 8 ; a++)
	{
		_putchar(nombre[a]);
	}
	_putchar('\n');
	return (0);
}
