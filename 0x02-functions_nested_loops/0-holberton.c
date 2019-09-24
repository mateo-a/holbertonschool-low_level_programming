#include <stdio.h>
#include "holberton.h"
/**
 *main-prints out Holberton, followed by new line
 *
 *Return: 0
 */

int main(void)
{
	int a;
	char string[9] = "Holberton";

	for (a = 0; a <= 8; a++)
	{
		_putchar(string[a]);
	}
	_putchar('\n');
	return (0);
}
