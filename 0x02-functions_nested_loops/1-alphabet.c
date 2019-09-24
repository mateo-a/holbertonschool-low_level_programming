#include <stdio.h>
#include "holberton.h"
/**
 *main-prints out Holberton, followed by new line
 *
 *Return: 0
 */

void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
