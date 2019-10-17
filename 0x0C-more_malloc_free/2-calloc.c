#include "holberton.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: unsigned integer
 * @size: unsigned integer
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int s, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = nmemb * size;
	p = malloc(s);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		p[i] = 0;
	return (p);
}
