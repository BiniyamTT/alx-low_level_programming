#include <stdio.h>

/**
 * main - prints letters a-z without e and q
 * Return: 0 Success else Failed
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
			putchar(c);
	putchar('\n');
	return (0);
}
