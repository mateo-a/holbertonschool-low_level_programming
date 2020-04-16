#include <math.h>
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
	int jump, low, high, i;
	char *text;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);
	for (i = 0; i < (int)size; i += jump)
	{
		if (value <= array[i])
		{
			low = i - 3;
			high = i;
			text = "Value found between indexes";
			printf("%s [%d] and [%d]\n", text, low, high);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	if (i > (int)size)
	{
		low = i - jump;
		high = low;
		text = "Value found between indexes";
		printf("%s [%d] and [%d]\n", text, low, i);
	}
	for (i = low; i <= high; i++)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
