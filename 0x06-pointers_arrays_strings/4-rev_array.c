#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int val;

	i = 0;
	n = n - 1;
	while (i <= n)
	{
		val = a[i];
		a[i] = a[n];
		a[n] = val;
		i++;
		n--;
	}
}
