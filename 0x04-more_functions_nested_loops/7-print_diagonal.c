#include "main.h"

/**
 * print_diagonal - check the code
 * @n: integer
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = i - 1; j > 0; j--)
			{
				_putchar (' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
