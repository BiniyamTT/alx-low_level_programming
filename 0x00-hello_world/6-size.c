#include <stdio.h>

/**
 * main - prints the size of datatypes in c
 * Return: 0 -Successful, Non 0 - Error
 */

int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a long float: %d byte(s)\n", sizeof(float));
	return (0);
}
