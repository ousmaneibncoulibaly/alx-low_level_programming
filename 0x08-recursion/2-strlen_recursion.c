#include "main.h"
/**
 * _strlen_recursion - return the lenght of a string
 * @s: string
 * Return: int
*/

int _strlen_recursion(char *s)
{

int i = 0;

if (*s)

{
i++;
i += _strlen_recursion(s + 1);
}

}

