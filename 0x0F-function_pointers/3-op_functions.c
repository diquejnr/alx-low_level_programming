#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return the sum of 2 no.s
 * @a: 1st no.
 * @b: 2nd no.
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the dff of 2 no.s
 * @a: 1st no.
 * @b: 2nd no.
 *
 * Return: the dff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return multiplication of 2 no.s
 * @a: 1st no.
 * @b: 2ns no.
 *
 * Return: multiple of the 2 no.s
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return division of 2 no.s
 * @a: 1st no.
 * @b: 2nd no.
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return modulation of 2 no.s
 * @a: 1st no.
 * @b: 2nd no.
 *
 * Return: modulation of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
