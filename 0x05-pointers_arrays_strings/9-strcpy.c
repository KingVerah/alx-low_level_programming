#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy paste string
 * @dest: Destination
 * @src: Source
 * Return: Returns the value dest
 */

char *_strcpy(char *dest, char *src)
{
	int cont;

	for (cont = 0; src[cont] != '\0'; cont++)
	{
		dest[cont] = src[cont];
	}
	dest[cont] = '\0';

	return (dest);
}
