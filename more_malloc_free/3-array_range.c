#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create array of int
 * @min: start of values
 * @max: end of values
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int i = 0;
	unsigned int delta = max - min;

/* edge cases */
	if (min > max)
		return (NULL);
/* allocate memory */
	arr = malloc((delta + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

/* logic */
	for (; i <= delta; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
