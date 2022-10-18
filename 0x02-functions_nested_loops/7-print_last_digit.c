#include "main.h"

/**
 * print_last_digit - check the code
 * @n: integer
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
		x = -1 * n;

	_putchar('0' + x);
	return (x);
}
