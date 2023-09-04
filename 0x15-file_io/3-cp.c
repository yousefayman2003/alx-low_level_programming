#include "main.h"

/**
 * close_f - closes a file
 * @f: file descriptor
*/
void close_f(int f)
{
	if (close(f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}

/**
 * create_b - creates a 1024 buffer for dest file
 * @f: file name
 *
 * Return: pointer to allocated memory
*/
char *create_b(char *f)
{
	char *b = malloc(sizeof(char) * 1024);

	if (!b)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}

	return (b);
}

/**
 * read_error - exits with status code 98
 *		and print error msg if couldn't read or open file
 * @f: file
 * @buffer: buffer of size 1024
*/
void read_error(char *f, char *buffer)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
	free(buffer);
	exit(98);

}
/**
 * write_error - exits with status code 99
 *              and print error msg if couldn't write or open file
 * @f: file
 * @buffer: buffer of size 1024
*/
void write_error(char *f, char *buffer)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
	free(buffer);
	exit(99);
}

/**
 * main - entry point of program
 * @argc: number of arguments
 * @argv: argument values
 *
 * Return: 0 on success, else failure
*/
int main(int argc, char *argv[])
{
	char *file_to = argv[2];
	char *file_from = argv[1];
	int f_to, f_from, r_bytes, w_bytes;
	char *buffer = create_b(file_to);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_from = open(file_from, O_RDONLY);
	r_bytes = read(f_from, buffer, 1024);

	f_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (r_bytes == -1 || f_from == -1)
			read_error(file_from, buffer);

		w_bytes = write(f_to, buffer, r_bytes);
		if (w_bytes == -1 || f_to == -1)
			write_error(file_to, buffer);

		r_bytes = read(f_from, buffer, 1024);
		f_to = open(file_to, O_WRONLY | O_APPEND);
	} while (r_bytes > 0);

	close_f(f_to);
	close_f(f_from);
	free(buffer);
	return (0);
}
