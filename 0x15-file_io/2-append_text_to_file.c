#include "main.h"

/**
 * _strlen - get length of a string
 *  @s : given string
 *  Return: length of the string
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	for (i = 0; s[i];)
		i++;

	return (i);
}

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename to append to
 * @text_content: content to append
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f, bytes, len = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		f = open(filename, O_WRONLY | O_APPEND);
		if (f == -1)
			return (-1);
		return (1);
	}
	f = open(filename, O_WRONLY | O_APPEND);
	bytes = write(f, text_content, len);

	if (f == -1 || bytes == -1)
		return (-1);

	close(f);
	return (1);
}
