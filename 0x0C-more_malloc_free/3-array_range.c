#include "holberton.h"

/**
 * array_range - function that creates an array of integers
 *
 * @min: integer min value
 * @max: integer max value
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *p;
	int ran, i;

	if (min > max)
		return (NULL);
	ran = max - min;
	p = malloc((ran + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= ran; min++, i++)
	{
		p[i] = min;
	}
	return (p);
}
