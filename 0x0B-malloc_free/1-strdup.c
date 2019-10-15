#include "holberton.h"

/**
 * _strdup - function that returns a pointer to
 *           a newly allocated space in memory,
 *           which contains a copy of the string
 *           given as a parameter.
 *
 * @str: char
 * Return: NULL if str is NULL or if insufficient memory was available.
 *         On success returns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *str_2;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	str_2 = malloc(i * sizeof(char));
	if (str_2 == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		str_2[j] = str[j];
	return (str_2);
}
