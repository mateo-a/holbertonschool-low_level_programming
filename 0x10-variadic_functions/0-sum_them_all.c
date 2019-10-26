#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum all arguements
 * @n: number of arguements
 * Return: 0 is n is 0 or return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int add = 0, i = 0;
	va_list arguments;

	va_start(arguments, n);
	while (i < n)
		add += va_arg(arguments, int),  i++;
	va_end(arguments);
	return (add);
}
