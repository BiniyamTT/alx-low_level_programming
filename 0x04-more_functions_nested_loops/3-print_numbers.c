#include "main.h"

/**
 * print_numbers - prints 0-9 and a new line
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	char c = '0';

	for (; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');

}
