#include "main.h"

int palindrome(char *, int, int);
int _strlen(char *, int);

/**
 * Description: is_palindrome - check if a string is a palindrome or not
 * Input:
 *	@s: [char pointer] --> points to a string what I will check
 * Return: 1 if yes 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	if (s[0] == '\0')
		return (1);

	len = _strlen(s, 0);

	return (palindrome(s, 0, len - 1));
}



/**
 * Descroption: palindrome - check if a string a plindrome or not
 * Input:
 *	@s: [char pointer] --> points to the string
 *	@lc: [int] --> index of left cursor
 *	@rc: [int] --> index of right cursor
 * Return: 1 if yes otherwise 0
 */

int palindrome(char *s, int rc, int lc)
{
	if (rc > lc || rc == lc)
		return (1);

	if (s[rc] == s[lc])
		return (palindrome(s, ++rc, --lc));

	else
		return (0);
}



/**
 * Description: _strlen - return length of a string
 * Input:
 *	@s: [char pointer] --> points to a str what you wanna know its length
 *	@i: [int] --> index of last character
 * Return: length of the string
 */

int _strlen(char *s, int i)
{
	if (s[i] != '\0')
		return (_strlen(s, ++i));
	else
		return (i);
}
