#include "main.h"
/**
 *_puts_recursion - print a string followed by a new line.
 * @s: the string we print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	putchar('\n');
	}
}
