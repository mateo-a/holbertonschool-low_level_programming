#include "holberton.h"

/**
 * print_number - prints a number with _putchar
 * @n: Number to print
 *
 * Return: void.
 *
 */
void print_number(int n)
{
	int i = 1, j;
	unsigned int num = n, num2 = n;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	num = n;
	num2 = n;
	while (num >= 10)
	{
		num = num / 10;
		i = i * 10;
	}
	_putchar(num2 / i + '0');
	j = i / 10;
	while (j >= 1)
	{
		_putchar((num2 / j) % 10 + '0');
		j = j / 10;
	}
}
