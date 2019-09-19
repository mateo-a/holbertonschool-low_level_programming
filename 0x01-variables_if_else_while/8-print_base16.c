#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;

	while (a <= 102)
	{
		if (a == 58)
		{
		a = a + 39;
		}
	putchar(a);
	a++;
	}
	putchar('\n');
return (0);
}
