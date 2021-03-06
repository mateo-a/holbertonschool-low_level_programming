#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @c: caracter
 * @s: string
 * Return: pointer to first occurence of character c or null if c is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
