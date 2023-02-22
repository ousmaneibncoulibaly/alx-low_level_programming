#include "main.h"
/**
 * print_last_digit - code function that prints the last digit of a number.
 *@x: integer.
 *
 * Return: Always 0. (Success)
 */
int print_last_digit(int x)
{
int y, e;
y = x % 10;
if (y < 0)
{
y = -y;
}
e = '0' + y;
_putchar(e);
return (y);
}
