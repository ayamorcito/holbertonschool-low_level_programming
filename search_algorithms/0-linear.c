#include "search_algos.h"

/**
 * linear_search - searches 4 value in an array of int using Linearsearch algo
 * @array: is a pinter to the first element of the array to search in
 * @size: is the number of the elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 *
 **/

int linear_search(int *array, size_t size, int value)
{
	 int i = 0;
	 int sz = size;

	for (i = 0; i < sz; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
