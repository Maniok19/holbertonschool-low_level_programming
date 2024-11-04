#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of diagonals of a square matrix int
 * @a: array of array (matrix)
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
