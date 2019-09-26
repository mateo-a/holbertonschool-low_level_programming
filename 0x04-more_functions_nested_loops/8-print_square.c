#include "holberton.h"

/**
 * print_square - function that draws a diagonal line on the terminal
 * @size: size of the square
 *
 *
 * Return: void
 */

void print_square(int size)
{
int i;
int j;

if (size <= 0)
{
_putchar('\n');
}
else
{
	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size; j++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
}
}
