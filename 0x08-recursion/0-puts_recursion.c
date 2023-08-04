#include "main.h"
/**
 * puts recursion - print a string followed by a new line.
 * @s: the string we print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
