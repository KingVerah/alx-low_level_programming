#include <stdio.h>

/**
 * main - Prints the largest prime factor
 * of the number 612852475143
 * Return: Alway 0 (Success)
 */

int main(void)
{
	long int i;
	long int p;

	i = 612852475143;
	
	for (p = 2; p < i; p++)
	{
		if (i % p == 0)
		{
			i = i / p;
		}
	}
	printf("%ld\n", p);
	return (0);
}
