#include "search_algos.h"
/**
 * jump_search -  searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), i = 0, j;

	if (!array)
		return (-1);
	j = jump;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (j < size)
		{
		if (array[i] <= value && value <= array[j])
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       i, j);
			break;
			}
		}
		else
		{
		if (array[i] <= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       i, j);
			break;
		}
		}
		i = j;
		j = i + jump;
	}
	while (i <= j)
	{
		if (i == size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
