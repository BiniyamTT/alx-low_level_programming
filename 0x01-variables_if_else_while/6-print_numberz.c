#include <stdio.h>

/**
 * main - prints 0-9
 * Return: 0 Successful else Failed
 */

int main(void)
{
	int i = 48;

	for (; i <= 57; i++)
		putchar((char)i);
	putchar('\n');
	return (0);
}
