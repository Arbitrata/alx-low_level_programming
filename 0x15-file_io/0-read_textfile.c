#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t sizeT;
	ssize_t wy;
	ssize_t t;

	sizeT = open(filename, O_RDONLY);
	if (sizeT == -1) 
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	t = read(sizeT, buf, letters);

	wy = write(STDOUT_FILENO, buf, t);

	free(buf);

	close(sizeT);
	return (wy);
}
