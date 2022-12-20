#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string
 * @str: string to print
 *
 * On sucess: Returns no error
 */

void _pus(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
