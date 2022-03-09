#include "function_pointers.h"


/**
 * array_iterator - exects a funct given as a param on each elemnt of an array
 * @size: size of the array
 * @action: pointer to the function you need to use
 * @array: array to look up into
 *
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!size || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
