#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13
 *
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'm')
			s[i] = s[i] + 13;
		else if (s[i] >= 'n' && s[i] <= 'z')
			s[i] = s[i] - 13;
	}
	return (s);
}
