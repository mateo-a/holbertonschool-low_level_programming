#include "holberton.h"

/**
 * print_number - function that prints an integer
 *
 * @n: An integer number
 *
 * Return: void
 */

void print_number(int n)
{
	int num = n, i = 1, j = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	while (num / 10 != 0)
	{
		num = num / 10;
		i++;
	}

	for (num = 0; num < i - 1; num++)
	{
		j *= 10;
	}

	while (j >= 1)
	{
		_putchar(n /j + '0');
		n = n % j;
		j = j / 10;
	}
}
