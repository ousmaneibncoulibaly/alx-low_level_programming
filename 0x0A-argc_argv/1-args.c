#include <stdlib.h>
#include <stdio.h>
/**
 * main - print number of arguments 
 * @argc: argument counter
 * @argv: argument viewer
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
printf("argc = %d\n", argc);
printf("Let's see what is in argv[]\n");

for(i = 0; i < argc; i++)
{
printf("argv[%d] = %s\n", i, argv[i]);
}
return (0);
}

