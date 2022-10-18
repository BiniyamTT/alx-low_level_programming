#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char var[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
		_putchar(var[i]);

	_putchar('\n');
	return (0);
}
