#include <stdio.h>

/**
* main - Prints all possible combinations of single-digit numbers
* with spaces
*
* Return: Always 0
*/
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
