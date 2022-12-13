#include "main.h"

/**
* print_last_digit - prints thae last digit of a number
* @p: character to be checked
*
* Return: integer
*/

int print_last_digit(int p)
{
	int a = p % 10;

	if (p < 0)
		a = a * -1;

	_putchar(a + '0');

	return (a);
}
