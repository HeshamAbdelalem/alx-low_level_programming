#include "main.h"

/**
 * _strlen ---> return the length of a string
 * @s: the string length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int count = 0;

	if (!s)
		return (0);

	while (*s++)
		count++;
	return (count);
}

/**
 * create_file ---> create a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 if pass 0 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fl == -1)
		return (-1);
	if (len)
		bytes = write(fl, text_content, len);
	close(fl);
	return (bytes == len ? 1 : -1);
}
