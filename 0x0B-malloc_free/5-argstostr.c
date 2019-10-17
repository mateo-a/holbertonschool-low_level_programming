#include "holberton.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: integer
 * @av: integer
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str, *pt_head;
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, len++)
			;
		len++;
	}
	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	pt_head = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, str++)
			*str = av[i][j];
		*str = '\n';
		str++;
	}
	*str = '\0';
	return (pt_head);
}
