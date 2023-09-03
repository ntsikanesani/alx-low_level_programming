#include "main.h"

/**
 * _isupper - checks for uppercase letters.
 * @c: the character to be checked.
 * return: 1 for uppercase or 0 for otherwise.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
