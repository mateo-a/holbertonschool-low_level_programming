#include <stdio.h>

/**
 *main-prints out Holberton, followed by new line
 *
 *Return: 0
 */

int main(void)
{
	long i, j, count, sum, sum_ac, sum_bd;
	long split_a, split_b, split_c, split_d;

	i = 0;
	j = 1;
	for (count = 0; count < 91; count++)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%ld, ", sum);
	}
	split_a = i / 10000000000;
	split_b = i % 10000000000;
	split_c = j / 10000000000;
	split_d = j % 10000000000;
	for (; count < 98; count++)
	{
		sum_ac = split_a + split_c;
		sum_bd = split_b + split_d;
		if (sum_bd > 10000000000)
		{
			sum_bd %= 10000000000;
			sum_ac++;
		}
		if (count != 97)
		{
			printf("%ld%ld, ", sum_ac, sum_bd);
			split_a = split_c;
			split_b = split_d;
			split_c = sum_ac;
			split_d = sum_bd;
		}
		else
			printf("%ld%ld\n", sum_ac, sum_bd);
	}
	return (0);
}
