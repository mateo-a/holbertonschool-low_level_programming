#include "search_algos.h"
/**
 * result - function to check if the value is in the array
 * @array: pointer to the first element of the array to search in
 * @idx: index
 * @high: final position
 * @siz: number of elements in array
 * @val: value to search for
 * Return: the first index where value is located, otherwise -1
 */
int result(int *array, size_t idx, size_t high, int val, size_t siz)
{
	while (idx <= high)
	{
		if (idx >= siz)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (val == array[idx])
			return (idx);
		idx++;
	}
	return (-1);
}
/**
 * jump_search -  searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), i = 0;

	if (!array)
		return (-1);

	for (; i < size; i += jump)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value >= array[i] && value <= array[i + jump])
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       i, i + jump);
			return (result(array, i, i + jump, value, size));
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
	return (result(array, i - jump, i, value, size));
}
