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
}
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}