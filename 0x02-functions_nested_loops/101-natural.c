#include <stdio.h>
/**
 *main-prints out Holberton, followed by new line
 *
 *Return: 0
 */

int main(void)
{
	int i, a, b, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		a = i % 3;
		b = i % 5;
		if (a == 0 || b == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
