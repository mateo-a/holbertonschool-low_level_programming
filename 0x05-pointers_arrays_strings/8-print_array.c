#include "holberton.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 *
 * @a: integer
 * @n: integer
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
		if (j == n - 1)
		{
			printf("%d", a[j]);
		}
		else
		{
			printf("%d, ", a[j]);
		}
	printf("\n");
}
