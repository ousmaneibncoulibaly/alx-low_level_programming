#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root, or -1 if n doesn't have natural square root
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (-1);
}
return (check(1, n));
}
/**
 * check - checks for the square root
 * @a: starting point for searching
 * @b: ending point for searching
 * Return: square root of n, or -1 if n doesn't have a natural square root
 */
int check(int a, int b)
{
if (a * a == b)
{
return (a);
}
if (a * a > b)
{
return (-1);
}
return (check(a + 1, b));
}
