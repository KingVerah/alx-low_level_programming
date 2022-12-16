#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int i, n;
	int f1 = 0, f2 = 1;
	int t = f1 + f2;

	n = 98;

	for (i = 3; i <= n; i++)
	{
		printf("%d, ", t);
		f1 = f2;
		f2 = t;
		t = f1 + f2;
	}
	return (0);
}
