#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a
 *                  square matrix of integers
 *
 * @a: array
 * @size: size of matrix
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int i, aux, sum, sum2;

	i = 0;
	aux = 0;
	sum = sum2 = 0;
	while (i < (size * size))
	{
		aux = a[i];
		sum = sum + aux;
		i = i + size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
	{
		aux = a[i];
		sum2 = sum2 + aux;
		i = i + (size - 1);
	}
	printf("%d, %d\n", sum, sum2);
}
