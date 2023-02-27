#include "main.h"
/**
 * print_array - function that print n elements of array integers
 * @a: array name
 * @n: the number of elements of the array to be printed
 * @n Return: a and u inputs
*/
void print_array(int *a, int n);
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf('\n');
}

