#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Int type array pointer
 * @n: Int type integer
 * Description: Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as they are stored
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
