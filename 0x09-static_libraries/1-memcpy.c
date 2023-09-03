#include "main.h"

/**
 * _memcpy - copies a memory area.
 * @dest: memory where it is stored.
 * @src: memory where it is copied.
 * @n: number of bytes.
 *
 * return: copied memory with n bytes changed.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int b = n;
for (; a < b, a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
