#include "main.h"

/**
 * _atoi - ConvertS a string to an integer
 * @s: Type string to convert
 * Return: Converted Integer
 */

int _atoi(char *s)

{
	char l;
	int sign = 1, num = 0;

	while ((l = *s) != '\0' && (l < '0' || l > '9'))
	{
		if (l == '-')
			sign *= -1;
		++s;
	}
	while (l >= '0' && l <= '9')
	{
		num = num * 10;
		num = num - (l - '0');
		l = *(++s);
	}
	return (num * -sign);
}
