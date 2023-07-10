#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the  STDOUT.
 * @filename: text file to be read
 * @letters: the number of letters it should read
 * Return: w- the actual number of letters it could read and print
 * 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fn;
	ssize_t w;
	ssize_t t;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fn, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fn);
	return (w);
}

