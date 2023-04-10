#include <stdlib.h>
#include "holberton.h"

/**
 * main - Program that takes first two integer arguments and prints the product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argc, int *argv[])
{
	int i, j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= argv[i];

		printf("%d\n", j);
	}

	return (0);
}

