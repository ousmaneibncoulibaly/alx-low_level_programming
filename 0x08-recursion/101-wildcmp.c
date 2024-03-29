#include "main.h"
/**
 * wildcmp - compares two strings with wildcard pattern
 * @s1: first input string
 * @s2: second input string with wildcard *
 * Return: 1 if strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
else if (*s1 == '\0' && *s2 == '*')
{
return (wildcmp(s1, (s2 + 1)));
}
else if (*s1 == '\0' || *s2 == '\0')
{
return (0);
}
if (*s1 == *s2)
{
return (wildcmp((s1 + 1), (s2 + 1)));
}

if (*s2 == '*')
{
if (*(s2 + 1) == '*')
{
return (wildcmp(s1, (s2 + 1)));
}
else if (wildcmp(s1, s2 + 1))
{
return (1);
}
else
return (wildcmp(s1 + 1, s2));
}
return (0);
}
