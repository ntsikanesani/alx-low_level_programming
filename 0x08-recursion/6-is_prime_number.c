#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - returns 1 if n is prime or 0 if not.
 * @n: the number to be checked.
 * return:
 * an integer value.
 */

int is_prime_number(int n)
{
return (check_prime(n, 1));
}

/**
 * check_prime - checks whether a number is prime or not.
 * @n: the number to be checked.
 * @i: the iterate number.
 * return: 1 for prime number or 0 for others
 */

int check_prime(int n, int i)
{
if (n <= 1)
{
return (0);
}
if (n % i == 0 && i > 1)
{
return (0);
}
if ((n / i) < i)
{
return (1);
}
return (check_prime(n, i + 1));
}
