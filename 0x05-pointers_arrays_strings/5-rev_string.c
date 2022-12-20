#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: String to be reserved
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, len;
	char container;

	len = _strlen(s) - 1;
	i = 0;
	while (i <= len)
	{
		container = s[i];
		s[i] = s[len];
		s[len] = container;
		len--;
		i++;
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

	while (s[len] != '\0')
		len++;

	return (len);
}
