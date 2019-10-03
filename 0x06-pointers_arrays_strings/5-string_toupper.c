#include "holberton.h"

/**
 * string_toupper - function that changes all lowercase letters of a string
 *                  to uppercase
 *
 * @c: char to change
 * Return: char
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}
	return (c);
}
