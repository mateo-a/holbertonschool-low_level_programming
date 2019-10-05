#include "holberton.h"

/**
 * infinite_add - adds two numbers
 * @n1: string 1
 * @n2: string 2
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, i, j, k, l, m, add, car, dig1, dig2;

	i = l = j = k = car =  0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	i = i - 1;
	j = j - 1;
	while (i >= 0 || j >= 0)
	{
		dig1 = dig2 = 0;
		if (i >= 0)
			dig1 = n1[i--] - '0';
		if (j >= 0)
			dig2 = n2[j--] - '0';
		add = dig1 + dig2 + car;
		if (add > 9)
		{
			car = 1;
			add = add - 10;
		}
		else
			car = 0;
		r[k++] = (add + '0');
	}
	if (car == 1)
		r[k++] = (1 + '0');
	m = k;
	k = k - 1;
	for (l = 0; l < k; l++, k--)
	{
		num = r[k];
		r[k] = r[l];
		r[l] = num;
	}
	r[m] = '\0';
	return (r);
}
