#include "function_pointers.h"


/**
 * int_index - searches for an interger
 * @cmp: parametet to compare to
 * @size: size of the array
 * @array: arrat yo look up into
 * Return: index of the first element if coincidence, -1 if not
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
