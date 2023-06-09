#include <stdio.h>

/**
 * main - prints all arguments in the main
 * @argc: argument count
 * @argv: arguments vector array
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
int count;

for (count = 0; count < argc; count++)
	printf("%s\n", argv[count]);

return (0);
}

