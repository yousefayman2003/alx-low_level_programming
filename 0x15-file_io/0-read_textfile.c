
#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *			to the POSIX standard output.
 * @filename: file to read.
 * @letters: number of letters to read.
 *
 * Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t n_bytes;

	char buffer[READ_BUFFER_SIZE];

	if (!filename || !letters)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	n_bytes = read(f, &buffer, letters);
	n_bytes = write(STDOUT_FILENO, &buffer, n_bytes);

	close(f);
	return (n_bytes);
}
