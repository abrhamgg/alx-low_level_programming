#include "search_algos.h"
#include <math.h>
/**
 * jump_search -  function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: pointer to first element of the array
 * @size: size of the array
 * @value: value to search for
 * Return: -1 if not found or return index of elemet
 */

int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	size_t index = 0;
	size_t i = 0;
	int low;
	int flag = 0;

	if (array == NULL)
		return (-1);
	while (i <= size)
	{
		if (array[i] >= value || i + 1 == size)
		{
			if (i + 1 == size)
			{
				printf("Value checked array[%li] = [%i]\n", i, array[i]);
				printf("Value found between indexes[%li] = [%li]\n", i, i + jump);
				printf("Value checked array[%li] = [%i]\n", i, array[i]);
				return (-1);
			}
			else
			{
				index += i;
				printf("Value found between indexes[%li] = [%li]\n", i - jump, index);
			}
			i = size + 1;
			flag = 1;
		}
		else
		{
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
			i += jump;
		}
	}
	if (flag == 0)
		return (-1);
	if (index == 0)
		low = index;
	else
		low = index - jump;
	for (i = low; i <= index; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
