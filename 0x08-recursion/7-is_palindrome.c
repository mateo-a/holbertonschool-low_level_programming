#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: string
 * Return: integer, length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome - function that returns 1 if string is a palindrome and 0 if not
 *
 * @s: string
 * @lon: length
 * Return: integer
 */

int _palindrome(char *s, int lon)
{
	if (lon <= 1)
		return (1);
	if (*s == *(s + lon - 1))
	{
		return (_palindrome(s + 1, lon - 2));
	}
	else
		return (0);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 *                 and 0 if not
 *
 * @s: string
 * Return: integer
 */

int is_palindrome(char *s)
{
	int lon;

	lon = _strlen_recursion(s);
	if (lon <= 1)
		return (1);
	return (_palindrome(s, lon));
}
