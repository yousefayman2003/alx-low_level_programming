#include "main.h"


/**
 * _strlen - get length of a string
 *  @s : given string
 *  Return: length of the string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i];)
		i++;

	return (i);
}

/**
 * create_file - creates a file.
 * @filename: filename to create.
 * @text_content: content to write
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int f, bytes;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		f = open(filename, O_CREAT | O_TRUNC, 0600);
		if (f == -1)
			return (-1);
		return (1);
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes = write(f, text_content, _strlen(text_content));
	if (f == -1 || bytes == -1)
		return (-1);

	close(f);
	return (1);


}
