#include <stdio.h>

/**
 * main - prints fibonnaci numbers
 * Description: prints from 1 to 98
 * Return: Always(0) Success
 */

int main(void)
{
	int a, b, c, n, s;

	n = 98;

	for (c = 1; c <= n; c++)
	{
		if (c == 98)
		{
			printf("%d, ", b);
		}
		else
		{
			printf("%d, ", b);
			s = a + b;
			a = b;
			b = s;
		}
	}
	printf("\n");

	return (0);
}
