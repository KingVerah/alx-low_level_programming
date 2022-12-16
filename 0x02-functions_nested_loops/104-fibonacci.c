#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: Always 0
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, f3 = 0, sum = 0;

	while (f3 < 4000000)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;

		if ((f1 % 2) == 0)
			sum = sum + f1;
	}
	printf("%ld\n", sum);
	
	return (0);
}
