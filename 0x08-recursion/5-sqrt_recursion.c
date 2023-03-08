#include "main.h"
/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: input number to calculate
 *
 * Return: The result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurse to find
 * the natural sqaure root of a number.
 * @n: number to calculate the root of
 * @i: iterator
 *
 * Return: result in sqaure root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
