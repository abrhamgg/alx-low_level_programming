#include "search_algos.h"
/**
 * interpolation_search - function that searches a sorted array of
 * integers
 * @array: pointer to first element of the array
 * @size: size of the array
 * @value: value to search for
 * Return: -1 if fails else return index of the value
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos, i;

	if (array == NULL)
		return (-1);
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	for (i = pos; i <= high; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	printf("Value checked array[%li] is out of storage\n", pos);
	return (-1);
}
