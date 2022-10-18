#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet, in lowercase,
 * 10 times followed by a new line
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int c = 1;

	while (c <= 10)
	{
		char i = 'a';

		for (; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		c++;
	}
}
