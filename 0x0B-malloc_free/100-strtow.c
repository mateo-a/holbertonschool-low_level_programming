#include "holberton.h"

/**
 * strtow - function that splits a string into words
 * @str: char
 * Return: A pointer to an array of strings (words)
           or NULL if str == NULL or str == ""pointer to an array of words
*/

char **strtow(char *str)
{
	char **array;
	int i, j, k, l, words, len;

	words = k = 0;
	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
	}
	if (words == 0)
		return (NULL);
	array = malloc(((words + 1) * sizeof(char *)));
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i] !=  '\0' && k < words; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++, len++)
				;
			array[k] = malloc((len + 1) * sizeof(char));
			if (array[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(array[k]);
				free(array);
				return (NULL);
			}
			for (l = 0; l < len; l++, i++)
				array[k][l] = str[i];
			array[k++][l] = '\0';
		}
	}
	array[k] = NULL;
	return (array);
}
