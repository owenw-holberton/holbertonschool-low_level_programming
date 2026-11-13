#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: pointer to the matrix elements
 * @size: size of the square matrix
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum1;
	long int sum2;

	sum1 = 0;
	sum2 = 0;
	i = 0;
	while (i < size)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
		i++;
	}

	printf("%ld, %ld\n", sum1, sum2);
}
