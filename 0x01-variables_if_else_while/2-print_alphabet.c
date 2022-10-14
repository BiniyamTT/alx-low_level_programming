#include <stdio.h>

/**
 * main - prints a-z in lowercase
 * Return: 0 Successful else Failed
 */

int main(void)
{
	int i = 97;

	for (; i < 123; i++)
		putchar((char)i);
	putchar('\n');
	return (0);
}
