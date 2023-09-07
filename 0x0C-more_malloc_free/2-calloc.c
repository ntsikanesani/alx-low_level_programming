#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: memory to be filled.
 * @b: character to copy.
 * @n: number of times to copy b.
 *
 * return: a pointer to s.
 */

char *_memset(char *s char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}

/**
 * _calloc - allovates memory for an array.
 * @nmemb: number of elements in the array.
 * @size: size of elements.
 *
 * return: a pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
a = malloc(size * nmemb);
if (a == NULL)
{
return (NULL);
}
_memset(a, 0, nmemb * size);
return (a);
}
