#include "main.h"

/**
 * _isdigit - check the code.
 * @c: digit
 * Return: 1 - digit 0 - Otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
