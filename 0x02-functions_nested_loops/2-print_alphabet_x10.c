#include "holberton.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
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
