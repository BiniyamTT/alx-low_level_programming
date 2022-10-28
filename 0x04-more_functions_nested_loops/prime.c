#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
unsigned long int root(unsigned long int n)
{
	double m, x;
	m = (double)n;
	x = sqrt(m) + 1;
	unsigned long int y = (int)x;
	return (y);

}

unsigned long int checkprime(unsigned long int n)
{
	unsigned long int i;

	for (i = 2; i <= root(n); i++)
	{
		if (n % i == 0)
		{
			return(0);
		}
		else
			return(1);
	}
	printf("\n");
}


int main(void)
{
	unsigned long int n = 612852475143, maxp = 1, d = 1, i ;

	for (i = 2; i <= root(n); i++)
	{
		if (n % i == 0) /* Means n is divisible by i*/
		{	if (checkprime(i) == 1)
				maxp = i;
			d = n/i;
			if (d > maxp && checkprime(d) == 1)
			{
				maxp = d;
			}
		}
	}
	printf("%lu ", maxp);
	printf("\n");
	return (0);
}
