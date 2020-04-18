#include "search_algos.h"
/**
 * print_array - prints array
 * @array: pointer to the first element of the array to search in
 * @low: low position in the array
 * @high: high position in the array
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i = low;

	if (high >= i)
		printf("Searching in array: ");
	while (high >= low)
	{
		printf("%u", array[low]);
		if (high != low)
			printf(", ");
		if (high == low)
			printf("\n");
		low += 1;
	}
}
/**
 * BinarySearch - search the position of the value
 * @array: pointer to the first element of the array to search in
 * @low: low position in the array
 * @high: high position in the array
 * @value: value to search for
 * Return: the first index where value is located
 */
int BinarySearch(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	print_array(array, low, high);
	if (low <= high)
	{
		mid = low + (high - low) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			return (BinarySearch(array, low, mid - 1, value));
		else if (value > array[mid])
			return (BinarySearch(array, mid + 1, high, value));
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	if (i > size - 1)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
		       i / 2, size - 1);
		return (BinarySearch(array, i / 2, size - 1, value));
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
		       i / 2, i);
		return (BinarySearch(array, i / 2, i, value));
	}
}
