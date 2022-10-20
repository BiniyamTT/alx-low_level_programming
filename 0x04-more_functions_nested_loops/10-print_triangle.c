#include "main.h"

/**
 * print_triangle - check the code
 * @size: integer
 */

void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (col = size ; col > 0; col--)
			{
				if (col <= row)
					_putchar ('#');
				else
					_putchar (' ');
			}
			_putchar('\n');
		}
	}
}
