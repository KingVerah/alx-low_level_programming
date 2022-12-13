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
	int c;
	unsigned long i = 0, j = 1, sum;

	for (c = 0; c < 98; c++)
	{
		sum = i + j;
		printf("%lu", sum);
		i = j;
		j = sum;	
		if (c == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
