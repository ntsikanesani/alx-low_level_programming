#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entery point.
 * @s: input value.
 * @c: input value.
 *
 * return: always 0.
 */

char *_strchr(char *s, char c)
{
int a = 0;
for (; s[a] >= '0'; a++)
{
if (s[a] == c)
{
return (&s[a]);
}
}
return (0);
}
