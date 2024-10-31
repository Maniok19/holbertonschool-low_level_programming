#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse array
 * @a: array
 * @n: number of col
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *end = a + n - 1;
	int *start = a;
	int tmp;

	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
