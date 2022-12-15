#include "main.h"

/**
 * print_number - prints an integer
 * @i: random integer
 * Return: void
 */

void print_number(int i)
{
	char l, c;
	int r;
	int t = 0;

	if (i < 0)
	{
		_putchar ('-');
		l = (char)('0' - (i % 10));
		i = i / -10;
	}
		else
		{
			l = (char)((i % 10) + '0');
		i = i / 10;
	}
	r = 0;
	while (i > 0)
	{
		r = r * 10 + (i % 10);
		i = i / 10;
		t++;
	}
	while (r > 0)
	{
		c = (char)((r % 10) + '0');
		_putchar(c);
		r = r / 10;
		t--;
	}
	while (t != 0)
	{
		_putchar('0');
			t--;
	}
	_putchar(l);
}
