#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguements
 * @n: number of arguements
 * Return: 0 is n is 0 or return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
