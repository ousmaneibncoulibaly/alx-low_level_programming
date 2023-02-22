#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
unsigned long int a, b, c, sum, limit;
limit = 4000000;
sum = 0;
a = 1;
b = 1;
c = a + b;
while (c < limit)
{
sum += c;
a = b + c;
b = c + a;
c = a + b;
}
printf("%lu\n", sum);

return (0);

}
