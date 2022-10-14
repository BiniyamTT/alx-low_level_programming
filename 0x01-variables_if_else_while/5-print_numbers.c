#include <stdio.h>

/**
 * main - does what it does best
 * Return: 0 Sucess else fail
 */

int main(void)
{
	int i = 0;

	do {
		printf("%d", i++);
	} while (i < 10);
	putchar('\n');
	return (0);
}
