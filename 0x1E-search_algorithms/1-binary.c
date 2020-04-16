#include "search_algos.h"
/**
 * print_array - print array
 * @array: array
 * @low: low index
 * @high: high index
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i < high; ++i)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}


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

	if (!array || size <= 0)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		print_array(array, low, high);
		middle = low + (high - low) / 2;
		if (array[middle] < value)
			low = middle + 1;
		else if (array[middle] > value)
			high = middle;
		else
			return (middle);
	}
	return (-1);
}
