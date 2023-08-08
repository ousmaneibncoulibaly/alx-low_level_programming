#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks if a number is prime
 * @n: input number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0); /* Numbers less than or equal to 1 are not prime */
}
return (check_prime(n, 1)); /* Call check prime function */
}
/**
  * check_prime - Check if number is prime
  * @n: the number to be checked
  * @i: the iteration times
  *
  * Return: 1 for prime or 0 composite
  */
int check_prime(int n, int i)
{
if (n % i == 0 && i > 1)
{
return (0);
}
if ((n / i) < i)
{
return (1);
}
return (check_prime(n, i + 1));
}
