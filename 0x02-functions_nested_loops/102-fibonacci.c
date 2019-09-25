#include <stdio.h>

/**
 *main-prints out Holberton, followed by new line
 *
 *Return: 0
 */

int main(void)
{
	long i, j, sum, count;

	i = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		sum = i + j;
		i = j;
		j = sum;
		if (count != 49)
			printf("%ld, ", sum);
		else
			printf("%ld\n", sum);
	}
	return (0);
}
