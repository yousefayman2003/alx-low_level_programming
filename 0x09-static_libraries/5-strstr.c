#include "main.h"

/**
 * Description: _strstr - finds the first occurrence of a substr in another one
 * Input:
 *	@haystack: [char pointer] --> a substring
 *	@needle: [char pointer] --> the reference string
 * Return: a pointer to the beginning of the located substring, or
 *		Null if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int start, len1 = 0, len2 = 0;

	if (*needle == 0)
		return (haystack);
	while (haystack[len1] != '\0')
	{
		if (needle[len2] == '\0')
			return (haystack + start);
		else if (haystack[len1] == needle[len2])
		{
			if (len2 == 0)
				start = len1;
			len2++;
		}
		else
			len2 = 0;

		len1++;
	}
	if (needle[len2] == '\0')
		return (haystack + start);
	else
		return ('\0');
}
