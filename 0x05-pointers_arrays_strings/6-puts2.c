#include "main.h"
#include <stdio.h>

/**
* puts2 - Prints every other character of a string
* starting with the first character, followed by a new line.
* @str: String
*
* Return: Nothing
*/

void puts2(char *str)
{
	int i = 0;

	for (str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	putchar('\n');
}
