#include "holberton.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * void: No input parameter
 *
 * Return: No return
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
