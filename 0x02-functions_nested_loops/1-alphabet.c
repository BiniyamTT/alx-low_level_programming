#include "main.h"
#include "putchar.c"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * main - does the checking temporarily
 * Return: Always 0.
 */

void print_alphabet(void)
{
	for (char i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
