#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: input value.
 * @src: input value.
 *
 * return: void.
 */

char *_strcat(car *dest, car *src)
{
int a;
int b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '0';
return (dest);
}
