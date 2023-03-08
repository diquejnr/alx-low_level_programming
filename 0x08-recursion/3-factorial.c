#include "main.h"
/**
 * factorial - function return factorial
 * @n: a given number
 *
 * Return: error if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
