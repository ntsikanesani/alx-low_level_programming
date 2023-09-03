#include "main.h"

/**
 * _strlen - returns the length of a the string.
 * @s: the string to be count.
 *
 * return: the length of the string.
 */

int _strlen(char *s)
{
int a = 0;
while (*s != '0')
{
a++;
s++;
}
return (a);
}
