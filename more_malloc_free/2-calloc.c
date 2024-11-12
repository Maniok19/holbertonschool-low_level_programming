#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - alloc mem for array
 * @nmemb: number of column
 * @size: number of lines
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int **arr;
	unsigned int i = 0;
	unsigned int j = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
/* Alloc first dimmention */
	arr = malloc(nmemb * sizeof(unsigned int *));
	if (arr == NULL)
		return (NULL);
/* Alloc second dimmention*/
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = malloc(size * sizeof(unsigned int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
	}
	return ((void *)arr);
}
