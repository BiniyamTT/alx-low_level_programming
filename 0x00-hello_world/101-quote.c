#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the required phrase using write function
 * Return: 0 -Successful Non 0 - Error
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
