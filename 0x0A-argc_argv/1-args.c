#include <stdio.h>

/**
 * main - prints the arguments passed to the function
 * @argc: argument count
 * @argv: arguments vector array
 *
 * Return: 0 [nothing actually]
 */

int main(int argc, char **argv)
{
(void)argv;

printf("%d\n", argc - 1);
return (0);
}
