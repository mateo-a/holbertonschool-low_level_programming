#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a, b;
	int c, d;

	for (c = 0; c <= 9; c++)
	{
	for (d = 0; d <= 8; d++)
	{
		for (a = 0; a <= 9; a++)
		{
			for (b = 0; b <= 9; b++)
			{
				if (c != a || d != b)
				{
				putchar(c + '0');
				putchar(d + '0');
				putchar(' ');
				putchar(a + '0');
				putchar(b + '0');
				if (a != 9 || b != 9 || c != 9 || d != 8)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
