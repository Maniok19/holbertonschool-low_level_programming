#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, with a specific char.
 * @size: size of array
 * @c: char to initialize
 * Return: poiter to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
