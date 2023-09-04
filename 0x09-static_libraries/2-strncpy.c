#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: input value.
 * @src: input value.
 * @n: input value.
 *
 * return: dest.
 */

char *_strncpy(char *dest, char *src, char n)
{
int a;
a = 0;
while (a < n && src[a] != '0')
{
dest[a] = src[a];
a++;
}
while (a < n)
{
a++;
}
return (dest);
}
