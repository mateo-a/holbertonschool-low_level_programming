#include "holberton.h"

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1:char
 * @s2:char
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *p, *emp;
        unsigned int i, k;

        emp = "";
        if (s1 == NULL)
                s1 = emp;
        if (s2 == NULL)
                s2 = emp;
        for (i = 0; s1[i] != '\0'; i++)
                ;
        p = malloc((i + (n * sizeof(*s2) + 1) * sizeof(*p)));
        if (p == NULL)
                return (NULL);
        for (i = 0; s1[i] != '\0'; i++)
                p[i] = s1[i];
        for (k = 0; s2[k] != '\0' && k < n; k++, i++)
                p[i] = s2[k];
        p[i] = '\0';
        return (p);
}
