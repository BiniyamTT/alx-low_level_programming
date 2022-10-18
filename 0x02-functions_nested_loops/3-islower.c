#include "main.h"

/**
 * _islower -  checks for lowercase character.
 * @c: c is an ascii character
 * Return: Always 0.
*/

int _islower(int c)
{
	if ((int)c >= 97 && (int)c <= 123)
		return (1);
	else
		return (0);
}
