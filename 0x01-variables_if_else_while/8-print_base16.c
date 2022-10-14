#include <stdio.h>

/**
 * main - prints 0-9 and a-e in lowercase
 * Return: 0 Successful else Failed
 */

int main(void)
{
	int c = 97;
	int i = 48;

	for (; i < 58; i++)
		putchar((char)i);
	for (; c < 102; c++)
		putchar((char)c);
	putchar('\n');
	return (0);
}
