#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */

int fib(int n)
{
	if (n == 0)
		return (n+1);
	else if (n > 0 && n <= 2)
		return (n);
	else
		return fib(n-1)+fib(n-2);
}

int main(void)
{
	int i = 0;

	for (; i <=20; i++)
		printf("%d, ",fib(i));
	printf("\n");
	return (0);
}
