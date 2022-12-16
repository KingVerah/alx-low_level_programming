#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, f3;

	for (i = 0; i < 98; i++)
	{
		f3 = f1 + f2;
		printf("%lu", f3);
		f1 = f2;
		f2 = f3;

		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
