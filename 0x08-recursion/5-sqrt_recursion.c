#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root, or -1 if n doesn't have natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (_sqrt_helper(n, 1, n));
}

/**
 * _sqrt_helper - recursive helper function to find the square root
 * @n: input number
 * @start: starting point for searching
 * @end: ending point for searching
 * Return: square root of n, or -1 if n doesn't have a natural square root
 */
int _sqrt_helper(int n, int start, int end)
{
int mid;

if (start <= end)
{
mid = (start + end) / 2;

if (mid *mid == n)
{
return (mid);
}
if (mid *mid < n)
{
return (_sqrt_helper(n, mid + 1, end));
}
return (_sqrt_helper(n, start, mid - 1));
}
return (-1);
}
