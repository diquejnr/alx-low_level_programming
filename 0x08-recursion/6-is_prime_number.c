#include "main.h"
/**
 * is_prime_number - function determines if its an integer or not
 * @n: number to evaluate
 *
 * Return: either 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - caculate if the number is prime or not
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
