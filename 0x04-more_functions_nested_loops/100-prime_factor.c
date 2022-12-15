#include <stdio.h>

/**
 * main - Prints the largest prime factor
 * of the number 612852475143
 * Return: Alway 0 (Success)
 */

int main(void)
{
	long int p, i = 612852475143;
	
	while (p++ < i / 2)
	{
		if (i % p == 0)
		{
			i = i / 2;
			continue;
		}
		for (p = 3; p < i / 2; p = p + 2)
		{
			if (i % p == 0)
				i = i / p;
		}
	}
	printf("%ld\n", p);
	return (0);
}
