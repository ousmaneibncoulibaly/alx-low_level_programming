#include "main.h"
/**
 * wildcmp - compares two strings with wildcard pattern
 * @s1: first input string
 * @s2: second input string with wildcard *
 * Return: 1 if strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
{
return (1);
}
while (*s1 != '\0')
{
if (wildcmp(s1, s2 + 1))
{
return (1);
}
s1++;
}
}
if (*s1 == *s2)
{
if (*s1 == '\0')
{
return (1);
}
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
