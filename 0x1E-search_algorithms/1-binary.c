#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in arraysize of array
 * @value: value to search for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, middle;

	high = 0;
	if (array == NULL)
		return (-1);
	while (size)
	{
		printf("Searching in array: %d", array[0]);
		for (low = 1; low < size; low++)
			printf(", %d", array[low]);
		printf("\n");
		middle = (size - 1) / 2;
		if (array[middle] == value)
		{
			return (middle + high);
		}
		if (array[middle] < value)
		{
			high = high + (middle + 1);
			array += middle + 1;
			if (!(size % 2))
				middle++;
		}
		size = middle;
	}
	return (-1);
}
