#include "main.h"

/**
 * Description: _isupper - check if the alphabet is in uppercase or not
 *
 * Input:
 *     @c: [int] --> the ASCII code of the character what will be checked
 *
 * Return:
 *      1 --> when the character is in uppercase
 *      0 --> otherwise
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
