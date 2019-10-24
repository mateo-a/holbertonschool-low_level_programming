#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @array: array of elements
 * @size_t: size of the array
 * @action: pointer to the function to be used
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	for (i = 0; i < size; i++)
		action(array[i]);
}
