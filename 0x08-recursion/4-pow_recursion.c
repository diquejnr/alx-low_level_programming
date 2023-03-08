#include "main.h"
/**
 * _pow_recursion - function that return value of x
 * @x: input value
 * @y: raised to the power y
 *
 * Return: -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y - 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
