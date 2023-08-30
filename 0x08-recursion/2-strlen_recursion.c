#include "main.h"

/**
 * _strlen_recursion - prints the length of the string.
 * @s : the string to calculate.
 * return : an integer.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
