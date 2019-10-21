#include <stdio.h>
#ifndef __FILE__
#define __FILE__
#endif

/**
 * main - program that prints the name of the file
 * Return: 0;
 */

int main(void)
{
	printf("%s\n",  __FILE__);
	return (0);
}
