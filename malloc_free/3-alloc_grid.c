#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - pointer to a 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
