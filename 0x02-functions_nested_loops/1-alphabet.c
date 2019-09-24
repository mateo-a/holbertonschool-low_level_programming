#include "holberton.h"

/**
 * print_alphabet - writes the alphabet in lowercase
 * void: No input parameter
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
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
