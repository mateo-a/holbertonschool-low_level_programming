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
	char *copy_string;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	copy_string = malloc(i * sizeof(char));
	if (copy_string == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		copy_string[j] = str[j];
		j++;
	}
	return (copy_string);
}
