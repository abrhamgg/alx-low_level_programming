#include "search_algos.h"
/**
 * binary_recursive - function to recursively loop through the data
 * @low: lowest index of the array
 * @array: array
 * @high: highest index of the array
 * @value: the value we are searching for
 * Return: -1 if not found
 */
int binary_recursive(int *array, int low, int high, int value)
{
	int mid = (low + high) / 2;
	int i;

	if (low > high)
		return (-1);
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
		{
			printf("%i", array[i]);
		}
		else
			printf("%i, ", array[i]);
	}
	printf("\n");
	if (value == array[mid])
		return (mid);
	if (value > array[mid])
		return (binary_recursive(array, mid + 1, high, value));
	else
		return (binary_recursive(array, low, mid - 1, value));
}

/**
 * binary_search - function that searches for value in sorted array
 * @array: list
 * @size: size of array
 * @value: value to search for
 * Return: -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int res;

	if (array == NULL)
		return (-1);
	res = binary_recursive(array, low, high, value);
	if (res == -1)
		return (-1);
	return (res);
}
