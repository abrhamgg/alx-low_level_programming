#include "search_algos.h"

/**
 * linear_search - function that searches for a value
 * in an array of integers using the Linear search
 * @array: list to be searched
 * @size: size of the array
 * @value: the item we are looking for
 * Return: if value is found return the index
 * or return -1 if anything error occurs
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (value == array[i])
			return (i);
	}
	return (-1);
}
