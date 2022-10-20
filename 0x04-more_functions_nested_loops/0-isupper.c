#include "main.h"

/**
 * _isupper - check the code.
 * @c: ascii character
 * Return: 1 - Uppercase 0 - Otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
