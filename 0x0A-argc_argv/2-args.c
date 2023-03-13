#include <stdio.h>
#include "main.h"
/**
 * main - print all arguments it receive
 * @argc: no. of arguments
 * @argv: array of arguments
 *
 * Return: Success 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
