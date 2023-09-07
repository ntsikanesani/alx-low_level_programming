#include <sdtlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a s2 to s1.
 * @s1: the string to append.
 * @s2: the to concatenate from.
 * @n: number of bytes from s2 to s1.
 *
 * return: a pointer to the string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
unsigned int b = 0, c = 0, d1 = 0, d2 = 0;
while (s1 && s1[d1])
{
d1++;
}
while (s2 && s2[d2])
{
d2++;
}
if (n < d2)
{
a = malloc(sizeof(char) * (d1 + n + 1));
}
else
{
a = malloc(sizeof(char) * (d1 + d2 + 1));
}
if (!a)
{
return (NULL);
}
while (b < d1)
{
a[b] = s1[b];
b++
}
while (n < d2 && b < (d1 + n))
{
a[b++] = s2[c++];
}
while (n >= d2 && b < (d1 + d2))
{
a[b++] = s2[c++];
}
a[b] = '\0';
return (a);
}
