#include "main.h"

/**
 * print_last_digit - check the code
 * @n: integer
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	if (n >= 0)
		return (n % 10);
	else
		return ((-1 * n) % 10);
}
