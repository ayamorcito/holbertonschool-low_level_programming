#include "search_algos.h"

/**
 * binary_search - Searches in a sorted array of integers using binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of element sin the array
 * @value: value to search for
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = 0;
	size_t mid = 0;
	size_t x = 0;

	if (array == NULL)
		return (-1);
	high = size - 1;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (x = low; x < high; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[high]);
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
