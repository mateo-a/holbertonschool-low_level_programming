#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 48;

	while (a <= 57)
	{
	while (b <= 57)
	{
		putchar(a);
		putchar(b);
		if (a != 57 || b != 57)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	a++;
	b = 48;
	}
	putchar('\n');
	return (0);
}
