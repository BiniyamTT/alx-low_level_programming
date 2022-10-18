#include "main.h"

/**
 * print_last_digit - check the code
 * @n: integer
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int x = 0;

	if (n >= 0)
		x = (n % 10);
	else
		x = ((-1 * n) % 10);
	_putchar('0' + x);
	return (x);
}
