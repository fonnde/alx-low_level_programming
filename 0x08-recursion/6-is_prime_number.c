#include "main.h"

int actual_prime(int n, int i);

/**
* is_prime_number - checks if number is prime or else
* @n: number to be checked
*
* Return: 1 if n is a prime number, 0 if n is not a prime number
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
* actual_prime - solves function if number is prime rec
* @n: number to be checked
* @i: iterator
*
* Return: 1 if n is prime, 0 if not
*/
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
