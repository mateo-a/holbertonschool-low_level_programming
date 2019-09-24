#include <stdio.h>
#include "holberton.h"
/**
 *main-prints out Holberton, followed by new line
 *
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int a = 97;
	int i;

	for (i = 0; i <= 9; i++)
	{
	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	a = 97;
	}
}
