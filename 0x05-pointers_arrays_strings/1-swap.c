#include "main.h"
/**
 * swap_int - This swaps the value of two integers
 * @a: integer to swap
 * @b: integer to swap
 * return: 0
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
