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
	i = 0;
	while (high >= low)
	{
		printf("%u", array[low]);
		if (high != low)
			printf(", ");
		if (high == low)
			printf("\n");
		++low;
	}
}

/**
 * search_binary - binary search
 * @array: pointer to the first element of the array to search in
 * @low: low position in the array
 * @high: high position in the array
 * @value: value to search for
 * Return: the first index where value is located
 */
int search_binary(int *array, size_t low, size_t high, int value)
{
	int mid;

	print_array(array, low, high);
	if (low <= high)
	{
		mid = low + (high - low) / 2;
		if ((mid == 0 || value > array[mid - 1]) && value == array[mid])
			return (mid);
		else if (value > array[mid])
			return (search_binary(array, mid + 1, high, value));
		else
			return (search_binary(array, low, mid, value));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (search_binary(array, 0, size - 1, value));
}
