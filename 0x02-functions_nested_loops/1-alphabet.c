#include "holberton.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * void: No input parameter
 *
 * Return: No return
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
