#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file
 * @letters: number of file
 *
 * Return: w- actual number of bytesread and print
 * 0 when files
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	t = read(f, b, letters);
	w = write(STDOUT_FILENO, b, t);

	free(b);
	close(f);
	return (w);
}
