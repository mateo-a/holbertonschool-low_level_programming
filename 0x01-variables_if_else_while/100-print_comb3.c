#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 49;
	int c = 49;

	while (a <= 57)
	{
		while (b <= 57) 
		{	
		putchar(a);
		putchar(b);
		if (a != 56 || b != 57)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
		}	
	c++;
	b = c;
	a++;
	}
	putchar('\n');
	return (0);
}
