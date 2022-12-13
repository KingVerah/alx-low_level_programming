#include "main.h"
#include <stdio.h>

/**
* main - finds and prints the first 98 Fibonacci numbers,
* starting with 1 and 2 followed by a new line
*
* Return: Always 0
*/

int main(void)
{
	int i, j, k, n;
	int n1;

	n = 98;

	for (k = 1; k <= n; k++)
	{
		if (k == 98)
		{
			printf("%d, ", j);
			n1 = i + j;
			i = j;
			j = n1;
		}
	}
	printf("\n");

	return (0);
}
