#include "main.h"

/**
 * read_textfile ---> reads text from file then print it
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: the bytes number that we printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fl;
size_t bytes;
char buf[READ_BUF_SIZE * 8];

if (!filename || !letters)
return (0);
fl = open(filename, O_RDONLY);
if (fl == -1)
return (0);
bytes = read(fl, &buf[0], letters);
bytes = write(STDOUT_FILENO, &buf[0], bytes);
close(fl);
return (bytes);
}
