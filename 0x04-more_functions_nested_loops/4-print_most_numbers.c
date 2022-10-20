#include "main.h"

/**
 * print_most_numbers - prints 0-9 and a except 2 & 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	char c = '0';

	for (; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		_putchar(c);
	}
	_putchar('\n');

}
