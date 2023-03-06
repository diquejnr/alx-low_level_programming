#include "main.h"
/**
 * reverse_array - function that reverse the content of
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
*/

void print_array(int *a, int n);
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
