#include "main.h"
/**
 * _isalpha - shows 1 if the char a , if not 0
 *
 * @c: the char
 *
 * Return: 1 for a , 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
