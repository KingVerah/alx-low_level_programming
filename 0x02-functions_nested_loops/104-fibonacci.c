#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int f1 = 0, f2 = 1, f3, i;

	while ( i < 98)
	{
		f3 = f1 + f2;
		printf(" %d", f3);
		f1 = f2;
		f2 = f3;
		i = i + 1;
	}
	return (0);
}
