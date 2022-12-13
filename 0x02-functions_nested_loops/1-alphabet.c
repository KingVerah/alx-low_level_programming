#include "main.h"

/**
* main - prints the alphabet in lower case followed by a new line
*
* Return: void
*/
void main(void)
{
	char i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
