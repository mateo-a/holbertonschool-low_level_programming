#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, i;

	if (!array)
		return (-1);
	while (low <= high)
	{
		i = low + (((double)(high - low) / (array[high] - array[low])) *
			  (value - array[low]));
		if (i > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", i);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] < value)
			low = i + 1;
		else if (array[i] > value)
			high = i;
		else
			return (i);
	}
	return (-1);
}
