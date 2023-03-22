#include "main.h"
/**
 * _islower - shows 1 if the input lowercast , 0 if not
 *
 * @c: a character goes here
 *
 * Return: 1 for lowercase , 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
