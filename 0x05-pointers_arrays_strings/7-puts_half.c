#include "holberton.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 *
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != 0)
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
		for (; j <= i; j++)
			_putchar(str[j]);
	}
	else
	{
		j = (i - 1) / 2;
		for (; j <= i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
