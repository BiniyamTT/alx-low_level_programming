#include <stdio.h>

/**
 * main - prints z-a in lowercase
 * Return: 0 Successful else Failed
 */

int main(void)
{
	int i = 122;

	for (; i > 96; i--)
		putchar((char)i);
	putchar('\n');
	return (0);
}
