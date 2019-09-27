#include <stdio.h>
/**
 * main - Entry main function
 *
 * Return: Always 0
 */
int main(void)
{
	long int i = 612852475143;
	int j = 2;

	while (i > j)
	{
		if (i % j == 0)
		{
			i = i / j;
			j = 2;
		}
		else
			j = j + 1;
	}
	printf("%d\n", j);
	return (0);
}
