#include "main.h"

/**
 * _strlen ---> return length of string
 * @s: the string that we wana check
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
 * append_text_to_file ---> append text to file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 if pass , 0 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ft;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	ft = open(filename, O_WRONLY | O_APPEND);
	if (ft == -1)
		return (-1);
	if (len)
		bytes = write(ft, text_content, len);
	close(ft);
	return (bytes == len ? 1 : -1);
}