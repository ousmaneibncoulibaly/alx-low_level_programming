#include "main.h"
/**
 * _strlen_recursion - print the lenght of a string
 * @s: input string to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
/**
 * pal_checker - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @j: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_checker(char *s, int i, int j)
{
if (i >= j)
{
return (1);
}
else if (s[i] != s[j])
{
return (0);
}
else
return (pal_checker(s, i + 1, j - 1));
}

/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
int i;
i = _strlen_recursion(s) - 1;
return (pal_checker(s, 0, i));
}
