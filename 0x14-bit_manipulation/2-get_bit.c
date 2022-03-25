#include "main.h"

/**
 *get_bit - returns the value of a bit a given index
 *@n: where to check
 *@index: byte to check
 *Return: the value of the bit at index, -1 if error
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	int indval = 0;

	indval = (n >> index) & 1;

return (indval);

}
