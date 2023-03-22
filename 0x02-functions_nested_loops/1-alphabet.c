#include "main.h"
/**
 * print_alphabet - Entry
 *
 * Description: 'prints all alphapet in lowercase only'
 * @void parameter
 *
 * Return: 0 if success
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
