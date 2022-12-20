#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: String to be reserved
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, tmp, len = _strlen(s);
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}

/**
 * _strlen - Returns the length of a string
 * @s: String
 * Return: The length of the given string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
