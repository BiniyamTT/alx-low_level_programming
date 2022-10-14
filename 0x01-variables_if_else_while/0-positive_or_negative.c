#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Checks wether n is 0, postive or negative
 * Return: 0 Successful Non 0: encountered error
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else
		if (n < 0)
			printf("%d is negative\n", n);
		else
			printf("%d is zero\n", n);

	return (0);
}
