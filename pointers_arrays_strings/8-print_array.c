#include "main.h"
#include <stdio.h>
/**
 * print_array - prin n elements of an array
 * @a: array to print
 * @n: elements to print
 */
void print_array(int *a, int n)
{
	int poi;

	for (poi = 0; poi < n; poi++)
	{
		printf("%d", a[poi]);
		if (poi < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
