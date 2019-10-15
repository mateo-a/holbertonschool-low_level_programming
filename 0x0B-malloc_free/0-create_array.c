#include "holberton.h"

/**
 * create_array - function that creates an array of chars, and initializes it
 *                with a specific char
 *
 * @size: integer
 * @c: char
 * Return: A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size != 0)
		array = malloc(size * sizeof(c));
	else
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
